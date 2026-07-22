module top(
	input		[3:0]		x		,
	input						en	,

	output	[1:0]		y	
);

ysyx_100022863_Priority_Encoder ysyx_100022863_Priority_Encoder_inst(

	.x		(x)	,
	.en		(en),
	.y		(y)
);

endmodule
