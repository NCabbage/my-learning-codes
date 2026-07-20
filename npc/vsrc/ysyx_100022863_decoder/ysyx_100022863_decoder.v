module ysyx_100022863_decoder(
	input					[1:0]		x			,
	input									En		,

	output	reg		[3:0]		y
);

always@(*)
	if(En)
	begin
		case(x)
			2'b00 : y = 4'b0001;
			2'b01 : y = 4'b0010;
			2'b10 : y = 4'b0100;
			2'b11 : y = 4'b1000;
			default:
				y = 4'd0;
		endcase
	end
	else
		y = 4'd0;

endmodule
