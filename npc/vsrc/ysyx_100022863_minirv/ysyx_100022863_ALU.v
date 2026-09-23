module ysyx_100022863_ALU(

	input		[31:0]		src1				,
 	input		[31:0]		src2				,
	input		[31:0]		imm					,

	input							alu_en		,

	output	[31:0]		alu_addi_result		,
);

assign alu_addi_result = addi_en ? src1 + imm : 31'b0;

endmodule
