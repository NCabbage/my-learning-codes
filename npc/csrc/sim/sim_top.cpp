#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <verilated.h>
#include "verilated_fst_c.h"		//用来生成.fst文件

int main(int argc, char** argv){
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);	// 接收传入的参数

    // 创建顶层模块实例
  Vtop* top = new Vtop{contextp};
	contextp->traceEverOn(true); //打开追踪
	VerilatedFstC *tfp= new VerilatedFstC;   //初始化fst对象指针
  top->trace(tfp,99);
  tfp->open("wave.fst");  //保存位置
	int clk = 0;
	int En = 0;
/////////////////////////////////////////////
	int A = 0, B = 0, func = 0;

/////////////////////////////////////////////
	while(clk < 1000){ 
		clk ++;
/////////////////////////////////////////////变量赋值
//		int A = rand() & 0xf;
//		int B = rand() & 0xf;
//		int func = rand() & 0x7;
		if(clk > 3)	En = 1;
		
		if(clk == 6){
			A = 0xf;
			B = 0x2;
			func = 0;
		}else if(clk == 7){
			A = 0x7;	
			B = 0x1;
		}else if(clk == 8){
			A = 0x8;
			B = 0xF;
		}else if(clk == 9){
			A = 0x0;
			B = 0x1;
			func = 001;
		}else if(clk == 10){
			A = 0x8;
			B = 0x1;
		}
		top->A = A;
		top->B = B;
		top->func = func;
		top->en = En;
/////////////////////////////////////////////////////////
		top->eval();
//		printf("A = %x, B = %x, result = %x, carry =  %d, overfolw = %d\n", top->A, top->B, top->result, top->carry, top->overflow);
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
