import "DPI-C" function int pmem_read(input int raddre);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);

module ysyx_100022863_LSU(
    input               sw_en       ,
    input               sb_en       ,
    input       [31:0]  waddr       ,
    input       [31:0]  wdata       ,
    input       [3:0]   wmask       ,

    input               lw_en       ,
    input               lbu_en      ,
    input       [31:0]  raddr       ,

    output  reg [31:0]  rdata
);

always@(*)
    if(sw_en)
        pmem_write(waddr>>2, wdata, {28'b0, wmask});
    else if(sb_en)
        pmem_write(waddr>>2, {24'b0, wdata[7:0]}, {28'b0, wmask});
always@(*)
    if(lw_en)
        rdata = pmem_read(raddr >> 2);
    else if(lbu_en) begin
        case(raddr[1:0])
            2'b00: rdata = (pmem_read(raddr >> 2)) & 32'h000000ff;
            2'b01: rdata = (pmem_read(raddr >> 2) >> 8) & 32'h0000ff00;
            2'b10: rdata = (pmem_read(raddr >> 2) >> 16) & 32'h00ff0000;
            2'b11: rdata = (pmem_read(raddr >> 2) >> 24) & 32'hff000000;
            default:
                rdata = 32'b0;
        endcase
    end
    else
        rdata = 0;


endmodule
