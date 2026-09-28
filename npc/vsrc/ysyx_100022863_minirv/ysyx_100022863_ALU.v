module ysyx_100022863_ALU(

	input		[31:0]		src1				,
 	input		[31:0]		src2				,
	input		[31:0]		imm					,

	input					addi_en				,

	output	[31:0]			alu_addi_result
);

assign alu_addi_result = addi_en ? src1 + imm : src1 + src2;

endmodule
