module top(
	input														clk				,
	input			[INST_WIDTH-1:0]							inst			,
	input														rst_n			,

	output			[PC_WIDTH-1:0]								PC

);

module ysyx_100022863_TOP #(
	.INST_WIDTH				(32),
	.PC_WIDTH				(32)
)
(

	.clk			(clk	),
	.inst			(inst	),
	.rst_n			(rst_n	),

	.PC				(PC		),

);


endmodule
