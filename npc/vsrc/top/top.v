`ifdef TEST_DECODER
module top(
	input		[1:0]		x		,
	input						En	,

	output	[3:0]		y	
);

ysyx_100022863_decoder ysyx_100022863_decoder_inst(

	.x		(x)	,
	.En		(En),
	.y		(y)
);

endmodule
`endif
