module top(
	input					clk				,
	input		[31:0]		inst			,
	input					rst_n			,

	output		[31:0]		PC				,
	
	output					error

);

ysyx_100022863_TOP #(
	.INST_WIDTH				(32),
	.PC_WIDTH				(32)
)u_ysyx_100022863_TOP
(

	.clk			(clk	),
	.inst			(inst	),
	.rst_n			(rst_n	),

	.PC				(PC		),
	
	.error			(error	)

);


endmodule
