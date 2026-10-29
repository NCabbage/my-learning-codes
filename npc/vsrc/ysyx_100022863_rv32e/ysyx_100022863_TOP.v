import "DPI-C" function void halt(input int inst, input	int a0);
import "DPI-C" function void check(input int PC, input int raddr);

module ysyx_100022863_TOP #(
	parameter 			INST_WIDTH	= 32,
						PC_WIDTH	= 32
)
(

	input										clk				,
	input			[INST_WIDTH-1:0]			inst			,
	input										rst_n			,

	output			[PC_WIDTH-1:0]				PC				,

	output										error

);

	wire	[3:0]		rs1			 	;
	wire	[3:0]		rs2			 	;
	wire	[3:0]		rd			 	;
	wire	[31:0]		I_imm			;
	wire	[31:0]		U_imm			;
	wire	[31:0]		S_imm			;
	wire	[31:0]		J_imm			;

	wire				addi_en	 		;
	wire				jalr_en			;
	wire				add_en			;
	wire 				lui_en			;
	wire				lw_en			;
	wire				lbu_en			;
	wire				sw_en			;
	wire				sb_en			;
	wire				auipc_en		;
	wire				jal_en			;
	wire				sltiu_en		;

	wire	[31:0]		alu_addi_result	;
	wire	[31:0]		alu_jalr_result	;
	wire	[31:0]		alu_add_result	;
	wire	[31:0]		alu_lui_result	;
	wire	[31:0]		alu_lw_result	;
	wire	[31:0]		alu_lbu_result	;
	wire	[31:0]		alu_sw_result	;
	wire	[31:0]		alu_sb_result	;
	wire	[31:0]		alu_auipc_result;
	wire	[31:0]		alu_jal_result	;
	wire	[31:0]		alu_sltiu_result;

	wire				wen				;
	wire	[31:0]		src1			;
	wire	[31:0]		src2			;
	wire	[31:0]		wdata			;

	always@(posedge clk)
		halt(inst, a0);
		
//	always@(*)
//		check(PC, raddr);
	
	wire	[31:0]		next_PC			;

	assign	next_PC = alu_jalr_result | alu_jal_result;

	ysyx_100022863_PC inst_ysyx_100022863_PC(

		.clk		(clk				),
		.rst_n		(rst_n				),
		.jalr_en	(jalr_en			),
		.jal_en		(jal_en				),

		.next_PC	(next_PC			),

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
		.J_imm			(J_imm			),

		.addi_en		(addi_en		),
		.jalr_en		(jalr_en		),
		.add_en 		(add_en			),
		.lui_en			(lui_en			),
		.lw_en			(lw_en			),
		.lbu_en			(lbu_en			),
		.sw_en			(sw_en			),
		.sb_en			(sb_en			),
		.auipc_en		(auipc_en		),
		.jal_en			(jal_en			),
		.sltiu_en		(sltiu_en		),

		.error			(error			)
	);

	assign wen = addi_en | jalr_en | add_en | lui_en | lw_en | lbu_en | auipc_en | jal_en | sltiu_en;
	
	assign wdata =  (jalr_en | jal_en) 	? (PC + 4	)	:
					(lw_en | lbu_en)	? (rdata	)	:
					addi_en		? (alu_addi_result	)	:
					jalr_en		? (alu_jalr_result	)	:
					add_en		? (alu_add_result	)	:
					lui_en		? (alu_lui_result	)	:
					auipc_en	? (alu_auipc_result	)	:
					jal_en		? (alu_jal_result	)	:
					sltiu_en	? (alu_sltiu_result	)	:

	wire	[31:0]		a0;

	ysyx_100022863_GPR #(
		.ADDR_WIDTH(4),
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
	  	.src2				 	(src2				),
		.a0						(a0					)

	);

	ysyx_100022863_ALU inst_ysyx_100022863_ALU(
		.PC					(PC					),

		.src1				(src1				),
		.src2				(src2				),
		.I_imm				(I_imm				),
		.U_imm				(U_imm				),
		.S_imm				(S_imm				),
		.J_imm				(J_imm				),
		.addi_en			(addi_en			),
		.jalr_en			(jalr_en			),
		.add_en				(add_en				),
		.lui_en				(lui_en				),
		.lw_en				(lw_en				),
		.lbu_en				(lbu_en				),
		.sw_en				(sw_en				),
		.sb_en				(sb_en				),
		.auipc_en			(auipc_en			),
		.jal_en				(jal_en				),
		.sltiu_en			(sltiu_en			),

		.alu_addi_result	(alu_addi_result	),
		.alu_jalr_result	(alu_jalr_result	),
		.alu_add_result		(alu_add_result		),
		.alu_lui_result		(alu_lui_result		),
		.alu_lw_result		(alu_lw_result		),
		.alu_lbu_result		(alu_lbu_result		),
		.alu_sw_result 		(alu_sw_result		),
		.alu_sb_result		(alu_sb_result		),
		.alu_auipc_result	(alu_auipc_result	),
		.alu_jal_result		(alu_jal_result		),
		.alu_sltiu_result	(alu_sltiu_result	)
	);

wire	[31:0]		raddr		;
wire	[31:0]		rdata		;
wire	[31:0]		wraddr		;
wire	[31:0]		wrdata		;
reg		[3:0]		wrmask		;

assign raddr = lw_en ? alu_lw_result : (lbu_en ? alu_lbu_result : 0);
assign wraddr = alu_sw_result | alu_sb_result;
assign wrdata = src2;


always@(*)
	if(sb_en)
		case(wraddr[1:0])
			2'b00: wrmask = 4'b0001;
			2'b01: wrmask = 4'b0010;
			2'b10: wrmask = 4'b0100;
			2'b11: wrmask = 4'b1000;
			default:
				wrmask = 4'b0;
		endcase
	else if(sw_en)
		wrmask = 4'b1111;
	else
		wrmask = 4'b0;

ysyx_100022863_LSU u_ysyx_100022863_LSU(
	.clk		 (clk	),
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
