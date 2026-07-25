module top(
	input				[7:0]			din			,
	input				[2:0]			shamt		,
	input									LR			,
	input									AL			,

	output	reg	[7:0]			dout

);

ysyx_100022863_shift_register ysyx_100022863_shift_register_inst(

	.din			(din		),	 
	.shamt		(shamt	),
	.LR				(LR			).
	.AL				(AL			).
       
	.dout			(dout		).
);

endmodule
