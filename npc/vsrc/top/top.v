module top(
	input		[3:0]		A					,
	input		[3:0]		B					,
	input		[2:0]		func			,
	input						en				,

	output	[3:0]		result		,
	output					overflow	,
	output					A_big			,
	output					equ				,
	output					carry
);

ysyx_100022863_ALU ysyx_100022863_ALU_inst(
 .	A					(A				),
 .	B					(B				),
 .	func			(func			),
 .	en				(en				),

 .	result		(result		),
 .	overflow	(overflow	),
 .	A_big			(A_big		),
 .	equ				(equ			),
 .	carry			(carry		),

);

endmodule
