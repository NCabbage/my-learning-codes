module ysyx_100022863_GPR(
	input										clk				,
	input										rst_n			,
	input					[2:0]			rd				,
	input					[1:0]			rs1				,
	input					[1:0]			rs2				,
	input					[7:0]			in_data		,
	input										out_en		,

	output			[7:0]			rs1_data	,
	output			[7:0]			rs2_data

);

reg		[7:0]		GPR	[0:5];

integer	i;

always@(posedge clk)
	if(!rst_n) begin
		for(i=0;i<4;i=i+1)begin
			GPR[i] <= 8'b0;
		end
	end
	else begin
		GPR[rd]	 <= in_data	;
	end

assign rs1_data = out_en ? GPR[2] : GPR[rs1];
assign rs2_data = GPR[rs2];

endmodule
