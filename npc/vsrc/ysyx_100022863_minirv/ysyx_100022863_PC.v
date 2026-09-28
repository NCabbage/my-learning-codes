module ysyx_100022863_PC(

	input							clk			,
	input							rst_n		,

	output	reg			[31:0]		PC

);

always@(posedge clk or negedge rst_n)
	if(!rst_n)
	 	PC <= 32'b0;
	else
		PC <= PC + 4;

endmodule
