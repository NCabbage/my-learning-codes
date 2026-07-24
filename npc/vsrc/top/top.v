module top(
	input									clk				,
	input									rst_n			,
	input					[2:0]		func			,
	input					[7:0]		in				,
	input									left_in		,

	output	reg		[7:0]		out

);

ysyx_100022863_shift_register ysyx_100022863_shift_register_inst(

	.clk			(clk		),
	.rst_n		(rst_n	),
	.func			(func		),
	.in				(in			),
	.left_in	(left_in),

	.out			(out		)

);

endmodule
