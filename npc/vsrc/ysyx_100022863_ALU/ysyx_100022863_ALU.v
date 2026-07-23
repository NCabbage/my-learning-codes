module ysyx_100022863_ALU(

	input						add_flag	,
	input		[31:0]	A					,
	input		[31:0]	B					,

	output	[31:0]	result		,
	output					overflow	,
	output					carry
);

wire	[31:0]	t_no_cin;

assign t_no_cin = {32{add_flag}} ^ B;
assign {carry, result} = A + t_no_cin;
assign overflow = carry;

endmodule
