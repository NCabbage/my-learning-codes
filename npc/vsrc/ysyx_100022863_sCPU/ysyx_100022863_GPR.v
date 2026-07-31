module ysyx_100022863_GPR(
	input										clk				,
	input										rst_n			,
	input					[1:0]			rd				,
	input					[1:0]			rs1				,
	input					[1:0]			rs2				,
	input					[7:0]			in_data		,

	output	reg		[7:0]			rs1_data	,
	output	reg		[7:0]			rs2_data

);

reg		[7:0]		GPR	[0:3];

integer	i;

always@(posedge clk)
	if(!rst_n) begin
		for(i=0;i<4:i=i+1)begin
			GPR[i] <= 8'b0;
		end
	end
	else begin
		rs1_data <= GPR[rs1];
		rs2_data <= GPR[rs2];
		GPR[rd]	 <= in_data	;
	end

	endmodule
