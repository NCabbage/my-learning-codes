module ysyx_100022863_ALU(

	input		[31:0]		src1				,
 	input		[31:0]		src2				,
	input		[31:0]		I_imm				,
	input		[31:0]		U_imm				,
	input		[31:0]		S_imm				,

	input					addi_en				,
	input					jalr_en				,
	input					add_en				,
	input					lui_en				,
	input					lw_en				,
	input					lbu_en				,
	input					sw_en				,
	input					sb_en				,

	output		[31:0]		alu_jalr_result		,
	output		[31:0]		alu_addi_result		,
	output		[31:0]		alu_add_result		,
	output		[31:0]		alu_lui_result		,
	output		[31:0]		alu_lw_result		,
	output		[31:0]		alu_lbu_result		,
	output		[31:0]		alu_sw_result		,
	output		[31:0]		alu_sb_result
);


assign alu_addi_result 	= addi_en	? src1 + I_imm : 0;
assign alu_jalr_result 	= jalr_en 	? ((src1 + I_imm) >> 1) << 1 : 0;
assign alu_add_result  	= add_en 	? src1 + src2 : 0;
assign alu_lui_result  	= lui_en 	? U_imm : 0;
assign alu_lw_result   	= lw_en 	? src1 + I_imm : 0;
assign alu_lbu_result   = lbu_en 	? src1 + I_imm : 0;
assign alu_sw_result 	= sw_en  	? src1 + S_imm : 0;
assign alu_sb_result 	= sb_en		? src1 + S_imm : 0;
endmodule
