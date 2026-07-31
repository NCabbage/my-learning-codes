module ysyx_100022863_sALU(

	input	[7:0]		A				,
	input	[7:0]		B				,

	output	[7:0]	ans		

);

assign ans = bner_en ? A - B : A + B;

endmodule
