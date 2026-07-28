module ysyx_100022863_ps2_keyboard_model(
	input								clk				,
	input								clrn			,
	input								ps2_clk		,
	input								ps2_data		,

	output				[7:0]	data			,
	output	reg					ready			,
	output	reg					overflow	

);

reg		[9:0]		buffer				;
reg		[7:0]		fifo[7:0]			;			//注意这个fifo	
reg		[2:0]		w_ptr,  r_ptr	;
reg		[3:0]		count					;
reg		[2:0]		ps2_clk_sync	;
wire					sampling			;

always@(posedge clk) begin
	ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
end

assign sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

always@(posedge clk) begin
	if(clrn) begin
		count			<= 0;
		w_ptr			<= 0;
		r_ptr			<= 0;
		overflow	<= 0;
		ready			<= 0;
	end
	else if(sampling) begin
		if(count == 4'b10)begin
			if((buffer[0]) && (ps2_data) && (^buffer[9:1])) begin
				fifo[w_ptr] <= buffer[w_ptr];
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
			if(!next_data_n) begin
				r_ptr <= r_ptr + 3'b1;
				if(w_ptr == (r_ptr + 1))
					ready <= 1'b0;
			end
		end
	end
end

assign data = fifo[r_ptr];

endmodule
