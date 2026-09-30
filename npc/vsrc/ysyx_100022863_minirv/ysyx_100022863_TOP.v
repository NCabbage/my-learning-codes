import "DPI-C" function void halt(input int inst);

module ysyx_100022863_TOP #(
	parameter INST_WIDTH	= 32,
						PC_WIDTH		= 32
)
(

	input										clk				,
	input			[INST_WIDTH-1:0]			inst			,
	input										rst_n			,

	output			[PC_WIDTH-1:0]				PC

);

	wire	[4:0]		rs1			 	;
	wire	[4:0]		rs2			 	;
	wire	[4:0]		rd			 	;
	wire	[31:0]		I_imm			;
	wire	[31:0]		U_imm			;
	wire	[31:0]		S_imm			;

	wire				addi_en	 		;
	wire				jalr_en			;
	wire				add_en			;
	wire 				lui_en			;
	wire				lw_en			;
	wire				lbu_en			;
	wire				sw_en			;
	wire				sb_en			;

	wire	[31:0]		alu_addi_result	;
	wire	[31:0]		alu_jalr_result	;
	wire	[31:0]		alu_add_result	;
	wire	[31:0]		alu_lui_result	;
	wire	[31:0]		alu_lw_result	;
	wire	[31:0]		alu_lbu_result	;
	wire	[31:0]		alu_sw_result	;
	wire	[31:0]		alu_sb_result	;

	wire				wen				;
	wire	[31:0]		src1			;
	wire	[31:0]		src2			;
	wire	[31:0]		wdata			;

	always@(posedge clk)
		halt(inst);
	

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
		.rd				(rd				),
		.I_imm			(I_imm			),
		.U_imm			(U_imm			),
		.S_imm			(S_imm			),

		.addi_en		(addi_en		),
		.jalr_en		(jalr_en		),
		.add_en 		(add_en			),
		.lui_en			(lui_en			),
		.lw_en			(lw_en			),
		.lbu_en			(lbu_en			),
		.sw_en			(sw_en			),
		.sb_en			(sb_en			)
	);

	assign wen = addi_en | jalr_en | add_en | lui_en | lw_en | lbu_en;
	assign wdata = (jalr_en ? PC + 4 : 0)| alu_addi_result | alu_add_result | alu_lui_result | rdata;

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
		.I_imm				(I_imm				),
		.U_imm				(U_imm				),
		.S_imm				(S_imm				),
		.addi_en			(addi_en			),
		.jalr_en			(jalr_en			),
		.add_en				(add_en				),
		.lui_en				(lui_en				),
		.lw_en				(lw_en				),
		.lbu_en				(lbu_en				),
		.sw_en				(sw_en				),
		.sb_en				(sb_en				),

		.alu_addi_result	(alu_addi_result	),
		.alu_jalr_result	(alu_jalr_result	),
		.alu_add_result		(alu_add_result		),
		.alu_lui_result		(alu_lui_result		),
		.alu_lw_result		(alu_lw_result		),
		.alu_lbu_result		(alu_lbu_result		),
		.alu_sw_result 		(alu_sw_result		),
		.alu_sb_result		(alu_sb_result		)
	);

wire	[31:0]		raddr		;
wire	[31:0]		rdata		;
wire	[31:0]		wraddr		;
wire	[31:0]		wrdata		;
wire	[1:0]		wrmask		;

assign raddr = alu_lw_result | alu_lbu_result;q
assign wraddr = alu_sw_result | alu_sb_result;
assign wrdata = src2;
assign wrmask = wraddr[1:0];

ysyx_100022863_LSU u_ysyx_100022863_LSU(
    .sw_en       (sw_en	),
	.sb_en		 (sb_en	),
    .waddr       (wraddr),
    .wdata       (wrdata),
    .wmask       (wrmask),

    .lw_en       (lw_en	),
	.lbu_en		 (lbu_en),
    .raddr       (raddr	),

    .rdata		 (rdata	)
);

endmodule
