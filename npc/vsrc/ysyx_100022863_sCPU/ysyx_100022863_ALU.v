module ysyx_100022863_ALU(

	input	[7:0]		A				,
	input	[7:0]		B				,
	input			bner_en	,
	output	[7:0]	ans		

);

assign ans = bner_en ? A - B : A + B;

endmodule
