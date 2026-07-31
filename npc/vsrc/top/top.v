module top(
	input							clk				,				//25M
	input							rst_n			,
	
	output		[7:0]		ans				
);

ysyx_100022863_sCPU ysyx_100022863_sCPU_inst(

	.clk		(clk		),
	.rst_n	(rst_n	),

	.ans		(ans		)

);

endmodule
