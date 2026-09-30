import "DPI-C" function int pmem_read(input int raddre);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input int wmask);

module ysyx_100022863_LSU(
    input               wr_en       ,
    input       [31:0]  waddr       ,
    input       [31:0]  wdata       ,
    input       [3:0]   wmask       ,

    input               rd_en       ,
    input       [31:0]  raddr       ,

    output  reg [31:0]  rdata
);

always@(*)
    if(wr_en)
        pmem_write(waddr, wdata, {28'b0, wmask});

always@(*)
    if(rd_en) begin
        if(raddr[1:0] == 0) rdata = pmem_read(raddr) & 32'h000000ff;
        if(raddr[1:0] == 1) rdata = pmem_read(raddr) & 32'h0000ff00;
        if(raddr[1:0] == 2) rdata = pmem_read(raddr) & 32'h00ff0000;
        if(raddr[1:0] == 3) rdata = pmem_read(raddr) & 32'hff000000;
    end
    else
        rdata = 0;


endmodule
