import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input uint8_t wmask);

module ysyx_100022863_LSU(

    input               clk         ,
    input               rst_n       ,

    input               wr_en       ,
    input       [31:0]  waddr       ,
    input       [31:0]  wdata       ,
    input       [3:0]   wmask       ,

    input               rd_en       ,
    input       [31:0]  raddr       ,

    output  reg [31:0]  rdata
);

always@(posedge clk)
    if(wr_en)
        pmem_write(waddr, wdata, wmask);

always@(posedge clk)
    if(rd_en)
        rdata <= pmem_read(raddr);

endmodule