module ysyx_100022863_LFSR(
	input										clk			,
	output		reg		[7:0]		out
);

wire		[7:0]		init = 8'b0000_0001;

always@(posedge clk)
	out <= {out[0] ^ out[4] ^ out[2] ^ out[3], out[7:1]};

endmodule
