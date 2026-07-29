module top(
	input								clk				,
	input								clrn			,
	input								ps2_clk		,
	input								ps2_data	,

	output			[7:0]		data			,
	output							ready			,
	output							overflow	,
	output			[7:0]		seg0			,
	output			[7:0]		seg1	

);

ysyx_100022863_ps2_keyboard_model ysyx_100022863_ps2_keyboard_model_inst(

	.clk				(clk				),	 
	.clrn				(clrn				),
	.ps2_clk		(ps2_clk		),
	.ps2_data		(ps2_data		),

	.data				(data				),
	.ready			(ready			),
	.overflow		(overflow		)
);

ysyx_100022863_seg ysyx_100022863_seg_inst0(

	.clk				(clk				),
	.rst_n			(ready			),
	.data				(data[3:0]	),

	.seg				(seg0				)

);

ysyx_100022863_seg ysyx_100022863_seg_inst1(

	.clk				(clk				),
	.rst_n			(rst_n			),
	.data				(data[7:4]	),

	.seg				(seg1				)

);



endmodule
