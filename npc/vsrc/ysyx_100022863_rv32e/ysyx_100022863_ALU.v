module ysyx_100022863_ALU(
	input		[31:0]		PC					,

	input		[31:0]		src1				,
 	input		[31:0]		src2				,
	input		[31:0]		I_imm				,
	input		[31:0]		U_imm				,
	input		[31:0]		S_imm				,
	input		[31:0]		J_imm				,
	input		[31:0]		B_imm				,

	input					addi_en				,
	input					jalr_en				,
	input					add_en				,
	input					lui_en				,
	input					lw_en				,
	input					lbu_en				,
	input					sw_en				,
	input					sb_en				,
	input					auipc_en			,
	input					jal_en				,
	input					sltiu_en			,
	input					bne_en				,
	input					sub_en				,
	input					sltu_en				,
	input					xor_en				,
	input					or_en				,
	input					beq_en				,
	input					srai_en				,
	input					sh_en				,
	input					andi_en				,
	input					sll_en				,
	input					and_en				,
	input					xori_en				,
	input					bge_en				,
	input					srli_en				,
	input					bgeu_en				,
	input					slli_en				,
	input					blt_en				,
	input					bltu_en				,
	input					slt_en				,
	input					lh_en				,
	input					sra_en				,
	input					srl_en				,

	output		[31:0]		alu_jalr_result		,
	output		[31:0]		alu_addi_result		,
	output		[31:0]		alu_add_result		,
	output		[31:0]		alu_lui_result		,
	output		[31:0]		alu_lw_result		,
	output		[31:0]		alu_lbu_result		,
	output		[31:0]		alu_sw_result		,
	output		[31:0]		alu_sb_result		,
	output		[31:0]		alu_jal_result		,
	output		[31:0]		alu_auipc_result	,
	output		[31:0]		alu_sltiu_result	,
	output		[31:0]		alu_bne_result		,
	output		[31:0]		alu_sub_result		,
	output		[31:0]		alu_sltu_result		,
	output		[31:0]		alu_xor_result		,
	output		[31:0]		alu_or_result		,
	output		[31:0]		alu_beq_result		,
	output		[31:0]		alu_srai_result		,
	output		[31:0]		alu_sh_result		,
	output		[31:0]		alu_andi_result		,
	output		[31:0]		alu_sll_result		,
	output		[31:0]		alu_and_result		,
	output		[31:0]		alu_xori_result		,
	output		[31:0]		alu_bge_result		,
	output		[31:0]		alu_srli_result		,
	output		[31:0]		alu_bgeu_result		,
	output		[31:0]		alu_slli_result		,
	output		[31:0]		alu_blt_result		,
	output		[31:0]		alu_bltu_result		,
	output		[31:0]		alu_slt_result		,
	output		[31:0]		alu_lh_result		,
	output		[31:0]		alu_sra_result		,
	output		[31:0]		alu_srl_result
);

wire	signed	[31:0]	ssrc1;
wire	signed	[31:0]	ssrc2;

assign	ssrc1 = src1;
assign	ssrc2 = src2;

assign alu_addi_result 	= addi_en	? src1 + I_imm : 0	;
assign alu_jalr_result 	= jalr_en 	? ((src1 + I_imm) >> 1) << 1 : 0;
assign alu_add_result  	= add_en 	? src1 + src2 : 0	;
assign alu_lui_result  	= lui_en 	? U_imm : 0			;
assign alu_lw_result   	= lw_en 	? src1 + I_imm : 0	; 
assign alu_lbu_result   = lbu_en 	? src1 + I_imm : 0	;
assign alu_sw_result 	= sw_en  	? src1 + S_imm : 0	;
assign alu_sb_result 	= sb_en		? src1 + S_imm : 0	;
assign alu_auipc_result = auipc_en	? PC + U_imm : 0	;
assign alu_jal_result 	= jal_en	? PC + J_imm : 0	;
assign alu_sltiu_result = sltiu_en	? {31'b0, (src1 < I_imm)} : 0;
assign alu_bne_result	= bne_en	? ((src1 != src2) ? PC + B_imm : PC + 4) : 0;
assign alu_sub_result	= sub_en 	? (src1 - src2)	: 0	;
assign alu_sltu_result	= sltu_en	? {31'b0, (src1 < src2)} : 0	;
assign alu_xor_result 	= xor_en	? src1 ^ src2 : 0	;
assign alu_or_result	= or_en		? src1 | src2 : 0	;
assign alu_beq_result	= beq_en	? ((src1 == src2) ? PC + B_imm : PC + 4) : 0;
assign alu_srai_result 	= srai_en 	? {(ssrc1 >>> I_imm[4:0])} : 0;
assign alu_sh_result 	= sh_en		? (src1 + S_imm) : 0;
assign alu_andi_result 	= andi_en 	? (src1 & I_imm) : 0;
assign alu_sll_result	= sll_en	? (src1 << src2[4:0]) : 0;
assign alu_and_result	= and_en	? (src1 & src2)	: 0	;
assign alu_xori_result	= xori_en	? (src1 ^ I_imm) : 0;
assign alu_bge_result	= bge_en	? ((ssrc1 >= ssrc2) ? PC + B_imm : PC + 4) : 0;
assign alu_srli_result	= srli_en	? (src1 >> I_imm[4:0]) : 0;
assign alu_bgeu_result	= bgeu_en	? ((src1 >= src2) ? PC + B_imm : PC + 4) : 0;
assign alu_slli_result	= slli_en	? (src1 << I_imm[4:0]) : 0;
assign alu_blt_result	= blt_en	? ((ssrc1 < ssrc2) ? PC + B_imm : PC + 4) : 0;
assign alu_bltu_result	= bltu_en	? ((src1 < src2) ? PC + B_imm : PC + 4) : 0;
assign alu_slt_result	= slt_en	? {31'b0, (ssrc1 < ssrc2)} : 0;
assign alu_lh_result	= lh_en		? src1 + I_imm : 0	;
assign alu_sra_result	= sra_en	? (ssrc1 >>> src2[4:0]) : 0;
assign alu_srl_result	= srl_en 	? (src11 >> src2[4:0])	: 0;
endmodule
