import "DPI-C" function int pmem_read(input int raddre);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);

module ysyx_100022863_LSU(
    input               clk         ,
    input               sw_en       ,
    input               sh_en       ,
    input               sb_en       ,
    input       [31:0]  waddr       ,
    input       [31:0]  wdata       ,

    input               lw_en       ,
    input               lbu_en      ,
    input       [31:0]  raddr       ,

    output  reg [31:0]  rdata
);

reg     [31:0]  sb_data ;
reg     [31:0]  sh_data ;
wire    [3:0]   sb_mask ;
wire    [31:0]  sh_mask ;

always@(*)begin
	if(sb_en)
		case(waddr[1:0])
			2'b00: sb_mask = 4'b0001;
			2'b01: sb_mask = 4'b0010;
			2'b10: sb_mask = 4'b0100;
			2'b11: sb_mask = 4'b1000;
			default:
				sb_mask = 4'b0;
		endcase
    else if(sh_en)
        case(waddr[1:0])
            2'b00: sh_mask = 4'b0011;
            2'b10: sh_mask = 4'b1100;
        endcase
	else if(sw_en)
		sb_mask = 4'b1111;
	else begin
		sb_mask = 4'b0;
        sh_mask = 4'b0;
    end
end

always@(*)
    if(sb_en)begin
        case(waddr[1:0])
            2'b00: sb_data = {24'b0, wdata[7:0]};
            2'b01: sb_data = {16'b0, wdata[7:0], 8'b0};
            2'b10: sb_data = {8'b0,  wdata[7:0], 16'b0};
            2'b11: sb_data = {wdata[7:0], 24'b0};
            default:
                sb_data = 32'b0;
        endcase
    end
    else if(sh_en)begin
        case(waddr[1:0])
            2'b00: sh_data = {16'b0, wdata[15:0]};
            2'b10: sh_data = {wdata[15:0], 16'b0};
        endcase
    end
    else
        sb_data = 32'b0;

always@(posedge clk)
    if(sw_en)
        pmem_write(waddr>>2, wdata, {28'b0, sb_mask});
    else if(sb_en)
        pmem_write(waddr>>2, sb_data, {28'b0, sb_mask});
    else if(sh_en)
        pmem_write(waddr>>2, sh_data, {28'b0, sh_mask});

always@(*)
    if(lw_en)
        rdata = pmem_read(raddr >> 2);
    else if(lbu_en) begin
        case(raddr[1:0])
            2'b00: rdata = (pmem_read(raddr >> 2)) & 32'h000000ff;
            2'b01: rdata = (pmem_read(raddr >> 2) >> 8) & 32'h000000ff;
            2'b10: rdata = (pmem_read(raddr >> 2) >> 16) & 32'h000000ff;
            2'b11: rdata = (pmem_read(raddr >> 2) >> 24) & 32'h000000ff;
            default:
                rdata = 32'b0;
        endcase
    end
    else
        rdata = 32'b0;


endmodule
