module ysyx_100022863_DECODE(

	input		[31:0]		inst		,
	
	output		[4:0]		rs1			,
	output		[4:0]		rs2			,
	output		[4:0]		rd			,
	output		[31:0]		I_imm		,
	output		[31:0]		U_imm		,

	output					addi_en		,
	output					jalr_en		,
	output					add_en		,
	output					lui_en		,
	output					lw_en
);

wire	[6:0]	opcode		= inst[6:0]		;
wire	[2:0]	funct3		= inst[14:12]	;

assign			rd			= inst[11:7]	;
assign			rs1			= inst[19:15]	;
assign			rs2			= inst[24:20]	;
assign 			I_imm 		= {{20{inst[31]}}, inst[31:20]}	;
assign			U_imm		= inst[31:12] << 12				;

//addi
wire			opcode_6_0_0010011	= (opcode == 7'b0010011	);
wire			funct3_14_12_000	= (funct3 == 3'b000		);

assign addi_en = opcode_6_0_0010011 && funct3_14_12_000;

//jalr
wire			opcode_6_0_1100111 	= (opcode == 7'b1100111	);

assign jalr_en = opcode_6_0_1100111 && funct3_14_12_000;

//add
wire 			opcode_6_0_0110011	= (opcode == 7'b0110011	);

assign add_en = opcode_6_0_0110011 && funct3_14_12_000;

//lui
wire			opcode_6_0_0110111 = (opcode == 7'b0110111	);

assign lui_en = opcode_6_0_0110111;

//lw
wire			opcode_6_0_0000011 = (opcode == 7'b0000011	);
wire			funct3_14_12_001   = (funct3 == 3'b010		);

assign lw_en = opcode_6_0_0000011 && funct3_14_12_001;

assign wmask = lw_en ? 4'b1111 : 0;

endmodule
