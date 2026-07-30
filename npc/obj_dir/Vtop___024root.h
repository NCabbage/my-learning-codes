// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_OUT8(hsync,0,0);
    VL_OUT8(vsync,0,0);
    VL_OUT8(valid,0,0);
    VL_OUT8(vga_r,7,0);
    VL_OUT8(vga_g,7,0);
    VL_OUT8(vga_b,7,0);
    CData/*0:0*/ top__DOT__clkout;
    CData/*0:0*/ top__DOT__ysyx_100022863_VGA_inst__DOT__h_valid;
    CData/*0:0*/ top__DOT__ysyx_100022863_VGA_inst__DOT__v_valid;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__clkout__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    VL_OUT16(h_addr,11,0);
    VL_OUT16(v_addr,11,0);
    SData/*11:0*/ top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt;
    SData/*11:0*/ top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt;
    IData/*31:0*/ top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount;
    VlWide<20>/*639:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<20>/*639:0*/, 480> top__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
