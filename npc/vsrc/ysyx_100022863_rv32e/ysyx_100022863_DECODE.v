module ysyx_100022863_DECODE(

	input		[31:0]		inst		,
	
	output		[3:0]		rs1			,
	output		[3:0]		rs2			,
	output		[3:0]		rd			,
	output		[31:0]		I_imm		,
	output		[31:0]		U_imm		,
	output		[31:0]		S_imm		,
	output		[31:0]		J_imm		,
	output		[31:0]		B_imm		,

	output					ebreak_en	,

	output					addi_en		,
	output					jalr_en		,
	output					add_en		,
	output					lui_en		,
	output					lw_en		,
	output					lbu_en		,
	output					sw_en		,
	output					sb_en		,
	output					auipc_en	,
	output					jal_en		,
	output					sltiu_en	,
	output					bne_en		,
	output					sub_en		,
	output					sltu_en		,
	output					xor_en		,
	output					or_en		,
	output					beq_en		,
	output					srai_en		,
	output					sh_en		,
	output					andi_en		,
	output					sll_en		,
	output					and_en		,
	output					xori_en		,
	output					bge_en		,
	output					srli_en		,
	output					bgeu_en		,

	output					error
);

wire	[6:0]	opcode		= inst[6:0]		;
wire	[2:0]	funct3		= inst[14:12]	;
wire	[6:0]	func7		= inst[31:25]	;
wire	[4:0]	rd_r		= inst[11:7]	;
wire	[4:0]	rs1_r		= inst[19:15]	;
wire	[4:0]	rs2_r		= inst[24:20]	;

wire	inst_valid = 	ebreak_en	|
						addi_en		|	
						jalr_en		|	
						add_en		|	
						lui_en		|	
						lw_en		|	
						lbu_en		|	
						sw_en		|	
						sb_en		|	
						auipc_en	|	
						jal_en		|
						sltiu_en	|
						bne_en		|
						sub_en		|
						sltu_en		|
						xor_en		|
						or_en		|
						beq_en		|
						srai_en		|
						sh_en		|
						andi_en		|
						sll_en		|
						and_en		|
						xori_en		|
						bge_en		|
						srli_en
									;

assign error = (rd_r[4] & rs1_r[4] & rs2_r[4]) || (!inst_valid && (inst != 32'b0)) ;

assign			rd 			= rd_r[3:0];
assign			rs1			= rs1_r[3:0];
assign			rs2			= rs2_r[3:0];
assign 			I_imm 		= {{20{inst[31]}}, inst[31:20]}	;
assign			U_imm		= inst[31:12] << 12				;
assign			S_imm		= {{20{inst[31]}}, {inst[31:25], inst[11:7]}};
assign			J_imm		= {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], 1'b0};
assign			B_imm		= {{20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};

assign ebreak_en = (inst == 32'h00100073);

//addi
wire	opcode_6_0_0010011	= (opcode == 7'b0010011	);
wire	funct3_14_12_000	= (funct3 == 3'b000		);

assign addi_en = opcode_6_0_0010011 && funct3_14_12_000;

//jalr
wire	opcode_6_0_1100111 	= (opcode == 7'b1100111	);

assign jalr_en = opcode_6_0_1100111 && funct3_14_12_000;

//add
wire	opcode_6_0_0110011	= (opcode == 7'b0110011	);
wire	funct7_31_25_0000000 = (func7 == 7'b0000000 );
assign add_en = opcode_6_0_0110011 && funct3_14_12_000 && funct7_31_25_0000000;

//lui
wire	opcode_6_0_0110111 = (opcode == 7'b0110111	);

assign lui_en = opcode_6_0_0110111;

//lw
wire	opcode_6_0_0000011 = (opcode == 7'b0000011	);
wire	funct3_14_12_010   = (funct3 == 3'b010		);

assign lw_en = opcode_6_0_0000011 && funct3_14_12_010;

//lbu
wire	funct3_14_12_100	= (funct3 == 3'b100		);

assign lbu_en = opcode_6_0_0000011 && funct3_14_12_100;

//sw
wire	opcode_6_0_0100011	= (opcode == 7'b0100011	);

assign sw_en = opcode_6_0_0100011 && funct3_14_12_010;

//sb
assign sb_en = opcode_6_0_0100011 && funct3_14_12_000;

//auipc
wire	opcode_6_0_0010111	= (opcode == 7'b0010111	);
assign auipc_en = opcode_6_0_0010111;

//jal
wire	opcode_6_0_1101111	= (opcode == 7'b1101111	);
assign	jal_en = opcode_6_0_1101111;

//slitu
wire	funct3_14_12_011	= (funct3 == 3'b011);
assign	sltiu_en = opcode_6_0_0010011 && funct3_14_12_011;

//bne
wire	opcode_6_0_1100011	= (opcode == 7'b1100011);
wire	funct3_14_12_001	= (funct3 == 3'b001);
assign	bne_en = opcode_6_0_1100011 && funct3_14_12_001;

//sub
wire	funct7_31_25_0100000 = (func7 == 7'b0100000);
assign	sub_en	= opcode_6_0_0110011 && funct3_14_12_000 && funct7_31_25_0100000;

//sltu
assign	sltu_en	= opcode_6_0_0110011 && funct3_14_12_011 && funct7_31_25_0000000;

//xor
assign	xor_en	= opcode_6_0_0110011 && funct3_14_12_100 && funct7_31_25_0000000;

//or
wire	funct3_14_12_110	= (funct3 == 3'b110);
assign	or_en	= opcode_6_0_0110011 && funct3_14_12_110 && funct7_31_25_0000000;

//beq
assign	beq_en	= opcode_6_0_1100011 && funct3_14_12_000;

//srai
wire	funct3_14_12_101 	= (funct3 == 3'b101);
assign	srai_en = opcode_6_0_0010011 && funct3_14_12_101 && funct7_31_25_0100000;

//sh
assign	sh_en	= opcode_6_0_0100011 && funct3_14_12_001;

//andi
wire	funct3_14_12_111 = (funct3 == 3'b111);
assign	andi_en = opcode_6_0_0010011 && funct3_14_12_111;

//sll
assign	sll_en 	= opcode_6_0_0110011 && funct3_14_12_001 && funct7_31_25_0000000;

//and
assign	and_en 	= opcode_6_0_0110011 && funct3_14_12_111 && funct7_31_25_0000000;

//xori
assign	xori_en	= opcode_6_0_0010011 && funct3_14_12_100;

//bge
assign	bge_en	= opcode_6_0_1100011 && funct3_14_12_101;

//srli
assign	srli_en	= opcode_6_0_0010011 && funct3_14_12_101 && funct7_31_25_0000000;

//bgeu
assign	bgeu_en = opcode_6_0_1100011 && funct3_14_12_111;

endmodule
