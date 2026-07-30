module ysyx_100022863_VGA(
	input							pclk			,				//25M
	input							rst_n			,
	input			[23:0]	vga_data	,
	
	output						hsync			,
	output						vsync			,
	output						valid			,
	output		[11:0]	h_addr		,
	output		[11:0]	v_addr		,
	output		[7:0]		vga_r			,
	output		[7:0]		vga_g			,
	output		[7:0]		vga_b
);

parameter			h_frontporch		= 96		,
							h_active				= 144		,
							h_backporch			= 784		,
							h_total					= 800		;

parameter			v_frontporch		= 2			,
							v_active				= 35		,
							v_backporch			= 155		,
							v_total					= 525		;

wire	h_valid, v_valid;

reg	[11:0]		x_cnt, y_cnt;

always@(posedge pclk)
	if(!rst_n)
		x_cnt <= 0;
	else if(x_cnt == h_total)
		x_cnt <= 0;
	else
		x_cnt <= x_cnt + 1'b1;

always@(posedge pclk)
	if(!rst_n)
		y_cnt <= 0;
	else if(y_cnt == v_total)
		y_cnt <= 0;
	else
		y_cnt <= y_cnt + 1'b1;
		
assign hsync = (x_cnt > h_frontporch);
assign vsync = (y_cnt > v_frontporch);

assign h_valid = (x_cnt > h_active) && (x_cnt <= h_backporch);
assign v_valid = (y_cnt > v_active) && (y_cnt <= v_backporch);
assign valid	 = h_valid && v_valid;

assign h_addr = h_valid ? (x_cnt - 12'b145) : 12'b0;
assign v_addr = v_valid ? (y_cnt - 12'b36)	: 12'b0;

assign vga_r = vga_data[7:0];
assign vga_g = vga_data[15:8];
assign vga_b = vga_data[23:16];

endmodule
