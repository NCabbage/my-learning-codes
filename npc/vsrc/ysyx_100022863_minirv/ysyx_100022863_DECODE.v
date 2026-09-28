module ysyx_100022863_DECODE(

	input		[31:0]		inst		,
	
	output		[4:0]		rs1			,
	output		[4:0]		rs2			,
	output		[31:0]		imm			,
	output		[4:0]		rd			,
	output					addi_en		,
	output					jalr_en

);

wire	[6:0]	opcode		= inst[6:0]		;
wire	[2:0]	funct3		= inst[14:12]	;

assign			rd			= inst[11:7]	;
assign			rs1			= inst[19:15]	;
assign			rs2			= inst[24:20]	;

//addi
wire			opcode_6_0_0010011	= (opcode == 7'b0010011	);
wire			funct3_14_12_000	= (funct3 == 3'b000		);

assign imm = {{20{inst[31]}}, inst[31:20]};
assign addi_en = opcode_6_0_0010011 && funct3_14_12_000;

//jalr
wire			opcode_6_0_1100111 	= (opcode == 7'b1100111	);
wire			funct3_14_12_000	= (funct3 == 3'b000		);

assign jalr_en = opcode_6_0_0010011 && funct3_14_12_000;

endmodule
