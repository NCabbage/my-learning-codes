module top(
	input		[1:0]		x		,
	input						En	,

	output	[3:0]		y	
);

`ifdef TEST_DECODER
ysyx_100022863_decoder ysyx_100022863_decoder_inst(

	.x		(x)	,
	.En		(En),
	.y		(y)
);
`endif

endmodule
