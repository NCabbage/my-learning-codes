module ysyx_100022863_Barrel_shifter(
	input				[7:0]			din			,
	input				[2:0]			shamt		,
	input									LR			,
	input									AL			,

	output	reg	[7:0]			dout
);

always@(*)begin
	if(!AL)begin
		if(!LR)begin
			dout = {shamt{1:b0}, din[7:shamt]};
		end
		else begin
			dout = {din[7-shamt:1], shamt{1:b0}};
		end
	end
	else begin
		if(!AL)begin
			dout = {shamt{din[7]}, din[7:shamt]};
		end
		else begin
			dout = {din[7-shamt:1], shamt{1:b0}};
		end
	end

end

endmodule
