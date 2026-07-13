#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <verilated.h>
#include "verilated_fst_c.h"		//用来生成.fst文件

int main(int argc, char** argv){
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
    // 创建顶层模块实例
  Vtop* top = new Vtop{contextp};
	Verilated::traceEverOn(true); //打开追踪
	VerilatedFstC *tfp= new VerilatedFstC;   //初始化fst对象指针
  top->trace(tfp,99);
  tfp->open("wave.fst");  //保存位置
	int clk = 0;
	while(clk < 1000){ 
		clk ++;
		int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
		top->eval();
		printf("a = %d, b = %d, f = %d\n", a, b, top->f);
		assert(top->f == (a ^ b));

		tfp->dump(contextp->time()); // 记录当前时间的波形数据
    contextp->timeInc(1);// 增加时间步长
	}

	    // 仿真结束后，调用 close() 关闭 VCD 文件。关闭文件是确保所有数据被正确保存的重要步骤。
  tfp->close();

    // 释放资源
  delete top;
  delete contextp;
}
