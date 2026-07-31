module ysyx_100022863_ctrl(

	input		[7:0]		opcode	,
	input						rst_n		,

	output	[1:0]		rs1				,
	output	[1:0]		rs2				,
	output	[1:0]		rd				,
	output	[3:0]		imm				,
	output					add_en		,
	output					li_en			,
	output					bner_en		,	
	output	[7:0]				bner_addr	,
	output					out_en
);

always@(*)
	if(!rst_n) begin
		rs1			= 0;
		rs2			= 0;
		rd			= 0;
		imm			= 0;
		add_en	= 0;
		li_en		= 0;
		bner_en = 0;
	end
	else begin
		case(opcode[7:6])
			2'b00 : begin
				rd  = opcode[5:4];
				rs1 = opcode[3:2];
				rs2 = opcode[1:0];
				add_en = 1'b1;
			end

			2'b10 : begin
				rd	= opcode[5:4];
				imm = opcode[3:0];
				li_en = 1'b1;
			end

			2'b11 : begin
				bner_addr = opcode[5:2];
				rs1				= 2'b0;
				rs2				= opcode[1:0];
				bner_en		= 1'b1;
			end
		endcase
	end

endmodule
