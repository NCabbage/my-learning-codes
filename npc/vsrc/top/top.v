module top(
	input										clk			,
	input										rst_n		,
	input										w				,

	output									z			

);

ysyx_100022863_FSM ysyx_100022863_FSM_inst(

	.clk			(clk		),	 
	.rst_n		(rst_n	),
	.z				(z			),
	.w				(w			)
);

endmodule
