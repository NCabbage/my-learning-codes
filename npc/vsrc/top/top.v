module top(
	input								clk				,
	input								clrn			,
	input								ps_clk		,
	input								ps_data		,

	output				[7:0]	data			,
	output							ready			,
	output							overflow	

);

ysyx_100022863_ps2_keyboard_model ysyx_100022863_ps2_keyboard_model_inst(

	.clk			(clk			),	 
	.clrn			(clrn			),
	.ps_clk		(ps_clk		),
	.ps_data	(ps_data	),

	.data			(data			),
	.ready		(ready		),
	.overflow	(overflow	)
);

endmodule
