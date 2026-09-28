module ysyx_100022863_GPR 
#(ADDR_WIDTH = 1, DATA_WIDTH = 1)
(

	input							clk				,
  	input		[DATA_WIDTH-1:0]	wdata			,
  	input		[ADDR_WIDTH-1:0]	waddr			,
  	input							wen				,
	input		[ADDR_WIDTH-1:0]	rs1				,
	input		[ADDR_WIDTH-1:0]	rs2				,

	output		[DATA_WIDTH-1:0]	src1			,
	output		[DATA_WIDTH-1:0]	src2	

);

reg [DATA_WIDTH-1:0] GPR [2**ADDR_WIDTH-1:0];

always @(posedge clk) begin
  if (wen) GPR[waddr] <= wdata;
end

assign src1 = GPR[rs1];
assign src2 = GPR[rs2];

endmodule
