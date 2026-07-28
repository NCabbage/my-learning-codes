#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <verilated.h>
#include "verilated_fst_c.h"		//用来生成.fst文件

#include "keyboard_model.h"

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
/////////////////////////////////////////////
	int w;
	bool ps_clk = 1, ps_data = 1;
	bool ps_clk_cnt, ps_data_cnt;
	int count = 0;
	int num = 0;
/////////////////////////////////////////////
	while(cnt < 100000){
		if(cnt < 5 * period_ns * 1000) rst_n = 0;
		else rst_n = 1;
		cnt ++;
/////////////////////////////////////////////变量赋值
		if(cnt % (period_ns*1000/2) == 0){ 
			count ++;
			ps_clk_cnt = ps_clk;
			ps_clk = ge_clk(ps_clk_cnt, count, 60);
			ps_data_cnt = ps_data;
			if(~ps_clk && ps_clk) num ++;
			if(num ==  11) num = 0;
			ps_data = send(~ps_clk && ps_clk, ps_data_ps_data_cnt, num, 0x770);
			clk = 1 ^ clk;	
			w = rand() & 0x1;
			top->clk = clk;
			top->eval();
			top->ps2_clk = ps_clk;
			top->ps2_data = ps_data;
			top->clrn = rst_n;
		}
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
