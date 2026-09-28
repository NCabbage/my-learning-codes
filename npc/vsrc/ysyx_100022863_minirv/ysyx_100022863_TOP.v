module ysyx_100022863_TOP #(
	parameter INST_WIDTH	= 32,
						PC_WIDTH		= 32
)
(

	input														clk				,
	input			[INST_WIDTH-1:0]			inst			,
	input														rst_n			,

	output		[PC_WIDTH-1:0]				PC

);

	wire	[4:0]		rs1			 	;
	wire	[4:0]		rs2			 	;
	wire	[31:0]		imm			 	;
	wire	[4:0]		rd			 	;
	wire				addi_en	 		;
	wire				jalr_en			;
	wire	[31:0]		alu_addi_result	;
	wire	[31:0]		alu_jalr_result	;
	wire				wen				;
	wire	[31:0]		src1			;
	wire	[31:0]		src2			;
	wire	[31:0]		wdata;

	ysyx_100022863_PC inst_ysyx_100022863_PC(

		.clk		(clk				),
		.rst_n		(rst_n				),
		.jalr_en	(jalr_en			),
		.jalr_PC	(alu_jalr_result	),

		.PC			(PC					)
	);

	ysyx_100022863_DECODE inst_ysyx_100022863_DECODE(
		.inst			(inst			),
	
		.rs1			(rs1			),
		.rs2			(rs2			),
		.imm			(imm			),
		.rd				(rd				),
		.addi_en		(addi_en		),
		.jalr_en		(jalr_en		)
	);

	assign wen = addi_en | jalr_en;
	assign wdata = PC | alu_addi_result;

	ysyx_100022863_GPR #(
		.ADDR_WIDTH(5),
		.DATA_WIDTH(32)
	)inst_ysyx_100022863_GPR
	(	
	
	  	.clk				 	(clk				),
    	.wdata			 		(wdata				),
    	.waddr			 		(rd					),
    	.wen				 	(wen				),
	  	.rs1				 	(rs1				),
		.rs2				 	(rs2				),

	  	.src1				 	(src1				),
	  	.src2				 	(src2				)

	);

	ysyx_100022863_ALU inst_ysyx_100022863_ALU(
		
		.src1				(src1				),
		.src2				(src2				),
		.imm				(imm				),
		.addi_en			(addi_en			),
		.jalr_en			(jalr_en			),

		.alu_addi_result	(alu_addi_result	),
		.alu_jalr_result	(alu_jalr_result	)
	);

endmodule
