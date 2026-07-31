module ysyx_100022863_GPR(
	input			[1:0]			rd				,
	input			[1:0]			rs1				,
	input			[1:0]			rs2				,
	input			[7:0]			in_data		,

	output		[7:0]			rs1_data	,
	output		[7:0]			rs2_data

);

wire		[7:0]		GPR	[0:3];

assign rs1_data = GPR[rs1];
assign rs2_data = GPR[rs2];
assign GPR[rd]	= in_data	;	

endmodule

