module ysyx_100022863_Barre_Shifter(
	input				[7:0]			din			,
	input				[2:0]			shamt		,
	input									LR			,
	input									AL			,

	output	reg	[7:0]			dout
);

wire signed		[7:0]		cnt;

assign cnt = din;

always@(*)begin
	if(!AL)begin
		if(!LR)begin
			dout = din >> shamt;
		end
		else begin
			dout = din << shamt;
		end
	end
	else begin
		if(!LR)begin
			dout = cnt >> shamt;
		end
		else begin
			dout = cnt << shamt;
		end
	end

end

endmodule
