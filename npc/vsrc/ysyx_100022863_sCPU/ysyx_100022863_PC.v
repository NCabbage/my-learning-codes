module ysyx_100022863_PC(

	input							clk				,
	input							rst_n			,
	input							bner_en		,
	input			[3:0]		bner_addr	,

	output		[7:0]		opcode		
);

reg		[7:0]		ROM	[0:15]	;
reg		[8:0]		PC					;

initial begin : rom_init
    integer i;
    for (i = 0; i < 256; i = i + 1) begin
        ROM[i] = 8'b0; // 先全部清零
    end
    // 然后手动填入几条测试指令
    ROM[0] = 8'b10001010; // 第1条指令
    ROM[1] = 8'b10010000; // 第2条指令
		ROM[2] = 8'b10100000;
		ROM[3] = 8'b10110001;
		ROM[4] = 8'b00010111;
		ROM[5] = 8'b00101001;
		ROM[6] = 8'b11010001;
		ROM[7] = 8'b11011111;
end

always@(posedge clk)
	if(!rst_n)
		PC <= 8'b0;
	else if(bner_en)
		PC <= bner_addr;
	else
		PC <= PC + 8'd4;

assign opcode = ROM[(PC >> 2)];

endmodule
