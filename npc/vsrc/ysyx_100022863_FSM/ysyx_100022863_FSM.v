module ysyx_100022863_FSM(

	input					clk		,
	input					w			,
	input					rst_n	,

	output	reg		z
);

parameter		A = 4'd0000,
						B = 4'b0001,
						C = 4'b0010,
						D = 4'b0011,
						E = 4'b0100,
						F = 4'b0101,
						G = 4'b0110,
						H = 4'b0111,
						I = 4'b1000;

wire	state, next_state;

always@(posedge clk)
	if(!rst_n)
		state <= A;
	else
		state <= next_state;

always@(*)
	if(!rst_n)
		z = 0;
	else
		case(state)
			A :
				if(w == 1)
					next_state = F;
				else
					next_state = B;

			B :
				if(w == 1)
					next_state = F;
				else
					next_state = C;

			C :
				if(w == 1)
					next_state = F;
				else
					next_state = D;

			D :
				if(w == 1)
					next_state = F;
				else
					next_state = E;

			E :
				if(w == 1)
					next_state = F;
				else
					next_state = E;

			F : 
				if(w == 1)
					next_state = G;
				else
					next_state = B;
			
			G :
				if(w == 1)
					next_state = H;
				else
					next_state = B;

			H :
				if(w == 1)
					next_state = I;
				else
					next_state = B;

			I :
				if(w == 1)
					next_state = I;
				else
					next_state = B;
	
			default :
				next_state = A;

		endcase

always@(posedge clk)
	if(!rst_n)
		z <= 0;
	else if(state == E || state == I)
		z <= 1;
	else
		z <= 0;
		
endmodule
