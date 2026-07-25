module top(
	input										clk			,
	output				[7:0]			out			,

);

ysyx_100022863_LFSR ysyx_100022863_LFSR_inst(

	.clk			(clk		),	 
	.out			(out		),
);

endmodule
