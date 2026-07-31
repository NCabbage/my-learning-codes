module ysyx_100022863_sALU(

	input			[7:0]	A				,
	input			[7:0]	B				,
	input		reg		add_en				,
	input		reg		bner_en				,
	output			[7:0]	ans		

);

always@(*)
	if(add_en)
		ans = A + B;
	else if(bner_en)
		ans = A - B;
	else
		ans = 0;

endmodule
