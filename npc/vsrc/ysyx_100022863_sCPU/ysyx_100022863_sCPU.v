module ysyx_100022863_sCPU(

	input					clk		,
	input					rst_n	,
	
	output	[7:0]	ans		

);

wire	[7:0]		bner_addr	;
wire	[7:0]		opcode		;

wire	[1:0]		rs1				;
wire	[1:0]		rs2				;
wire	[2:0]		rd				;
wire	[3:0]		imm				;
wire					add_en		;
wire					li_en			;
wire					bner_en		;	
wire					out_en		;
wire	[7:0]		in_data		;
wire	[7:0]		rs1_data	;
wire	[7:0]		rs2_data	;


ysyx_100022863_PC ysyx_100022863_PC_inst(

	.clk				(clk			),
	.rst_n			(rst_n		),
	.bner_en		(bner_en && (|ans)),
	.bner_addr	(bner_addr),

	.opcode			(opcode		)
);

ysyx_100022863_ctrl ysyx_100022863_ctrl_inst(

	.opcode				(opcode		),
	.rst_n				(rst_n		),

	.rs1					(rs1			),
	.rs2					(rs2			),
	.rd						(rd				),
	.imm					(imm			),
	.add_en				(add_en		),
	.li_en				(li_en		),
	.bner_en			(bner_en	),	
	.bner_addr		(bner_addr),
	.out_en				(out_en		)
);

assign in_data = li_en ? {4'b0, imm} : (add_en ? ans : 8'b0);

ysyx_100022863_GPR ysyx_100022863_GPR_inst(
	.clk					(clk			),
	.rst_n				(rst_n		),
	.rd						(rd				),
	.rs1					(rs1			),
	.rs2					(rs2			),
	.in_data			(in_data	),
	.out_en				(out_en		),

	.rs1_data			(rs1_data	),
	.rs2_data			(rs2_data	)
);

ysyx_100022863_sALU ysyx_100022863_sALU_inst(

	.A						(rs1_data	),
	.B						(rs2_data	),
	.add_en				(add_en		),
	.bner_en			(bner_en	),

	.ans					(ans			)
);

endmodule
