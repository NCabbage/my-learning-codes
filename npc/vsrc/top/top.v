module top(
	input										clk			,
	input										rst_n		,

	output				[7:0]			out			

);

ysyx_100022863_LFSR ysyx_100022863_LFSR_inst(

	.clk			(clk		),	 
	.rst_n		(rst_n	),
	.out			(out		)
);

endmodule
