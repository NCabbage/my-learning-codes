module ysyx_100022863_ctrl(

	input		[7:0]		opcode	,
	input						rst_n		,

	output	reg	[1:0]		rs1				,
	output	reg	[1:0]		rs2				,
	output	reg	[2:0]		rd				,
	output	reg	[3:0]		imm				,
	output	reg					add_en		,
	output	reg					li_en			,
	output	reg					bner_en		,	
	output	reg	[7:0]		bner_addr	,
	output	reg					out_en
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
		out_en  = 0;
		bner_addr = 0;
	end
	else begin
		case(opcode[7:6])
			2'b00 : begin
				rd  = {1'b0, opcode[5:4]};
				rs1 = opcode[3:2];
				rs2 = opcode[1:0];
				add_en = 1'b1;
				imm = 0;
				li_en = 0;
				bner_en = 0;
				out_en = 0;
				bner_addr = 0;
			end

			2'b01 : begin
				rs1 = 0;
				rs2 = 0;
				rd = 3'd4;
				imm = 0;
				add_en = 0;
				li_en = 0;
				bner_en = 0;
				out_en = 1'b1;
				bner_addr = 0;
			end

			2'b10 : begin
				rd	= {1'b0, opcode[5:4]};
				imm = opcode[3:0];
				li_en = 1'b1;
				rs1 = 0;
				rs2 = 0;
				add_en = 0;
				out_en = 0;
				bner_en = 0;
				bner_addr = 0;
			end

			2'b11 : begin
				rd				= 3'd4;
				imm				= 0;
				li_en			= 0;
				add_en		= 0;
				out_en		= 0;
				bner_addr = {4'b0, opcode[5:2]};
				rs1				= 2'b0;
				rs2				= opcode[1:0];
				bner_en		= 1'b1;
			end

			default : begin
				rs1			= 0;
				rs2			= 0;
				rd			= 3'd4;
				imm			= 0;
				add_en	= 0;
				li_en		= 0;
				bner_en = 0;
				out_en	= 0;
				bner_addr = 0;
			end
		endcase
	end

endmodule
