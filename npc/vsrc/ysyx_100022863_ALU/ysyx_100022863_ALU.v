module ysyx_100022863_ALU(
	input				[3:0]		A					,
	input				[3:0]		B					,
	input				[2:0]		func			,
	input								en				,

	output	reg	[3:0]		result		,
	output	reg					overflow	,
	output	reg					A_big			,
	output	reg					equ				,
	output	reg					carry
);

reg	[3:0]	t_no_cin;

always@(*)begin
	if(en)begin
		case(func)
			000 : begin
				t_no_cin = {4{1'b0}} ^ B;
				{carry, result} = A + t_no_cin;
				overflow = (A[3] == t_no_cin[3]) && (result[3] != A[3]);
				equ = 0;
				A_big = 0;
			end

			001 : begin
				t_no_cin = {4{1'b1}} ^ B;
				{carry, result} = A + t_no_cin + 1;
				overflow = (A[3] == t_no_cin[3]) && (result[3] != A[3]);
				equ = 0;
				A_big = 0;
			end

			010 : begin
				t_no_cin			= 0			;
				carry					= 0			;
				overflow			= 0			;
				result				= ~A		;
				A_big					= 0			;
				equ						=	0			;
			end

			011 : begin
				t_no_cin			= 0			;
				carry					= 0			;
				overflow			= 0			;
				A_big					= 0			;
				result				= A & B	;
				equ						=	0			;
			end

			100:begin
				t_no_cin			= 0			;
				carry					= 0			;
				overflow			= 0			;
				A_big					= 0			;
				result				= A | B	;
				equ						=	0			;
			end

			101:begin
				t_no_cin			= 0			;
				carry					= 0			;
				overflow			= 0			;
				A_big					= 0			;
				result				= A ^ B	;
				equ						=	0			;	
			end

			110:begin
				t_no_cin			= 0								;
				carry					= 0								;
				overflow			= 0								;
				result				= 0								;
				A_big					= (A > B) ? 1 : 0	;
				equ						=	0								;
			end

			111:begin
				t_no_cin			= 0								;
				carry					= 0								;
				overflow			= 0								;
				result				= 0								;
				A_big					= 0								;	
				equ						= (A == B) ? 1 : 0;
			end

			default:begin	
				t_no_cin			= 0								;
				carry					= 0								;
				overflow			= 0								;
				result				= 0								;
				A_big					= 0								;	
				equ						= 0								;
			end
		endcase
	end
end

endmodule
