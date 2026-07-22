module(

	input				[3:0]	x		,
	input							en	,

	output	reg	[1:0]	y

);

integer i;

always@(*)begin
	if(en)begin
		for(i=0;i<=3;i=i+1)
			if(x[i] == 1) y = i[1:0];
	end
	y = i[1:0];
end
endmodule
