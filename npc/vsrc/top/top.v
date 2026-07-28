module top(
	input								clk				,
	input								clrn			,
	input								ps2_clk		,
	input								ps2_data		,

	output				[7:0]	data			,
	output							ready			,
	output							overflow	

);

ysyx_100022863_ps2_keyboard_model ysyx_100022863_ps2_keyboard_model_inst(

	.clk			(clk			),	 
	.clrn			(clrn			),
	.ps2_clk	(ps2_clk		),
	.ps2_data	(ps2_data	),

	.data			(data			),
	.ready		(ready		),
	.overflow	(overflow	)
);

endmodule
