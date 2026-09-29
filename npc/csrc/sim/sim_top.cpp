#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <verilated.h>
#include "verilated_fst_c.h"		//用来生成.fst文件

/////////////////////////////////////////////////////指令存储器
uint32_t ROM[65536] = {
	0x01400513,
	0x010000e7,
	0x00c000e7,
	0x00100073,
	0x00a50513,
	0x00008067
};

uint32_t RAM[65536] = {};

uint32_t inst_read(uint32_t PC){
	return ROM[PC];
}

extern "C" void halt(int inst){
	printf("inst:%x\n", inst);
	if(inst == 0x00100073){
		printf("ebreak!over!\n");
//		exit(0);
	}

}

extern "C" int pmem_read(int raddr){
	return RAM[raddr];
}

extern "C" void pmem_write(int waddr, int wdata, byte wmask){
	uint32_t cnt_data =  0;

	if(wmask & 0x01) cnt_data += wdata & 0x000000ff;
	if(wmask & 0x02) cnt_data += wdata & 0x0000ff00;
	if(wmask & 0x04) cnt_data += wdata & 0x00ff0000;
	if(wmask & 0x08) cnt_data += wdata & 0xff000000;

	RAM[waddr] = cnt_data;
}

/////////////////////////////////////////////////////

const int	period_ns = 10;
int cnt = 0;
int main(int argc, char** argv){
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
