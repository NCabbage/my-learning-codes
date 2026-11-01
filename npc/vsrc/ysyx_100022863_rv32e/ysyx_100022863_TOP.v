import "DPI-C" function void halt(input int inst, input	int a0);
import "DPI-C" function void check(input int PC, input int raddr);

module ysyx_100022863_TOP #(
	parameter 			INST_WIDTH	= 32,
						PC_WIDTH	= 32
)
(

	input										clk				,
	input			[INST_WIDTH-1:0]			inst			,
	input										rst_n			,

	output			[PC_WIDTH-1:0]				PC				,

	output										error

);

	wire	[3:0]		rs1			 	;
	wire	[3:0]		rs2			 	;
	wire	[3:0]		rd			 	;
	wire	[31:0]		I_imm			;
	wire	[31:0]		U_imm			;
	wire	[31:0]		S_imm			;
	wire	[31:0]		J_imm			;
	wire	[31:0]		B_imm			;

	wire				ebreak_en		;

	wire				addi_en	 		;
	wire				jalr_en			;
	wire				add_en			;
	wire 				lui_en			;
	wire				lw_en			;
	wire				lbu_en			;
	wire				sw_en			;
	wire				sb_en			;
	wire				auipc_en		;
	wire				jal_en			;
	wire				sltiu_en		;
	wire				bne_en			;
	wire				sub_en			;
	wire				sltu_en			;
	wire				xor_en			;
	wire				or_en			;
	wire				beq_en			;
	wire				srai_en			;
	wire				sh_en			;
	wire				andi_en			;
	wire				sll_en			;
	wire				and_en			;
	wire				xori_en			;
	wire				bge_en			;
	wire				srli_en			;
	wire				bgeu_en			;
	wire				slli_en			;
	wire				blt_en			;
	wire				bltu_en			;
	wire				slt_en			;
	wire				lh_en			;
	wire				sra_en			;
	wire				srl_en			;

	wire	[31:0]		alu_addi_result	;
	wire	[31:0]		alu_jalr_result	;
	wire	[31:0]		alu_add_result	;
	wire	[31:0]		alu_lui_result	;
	wire	[31:0]		alu_lw_result	;
	wire	[31:0]		alu_lbu_result	;
	wire	[31:0]		alu_sw_result	;
	wire	[31:0]		alu_sb_result	;
	wire	[31:0]		alu_auipc_result;
	wire	[31:0]		alu_jal_result	;
	wire	[31:0]		alu_sltiu_result;
	wire	[31:0]		alu_bne_result	;
	wire	[31:0]		alu_sub_result	;
	wire	[31:0]		alu_sltu_result	;
	wire	[31:0]		alu_xor_result	;
	wire	[31:0]		alu_or_result	;
	wire	[31:0]		alu_beq_result	;
	wire	[31:0]		alu_srai_result	;
	wire	[31:0]		alu_sh_result	;
	wire	[31:0]		alu_andi_result	;
	wire	[31:0]		alu_sll_result	;
	wire	[31:0]		alu_and_result	;
	wire	[31:0]		alu_xori_result	;
	wire	[31:0]		alu_bge_result	;
	wire 	[31:0]		alu_srli_result	;
	wire	[31:0]		alu_bgeu_result	;
	wire	[31:0]		alu_slli_result	;
	wire	[31:0]		alu_blt_result	;
	wire	[31:0]		alu_bltu_result	;
	wire	[31:0]		alu_slt_result	;
	wire	[31:0]		alu_lh_result	;
	wire	[31:0]		alu_sra_result	;
	wire	[31:0]		alu_srl_result	;

	wire				wen				;
	wire	[31:0]		src1			;
	wire	[31:0]		src2			;
	wire	[31:0]		wdata			;

	always@(posedge clk)
		if(ebreak_en) halt(inst, a0);
		
//	always@(*)
//		check(PC, raddr);

	wire				jump_en = jal_en | jalr_en | bne_en | beq_en | bge_en | bgeu_en | bgeu_en | blt_en | bltu_en;
	wire	[31:0]		next_PC			;

	assign	next_PC = 	jal_en 	? alu_jal_result 	:
						jalr_en	? alu_jalr_result 	:
						bne_en	? alu_bne_result	:
						beq_en	? alu_beq_result	:
						bge_en	? alu_bge_result	:
						bgeu_en ? alu_bgeu_result	:
						bgeu_en	? alu_bgeu_result	:	
						blt_en	? alu_blt_result	:
						bltu_en	? alu_bltu_result	:
												32'b0;

	ysyx_100022863_PC inst_ysyx_100022863_PC(
		.clk		(clk				),
		.rst_n		(rst_n				),
		.jump_en	(jump_en			),

		.next_PC	(next_PC			),

		.PC			(PC					)
	);

	ysyx_100022863_DECODE inst_ysyx_100022863_DECODE(
		.inst			(inst			),
	
		.rs1			(rs1			),
		.rs2			(rs2			),
		.rd				(rd				),
		.I_imm			(I_imm			),
		.U_imm			(U_imm			),
		.S_imm			(S_imm			),
		.J_imm			(J_imm			),
		.B_imm			(B_imm			),

		.ebreak_en		(ebreak_en		),

		.addi_en		(addi_en		),
		.jalr_en		(jalr_en		),
		.add_en 		(add_en			),
		.lui_en			(lui_en			),
		.lw_en			(lw_en			),
		.lbu_en			(lbu_en			),
		.sw_en			(sw_en			),
		.sb_en			(sb_en			),
		.auipc_en		(auipc_en		),
		.jal_en			(jal_en			),
		.sltiu_en		(sltiu_en		),
		.bne_en			(bne_en			),
		.sub_en			(sub_en			),
		.sltu_en		(sltu_en		),
		.xor_en			(xor_en			),
		.or_en			(or_en			),
		.beq_en			(beq_en			),
		.srai_en		(srai_en		),
		.sh_en			(sh_en			),
		.andi_en		(andi_en		),
		.sll_en			(sll_en			),
		.and_en			(and_en			),
		.xori_en		(xori_en		),
		.bge_en			(bge_en			),
		.srli_en		(srli_en		),
		.bgeu_en		(bgeu_en		),
		.slli_en		(slli_en		),
		.blt_en			(blt_en			),
		.bltu_en		(bltu_en		),
		.slt_en			(slt_en			),
		.lh_en			(lh_en			),
		.sra_en			(sra_en			),
		.srl_en			(srl_en			),
		.error			(error			)
	);

	assign wen = addi_en | jalr_en | add_en | lui_en | lw_en | lbu_en | auipc_en | jal_en | sltiu_en | sub_en | xor_en |
				or_en | sltu_en | srai_en | andi_en | sll_en | and_en | xori_en | srli_en | slli_en | slt_en | sra_en | srl_en;

	assign wdata =  (jalr_en | jal_en) 	? (PC + 4)		:
					(lw_en | lbu_en | lh_en)	? rdata			:
					addi_en		? alu_addi_result		:
					jalr_en		? alu_jalr_result		:
					add_en		? alu_add_result		:
					lui_en		? alu_lui_result		:
					auipc_en	? alu_auipc_result		:
					jal_en		? alu_jal_result		:
					sltiu_en	? alu_sltiu_result		:
					sub_en		? alu_sub_result		:
					sltu_en		? alu_sltu_result		:
					xor_en		? alu_xor_result		:
					or_en		? alu_or_result			:
					srai_en		? alu_srai_result		:
					andi_en  	? alu_andi_result		:
					sll_en		? alu_sll_result		:
					and_en		? alu_and_result		:
					xori_en		? alu_xori_result		:
					srli_en		? alu_srli_result		:
					slli_en		? alu_slli_result		:
					slt_en		? alu_slt_result		:
					sra_en		? alu_sra_result		:
					srl_en		? alu_srl_result		:
								  32'd0;
	wire	[31:0]		a0;

	ysyx_100022863_GPR #(
		.ADDR_WIDTH(4),
		.DATA_WIDTH(32)
	)inst_ysyx_100022863_GPR
	(	
	
	  	.clk				 	(clk				),
    	.wdata			 		(wdata				),
    	.waddr			 		(rd					),
    	.wen				 	(wen				),
	  	.rs1				 	(rs1				),
		.rs2				 	(rs2				),

	  	.src1				 	(src1				),
	  	.src2				 	(src2				),
		.a0						(a0					)

	);

	ysyx_100022863_ALU inst_ysyx_100022863_ALU(
		.PC					(PC					),

		.src1				(src1				),
		.src2				(src2				),
		.I_imm				(I_imm				),
		.U_imm				(U_imm				),
		.S_imm				(S_imm				),
		.J_imm				(J_imm				),
		.B_imm				(B_imm				),
		.addi_en			(addi_en			),
		.jalr_en			(jalr_en			),
		.add_en				(add_en				),
		.lui_en				(lui_en				),
		.lw_en				(lw_en				),
		.lbu_en				(lbu_en				),
		.sw_en				(sw_en				),
		.sb_en				(sb_en				),
		.auipc_en			(auipc_en			),
		.jal_en				(jal_en				),
		.sltiu_en			(sltiu_en			),
		.bne_en				(bne_en				),
		.sub_en				(sub_en				),
		.sltu_en			(sltu_en			),
		.xor_en				(xor_en				),
		.or_en				(or_en				),
		.beq_en				(beq_en				),
		.srai_en			(srai_en			),
		.sh_en				(sh_en				),
		.andi_en			(andi_en			),
		.sll_en				(sll_en				),
		.and_en				(and_en				),
		.xori_en			(xori_en			),
		.bge_en				(bge_en				),
		.srli_en			(srli_en			),
		.bgeu_en			(bgeu_en			),
		.slli_en			(slli_en			),
		.blt_en				(blt_en				),
		.bltu_en			(bltu_en			),
		.slt_en				(slt_en				),
		.lh_en				(lh_en				),
		.sra_en				(sra_en				),
		.srl_en				(srl_en				),

		.alu_addi_result	(alu_addi_result	),
		.alu_jalr_result	(alu_jalr_result	),
		.alu_add_result		(alu_add_result		),
		.alu_lui_result		(alu_lui_result		),
		.alu_lw_result		(alu_lw_result		),
		.alu_lbu_result		(alu_lbu_result		),
		.alu_sw_result 		(alu_sw_result		),
		.alu_sb_result		(alu_sb_result		),
		.alu_auipc_result	(alu_auipc_result	),
		.alu_jal_result		(alu_jal_result		),
		.alu_sltiu_result	(alu_sltiu_result	),
		.alu_bne_result		(alu_bne_result		),
		.alu_sub_result		(alu_sub_result		),
		.alu_sltu_result	(alu_sltu_result	),
		.alu_xor_result		(alu_xor_result		),
		.alu_or_result		(alu_or_result		),
		.alu_beq_result		(alu_beq_result		),
		.alu_srai_result	(alu_srai_result	),
		.alu_sh_result		(alu_sh_result		),
		.alu_andi_result	(alu_andi_result	),
		.alu_sll_result		(alu_sll_result		),
		.alu_and_result		(alu_and_result		),
		.alu_xori_result	(alu_xori_result	),
		.alu_bge_result		(alu_bge_result		),
		.alu_srli_result	(alu_srli_result	),
		.alu_bgeu_result	(alu_bgeu_result	),
		.alu_slli_result	(alu_slli_result	),
		.alu_blt_result		(alu_blt_result		),
		.alu_bltu_result	(alu_bltu_result	),
		.alu_slt_result		(alu_slt_result		),
		.alu_lh_result		(alu_lh_result		),
		.alu_sra_result		(alu_sra_result		),
		.alu_srl_result		(alu_srl_result		)
	);

wire	[31:0]		raddr		;
wire	[31:0]		rdata		;
wire	[31:0]		wraddr		;
wire	[31:0]		wrdata		;

assign raddr = 	lw_en 	? alu_lw_result 	: 
				lh_en	? alu_lh_result		:
				lbu_en 	? alu_lbu_result	:
									32'b0	;

assign wraddr = sw_en ? alu_sw_result 	:
				sh_en ? alu_sh_result	:
				sb_en ? alu_sb_result 	:
								32'b0	;

assign wrdata = src2;


ysyx_100022863_LSU u_ysyx_100022863_LSU(
	.clk		 	(clk	),
    .sw_en       	(sw_en	),
	.sh_en			(sh_en	),
	.sb_en		 	(sb_en	),
    .waddr       	(wraddr	),
    .wdata       	(wrdata	),

    .lw_en       	(lw_en	),
	.lh_en			(lh_en	),
	.lbu_en		 	(lbu_en	),
    .raddr       	(raddr	),

    .rdata		 	(rdata	)
);

endmodule
