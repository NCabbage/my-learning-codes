module top(
	input		[3:0]		x		,
	input						En	,

	output	[1:0]		y	
);

ysyx_100022863_encoder ysyx_100022863_encoder_inst(

	.x		(x)	,
	.En		(en),
	.y		(y)
);

endmodule
