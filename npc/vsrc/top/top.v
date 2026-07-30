module top(
	input							clk			,				//25M
	input							rst_n			,
	
	output						hsync			,
	output						vsync			,
	output						valid			,
	output		[11:0]	h_addr		,
	output		[11:0]	v_addr		,
	output		[7:0]		vga_r			,
	output		[7:0]		vga_g			,
	output		[7:0]		vga_b

);

wire					clkout;
reg		[639:0]		mem	[0:479];

initial begin
	$readmemh("/home/cappage/ysyx-workbench/npc/image/image.hex", mem);
end

ysyx_100022863_clkgen 
#(25000000)
ysyx_100022863_clkgen_inst(

	.clkin		(clk		),
	.rst_n		(rst_n	),
	.clken		(1'b1		),

	.clkout		(clkout	)
);

ysyx_100022863_VGA ysyx_100022863_VGA_inst(

	.pclk				(clkout			),
	.rst_n			(rst_n			),
	.vga_data		(mem[v_addr * 640 + h_addr]),

	.hsync			(hsync			),
	.vsync			(vsync			),
	.valid			(valid			),
	.h_addr			(h_addr			),
	.v_addr			(v_addr			),
	.vga_r			(vga_r			),
	.vga_g			(vga_g			),
	.vga_b			(vga_b			)

);



endmodule
