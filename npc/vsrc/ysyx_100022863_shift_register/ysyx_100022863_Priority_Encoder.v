module ysyx_100022863_shift_register(
	input									clk				,
	input									rst_n			,
	input					[2:0]		func			,
	input					[7:0]		in				,
	input									left_in		,

	output	reg		[7:0]		out

);

reg		[7:0]		Q;

always@(posedge clk or rst_n)begin
	if(rst_n)begin
		Q			<= 8'b0;
		out		<= 8'b0;
	end
	else begin
		case(func)
			3'b000 : begin
				Q <= 0;
			end

			3'b001 : begin
				Q <= in;
			end

			3'b010 : begin
				Q <= {1'b0, Q[7:1]};
			end

			3'b011 : begin
				Q <= {Q[6:0], 1'b0};
			end

			3'b100 : begin
				Q <= {Q[7], Q[7:1]};
			end

			3'b101 : begin
				Q <= {left_in, Q[7:1]};
				out <= Q;
			end

			3'b110 : begin
				Q <= {Q[0], Q[7:1]};
			end

			3'b111 : begin
				Q <= {Q[6:0], Q[7]};
			end

			default : begin
				Q <= 8;b0;
			end
		endcase
	end
end

endmodule
