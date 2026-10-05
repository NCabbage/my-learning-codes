#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <verilated.h>
#include "verilated_fst_c.h"		//用来生成.fst文件

/////////////////////////////////////////////////////指令存储器
#define MEM_WORDS (64 * 1024 * 1024)
#define VGA_BASE 0x20000000u
#define VGA_SIZE  (256 * 256 * 4)
#define VGA_WORDS (VGA_SIZE / 4)

static uint32_t *ROM;
static uint32_t *RAM;
static uint32_t *vmem;

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

bool halt_flag = false;

static int load_bin(const char *filename, uint32_t *dst, int dst_words) {
    FILE *fp = fopen(filename, "rb");
    if (!fp) {
        fprintf(stderr, "Cannot open %s\n", filename);
        return -1;
    }

    // 每个字 4 字节，最多读 dst_words 个字
    size_t n = fread(dst, sizeof(uint32_t), dst_words, fp);
    fclose(fp);

    return (int)n;
}

// 通用：把 v3.0 hex 格式文件加载到 uint32_t 数组
// 返回加载的字数
static int load_hex(const char *filename, uint32_t *dst, int dst_size) {
    FILE *fp = fopen(filename, "r");
    if (!fp) {
        fprintf(stderr, "Cannot open %s\n", filename);
        return -1;
    }

    char line[2048];
    int total = 0;

    // 跳过第一行标题 "v3.0 hex words addressed"
    if (!fgets(line, sizeof(line), fp)) {
        fclose(fp);
        return 0;
    }

    while (fgets(line, sizeof(line), fp)) {
        char *p = line;

        // 跳过空白
        while (*p && isspace((unsigned char)*p)) p++;
        if (*p == '\0') continue;

        // 找冒号
        char *colon = strchr(p, ':');
        if (!colon) continue;

        // 冒号前：字地址（十六进制）
        unsigned long addr = strtoul(p, NULL, 16);

        // 冒号后：数据
        p = colon + 1;

        for (int i = 0; i < 8; i++) {
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p == '\0') break;

            char *end;
            unsigned long v = strtoul(p, &end, 16);
            if (end == p) break;   // 解析失败

            if ((int)(addr + i) < dst_size) {
                dst[addr + i] = (uint32_t)v;
            }
            p = end;
            total++;
        }
    }

    fclose(fp);
    return total;
}

uint32_t inst_read(uint32_t PC){
	if(PC < 0x80000000 >> 2) return 0;
	else
		return ROM[PC - (0x80000000 >> 2)];
}

extern "C" void halt(int inst, int a0){
//	printf("inst:%x\n", inst);
	if(inst == 0x00100073){
		if(!a0)ANSI_FMT("HIT GOOD TRAP", 42);
		else ANSI_FMT("HIT BAD TRAP", 41);
		halt_flag = true;
//		exit(0);
	}

}

extern "C" int pmem_read(int raddr){
	int craddr = raddr - (0x80000000 >> 2);
	if (craddr < 0 || craddr >= MEM_WORDS) {
        return 0;              // 毛刺 → 返回 0，不崩
    }
//	printf("raddr: %x\n", craddr);
	return RAM[craddr];
}

extern "C" void pmem_write(int waddr, int wdata, int wmask){
//	printf("waddr: %d\n", waddr);
	int cwaddr = waddr - (0x80000000 >> 2);
	if(cwaddr > VGA_BASE && cwaddr < VGA_BASE + VGA_SIZE){
		vmem[cwaddr - VGA_BASE] = wdata;
		return;
	}

	uint32_t old = RAM[cwaddr];
	uint32_t mask = 0;

	if(wmask & 0x1) mask |= 0x000000ff;
	if(wmask & 0x2) mask |= 0x0000ff00;
	if(wmask & 0x4) mask |= 0x00ff0000;
	if(wmask & 0x8) mask |= 0xff000000;

	RAM[cwaddr] = (old & ~mask) | ((uint32_t)wdata & mask);
//	printf("waddr: %x   val:  %x\n", waddr, RAM[waddr]);
}

extern "C" void check(int PC, int raddr){
	if(PC < 0x80000000) return;
	printf("PC: %x  inst: %x raddr: %x\n", PC, ROM[(PC-0x80000000)>>2], raddr);
}


/////////////////////////////////////////////////////

const int	period_ns = 10;
int cnt = 0;
int main(int argc, char** argv){
	if(argc < 2){
		printf("need the bin path!\n");
		return 1;
	}

	const char *rom_path = argv[1];
                                    
/////////////////////////////////////////////////////
    ROM = (uint32_t *)calloc(MEM_WORDS, sizeof(uint32_t));
    RAM = (uint32_t *)calloc(MEM_WORDS, sizeof(uint32_t));
	vmem = (uint32_t *)calloc(VGA_WORDS, sizeof(uint32_t));

//    int n1 = load_hex("/home/cappage/ysyx-workbench/npc/csrc/program.txt", ROM, 30000000);
	int n1 = load_bin(rom_path, ROM, MEM_WORDS);
    if (n1 < 0) exit(1);
    printf("ROM loaded: %d words\n", n1);

//    n1 = load_hex("/home/cappage/ysyx-workbench/npc/csrc/program.txt", RAM, 30000000);
	n1 = load_bin(rom_path, RAM, MEM_WORDS);
    if (n1 < 0) exit(1);
    printf("RAM loaded: %d words\n", n1);

//	for(int i=0;i<10000;i++)
//		printf("RAM[%x]: %x", i, RAM[i]);

/////////////////////////////////////////////////////

  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);	// 接收传入的参数

    // 创建顶层模块实例
  Vtop* top = new Vtop{contextp};
	contextp->traceEverOn(true); //打开追踪
	VerilatedFstC *tfp= new VerilatedFstC;   //初始化fst对象指针
  top->trace(tfp,99);
  tfp->open("wave.fst");  //保存位置
	bool clk = 0;
	int rst_n;

////////////////////////////////////////////时钟

	while(cnt < 200000000 && !halt_flag){
		if(cnt < 2 * period_ns * 1000) rst_n = 0;
		else rst_n = 1;
		cnt ++;
/////////////////////////////////////////////变量赋值

	clk = (cnt % (period_ns*500) == 0)? (1^clk) : clk;	
	top->clk = clk;
	top->rst_n = rst_n;
	top->inst = inst_read(top->PC >> 2);
	top->eval();

/////////////////////////////////////////////////////////
//		if(cnt % (period_ns*1000/2) == 0) printf("ok");
//		assert(top->result == (a + b) || top->result == (a - b));

		tfp->dump(contextp->time()); // 记录当前时间的波形数据
  	contextp->timeInc(1);// 增加时间步长
	}
	    // 仿真结束后，调用 close() 关闭 VCD 文件。关闭文件是确保所有数据被正确保存的重要步骤。
  tfp->close();

    // 释放资源
  	delete top;
  	delete contextp;
}
