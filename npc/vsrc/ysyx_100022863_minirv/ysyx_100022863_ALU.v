module ysyx_100022863_ALU(

	input		[31:0]		src1				,
 	input		[31:0]		src2				,
	input		[31:0]		I_imm				,
	input		[31:0]		U_imm				,

	input					addi_en				,
	input					jalr_en				,
	input					add_en				,
	input					lui_en				,

	output		[31:0]		alu_jalr_result		,
	output		[31:0]		alu_addi_result		,
	output		[31:0]		alu_add_result		,
	output		[31:0]		alu_lui_result
);


assign alu_addi_result = addi_en ? src1 + imm : 0;
assign alu_jalr_result = jalr_en ? ((src1 + imm) >> 1) << 1 : 0;
assign alu_add_result  = jalr_en ? src1 + src2 : 0;
assign alu_lui_result  = U_imm << 12;

endmodule
