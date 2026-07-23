module top(
	input							add_flag	,
	input		[31:0]		A					,
	input		[31:0]		B					,

	output	[31:0]		result		,
	output						overflow	,
	output						carry			
);

ysyx_100022863_ALU ysyx_100022863_ALU_inst(

	.add_flag			(add_flag		),	
	.A						(A					),
	.B						(B					),
            
	.result				(result			),
	.overflow			(overflow		),
	.carry				(carry			)
);

endmodule
