module ysyx_100022863_seg(

	input							clk		,
	input							rst_n	,
	input				[3:0]	data	,

	output	reg	[7:0]	seg
);

always@(posedge clk)
	if(!rst_n) begin
		seg <= 8'hff;
	end
	else begin
		case(data)
			4'h0:seg <= 8'b00000011;
			4'h1:seg <= 8'b10011111;
			4'h2:seg <= 8'b00100101;
			4'h3:seg <= 8'b00001101;
			4'h4:seg <= 8'b10011001;
			4'h5:seg <= 8'b01001001;
			4'h6:seg <= 8'b01000001;
			4'h7:seg <= 8'b00011111;
			4'h8:seg <= 8'b00000001;
			4'h9:seg <= 8'b00011001;
			4'ha:seg <= 8'b00010001;
			4'hb:seg <= 8'b11000001;
			4'hc:seg <= 8'b01100011;
			4'hd:seg <= 8'b10000101;
			4'he:seg <= 8'b00100001;
			4'hf:seg <= 8'b00001001;
			default	:
				seg <= 0;
	  endcase
	end
endmodule
