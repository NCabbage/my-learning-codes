module keyboard_top(			
	input								clk				,
	input								clrn			,
	input								ps2_clk		,
	input								ps2_data	,

	output			[7:0]		data			,
	output							ready			,
	output							overflow	,
	output			[7:0]		seg0			,
	output			[7:0]		seg1			,
	output			[7:0]		seg2			,
	output			[7:0]		seg3			,
	output			[7:0]		seg4			,
	output			[7:0]		seg5			,
	output      [7:0]		ascll     ,
	output  reg [7:0]		times
);

wire		en;

ysyx_100022863_ps2_keyboard_model ysyx_100022863_ps2_keyboard_model_inst(

	.clk				(clk				),	 
	.clrn				(clrn				),
	.ps2_clk		(ps2_clk		),
	.ps2_data		(ps2_data		),

	.en					(en					),
	.data				(data				),
	.ready			(ready			),
	.overflow		(overflow		),
	.ascll			(ascll			),
	.times			(times			)
);

ysyx_100022863_seg ysyx_100022863_seg_inst0(

	.clk				(clk				),
	.rst_n			(en					),
	.data				(data[3:0]	),

	.seg				(seg0				)

);

ysyx_100022863_seg ysyx_100022863_seg_inst1(

	.clk				(clk				),
	.rst_n			(en					),
	.data				(data[7:4]	),

	.seg				(seg1				)

);

ysyx_100022863_seg ysyx_100022863_seg_inst2(

	.clk				(clk				),
	.rst_n			(en					),
	.data				(ascll[3:0]	),

	.seg				(seg2				)

);

ysyx_100022863_seg ysyx_100022863_seg_inst3(

	.clk				(clk				),
	.rst_n			(en					),
	.data				(ascll[7:4]	),

	.seg				(seg3				)

);

ysyx_100022863_seg ysyx_100022863_seg_inst4(

	.clk				(clk				),
	.rst_n			(clrn				),
	.data				(times[3:0]	),

	.seg				(seg4				)

);

ysyx_100022863_seg ysyx_100022863_seg_inst5(

	.clk				(clk				),
	.rst_n			(clrn				),
	.data				(times[7:4]	),

	.seg				(seg5				)

);



endmodule
