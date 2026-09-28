module ysyx_100022863_ALU(

	input		[31:0]		src1				,
 	input		[31:0]		src2				,
	input		[31:0]		imm					,

	input					addi_en				,
	input					jalr_en				,

	output		[31:0]		alu_jalr_result		,
	output		[31:0]		alu_addi_result
);

assign alu_addi_result = addi_en ? src1 + imm : src1 + src2;
assign alu_jalr_result = jalr_en ? src1 + imm : src1 + src2;

endmodule
