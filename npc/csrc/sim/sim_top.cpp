#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <verilated.h>
#include "verilated_fst_c.h"		//用来生成.fst文件

/////////////////////////////////////////////////////指令存储器
uint32_t ROM[65536*2] = {
	0x01400513,
	0x010000e7,
	0x00c000e7,
	0x00100073,
	0x00a50513,
	0x00008067
};

uint32_t RAM[65536*2] = {};


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

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
	return ROM[PC];
}

extern "C" void halt(int inst){
//	printf("inst:%x\n", inst);
	if(inst == 0x00100073){
		printf("ebreak!over!\n");
//		exit(0);
	}

}

extern "C" int pmem_read(int raddr){
	printf("raddr: %x\n", raddr);
	return RAM[raddr];
}

extern "C" void pmem_write(int waddr, int wdata, int wmask){
	printf("waddr: %d\n", waddr);
	RAM[waddr] = wdata << (wmask*8);
}

extern "C" void check(int PC, int raddr){
	printf("PC: %x   raddr: %x\n", PC, raddr);
}


/////////////////////////////////////////////////////

const int	period_ns = 10;
int cnt = 0;
int main(int argc, char** argv){

/////////////////////////////////////////////////////
    int n1 = load_hex("/home/cappage/ysyx-workbench/npc/csrc/program.txt", ROM, 65536*2);
    if (n1 < 0) exit(1);
    printf("ROM loaded: %d words\n", n1);

    n1 = load_hex("/home/cappage/ysyx-workbench/npc/csrc/program.txt", RAM, 65536*2);
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

	while(cnt < 20000000){
		if(cnt < 2 * period_ns * 1000) rst_n = 0;
		else rst_n = 1;
		cnt ++;
/////////////////////////////////////////////变量赋值

	clk = (cnt % (period_ns*500) == 0)? (1^clk) : clk;	
	top->clk = clk;
	top->eval();
	top->rst_n = rst_n;
	top->inst = inst_read(top->PC >> 2);

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
