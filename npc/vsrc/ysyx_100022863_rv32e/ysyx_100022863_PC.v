module ysyx_100022863_PC(

	input						clk			,
	input						rst_n		,
	input						jump_en		,
	input			[31:0]		next_PC		,

	output	reg		[31:0]		PC

);

always@(posedge clk or negedge rst_n)
	if(!rst_n)
	 	PC <= 32'h8000_0000;
	else if(jump_en)
		PC <= next_PC;
	else
		PC <= PC + 4;

endmodule
