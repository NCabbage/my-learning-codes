module top(
	input		[2:0]		x		,
	input						En	,

	output	[7:0]		y	
);

yysyx_100022863_decoder ysyx_100022863_decoder_inst1(

	.x		(x[1:0])	,
	.En		(En & ~x[2]),
	.y		(y[3:0])
);

syx_100022863_decoder ysyx_100022863_decoder_inst1(

	.x		(x[1:0])	,
	.En		(En &  x[2]),
	.y		(y[7:0])
);

endmodule
