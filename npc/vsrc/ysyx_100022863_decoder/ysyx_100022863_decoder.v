module ysyx_100022863_decoder(
	input					[1:0]		x			,
	input									En		.

	output	reg		[3:0]		y
);

always@(*)
	if(En)
	begin
		case(x)
			2'd00 : y = 4'd0001;
			2'd01 : y = 4'd0010;
			2'd10 : y = 4'd0100;
			2'd11 : y = 4'd1000;
			default:
				y = 4'd0;
		endcase
	end
	else
		y = 4'd0;

endmodule
