module ysyx_100022863_TOP #(
	parameter INST_WIDTH	= 32,
						PC_WIDTH		= 24
)
(

	input														clk				,
	input			[INST_WIDTH-1:0]			inst			,
	input														rst_n			,

	output		[PC_WIDTH-1:0]				PC

);

	 wire	[31:0]		rs1			 ;
	 wire	[31:0]		rs2			 ;
	 wire	[31:0]		imm			 ;
	 wire	[31:0]		rd			 ;
	 wire						addi_en	 ;



	 ysyx_100022863_PC inst_ysyx_100022863_PC(

		.clk		(clk	),
		.rst_n	(rst_n),

		.PC			(PC		)

	);

	ysyx_100022863_DECODE inst_ysyx_100022863_DECODE(
		.inst			(inst			),
	
		.rs1			(rs1			),
		.rs2			(rs2			),
		.imm			(imm			),
		.rd				(rd				),
		.addi_en	(addi_en	)

	);

	ysyx_100022863_GPR #(
		.ADDR_WIDTH(32),
		.DATA_WIDTH(32)
	)inst_ysyx_100022863_GPR
	(	
	
	  .clk				 (clk		),
    .wdata			 (wdata	),
    .waddr			 (waddr	),
    .wen				 (wen		),
	  .rs1				 (rs1		),
		.rs2				 (rs2		),

	  .src1				 (src1	),
	  .src2				 (src2	)

	);

	ysyx_100022863_ALU inst_ysyx_100022863_ALU(
		
		.src1								(src1		),
		.src2								(src2		),
		.imm								(imm		),
		.addi_en							(addi_en	),

		.alu_addi_result		(alu_addi_result	)

	);

endmodule
