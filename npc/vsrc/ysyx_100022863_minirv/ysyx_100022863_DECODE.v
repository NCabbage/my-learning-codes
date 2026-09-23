module ysyx_100022863_DECODE(

	input		[31:0]		inst		,
	
	output	[31:0]		rs1			,
	output	[31:0]		rs2			,
	output	[31:0]		imm			,
	output	[31:0]		rd			,
	output						addi_en	,

);

wire	[6:0]		opcode	= inst[6:0]		;
wire	[11:7]	rd			= inst[11:7]	;
wire	[14:12]	funct3	= inst[14:12]	;
wire	[19:15]	rs1			= inst[19:15]	;
wire	[24:20]	rs2			= inst[24:20]	;
wire	[31:25]	funct7	= inst[31:25]	;

wire	opcode_6_0_0010011	= (opcode == 7'b0010011);

wire	funct3_14_12_000		= (funct3 == 3'b000);

assign addi_en = opcode_6_0_0010011 && func3_14_12_000;

endmodule
