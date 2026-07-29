#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include <verilated.h>
#include "verilated_fst_c.h"		//用来生成.fst文件

#include "../keyboard_model/ps2_keyboard_model.h"

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
	int count = 0;			//记录半个周期数
	int num = 0;
	bool s = 0;
	bool nenextdata_n = 1;
	const char* code = "11101110000";
	int ps_co = 0;
/////////////////////////////////////////////
	while(cnt < 10000000){
		if(cnt < 2 * period_ns * 1000) rst_n = 0;
		else rst_n = 1;
		cnt ++;
/////////////////////////////////////////////变量赋值
		ps_clk_cnt = ps_clk;
		if(cnt % (period_ns*500) == 0){ 
			count ++;
			if(count == 5) s = 1;
			if(s == 1){
				ps_data = code[num] - '0';
				printf("%d\n", ps_data);
				ps_co ++;
			}

		if(ps_co % 60 == 0) num++;

		if(s && ps_co % 30 == 0) ps_clk = 1 ^ ps_clk;

			ps_data_cnt = ps_data;
			if(num ==  11){ 
				num = 0;
//				s = 0;
			}
	}

		clk = (cnt % (period_ns*500) == 0)? (1^clk) : clk;	
		top->clk = clk;
		top->eval();
		top->ps2_clk = ps_clk;
		top->ps2_data = ps_data;
		top->clrn = s;
	

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
