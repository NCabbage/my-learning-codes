module ysyx_100022863_ps2_keyboard_model(
	input								clk				,
	input								clrn			,
	input								ps2_clk		,
	input								ps2_data	,

	output	reg					en				,
	output				[7:0]	data			,
	output	reg					ready			,
	output	reg					overflow	, 
	output				[7:0]	ascll			,
	output	reg		[7:0]	times			
);

reg		[9:0]		buffer				;
reg		[7:0]		fifo[7:0]			;			//注意这个fifo	
reg		[2:0]		w_ptr,  r_ptr	;
reg		[3:0]		count					;
reg		[2:0]		ps2_clk_sync	;
reg		[2:0]		ready_sync		;
wire					sampling			;
wire					ready_up			;
reg		[3:0]		state, next_state;
reg		[7:0]		ROM [0:255]		;

parameter		IDLE		= 4'b0001,
						GOT_F0	=	4'b0010,
						A				= 4'b0100;

initial begin

	ROM[8'h1C] = 8'h41;  // A
	ROM[8'h32] = 8'h42;  // B
	ROM[8'h21] = 8'h43;  // C
	ROM[8'h23] = 8'h44;  // D
	ROM[8'h24] = 8'h45;  // E
	ROM[8'h2B] = 8'h46;  // F
	ROM[8'h34] = 8'h47;  // G
	ROM[8'h33] = 8'h48;  // H
	ROM[8'h43] = 8'h49;  // I
	ROM[8'h3B] = 8'h4A;  // J
	ROM[8'h42] = 8'h4B;  // K
	ROM[8'h4B] = 8'h4C;  // L
	ROM[8'h3A] = 8'h4D;  // M
	ROM[8'h31] = 8'h4E;  // N
	ROM[8'h44] = 8'h4F;  // O
	ROM[8'h4D] = 8'h50;  // P
	ROM[8'h15] = 8'h51;  // Q
	ROM[8'h2D] = 8'h52;  // R
	ROM[8'h1B] = 8'h53;  // S
	ROM[8'h2C] = 8'h54;  // T
	ROM[8'h3C] = 8'h55;  // U
	ROM[8'h2A] = 8'h56;  // V
	ROM[8'h1D] = 8'h57;  // W
	ROM[8'h22] = 8'h58;  // X
	ROM[8'h35] = 8'h59;  // Y
	ROM[8'h1A] = 8'h5A;  // Z

end

always@(posedge clk) begin
	ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
end

assign sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

always@(posedge clk) begin
	if(!clrn) begin
		count			<= 0;
		w_ptr			<= 0;
		r_ptr			<= 0;
		overflow	<= 0;
		ready			<= 0;
	end
	else if(sampling) begin
		if(count == 4'd10)begin
			if((buffer[0] == 0) && (ps2_data) && (^buffer[9:1])) begin
				fifo[w_ptr] <= buffer[8:1];
				w_ptr <= w_ptr + 3'b1;
				ready <= 1'b1;
				overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
			end
		count <= 0;
		end
		else begin
			buffer[count] <= ps2_data;
			count <= count + 3'b1;
		end
	
		if(ready) begin
				r_ptr <= r_ptr + 3'b1;
				if(w_ptr == (r_ptr + 1))
					ready <= 1'b0;
		end
	end
end

always@(posedge clk)
	ready_sync <= {ready_sync[1:0], ready};

assign ready_up = !ready_sync[2] && ready_sync[1];

always@(posedge clk)
	if(!clrn)
		state <= IDLE;
	else
		state <= next_state;

always@(*)
	if(!clrn)
		next_state = IDLE;
	else
		case(state)
			IDLE : 
				if(data != 0 && data != 8'hF0 && ready_up)
					next_state = A;
				else
					next_state = IDLE;

			A :
				if(data == 8'hF0 && ready_up)
					next_state = GOT_F0;
				else if(data != 0 && data != 8'hF0 && ready_up)
					next_state = A;
				else
					next_state = A;

			GOT_F0 :
				if(data != 0 && data != 8'hF0 && ready_up)
					next_state = IDLE;
				else
					next_state = GOT_F0;

			default:
				next_state = IDLE;
		endcase

always@(posedge clk)begin
	if(!clrn)begin
		en <= 0;
	end
	else if(state == A)begin
		en <= 1;
	end
	else if(state == GOT_F0)begin
		en <= 0;
	end
	else begin
		en <= en;
	end
end

always@(posedge clk)
	if(!clrn)
		times <= 0;
	else if(state == A && next_state == GOT_F0)
		times <= times + 1'b1;
	else
		times <= times;


assign data = fifo[r_ptr];
assign ascll = ROM[data];

endmodule
