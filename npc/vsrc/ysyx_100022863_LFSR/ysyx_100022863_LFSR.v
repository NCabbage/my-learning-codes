module ysyx_100022863_LFSR(
	input										clk			,
	input										rst_n		,

	output		reg		[7:0]		out
);

always@(posedge clk)
	if(rst_n)
		out <= 8'b1;
	else
		out <= {out[0] ^ out[4] ^ out[2] ^ out[3], out[7:1]};

endmodule
