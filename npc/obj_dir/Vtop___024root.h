// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_OUT8(error,0,0);
        CData/*3:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sb_mask;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__andi_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sll_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__and_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xori_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bge_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srli_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bgeu_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slli_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__blt_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bltu_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slt_en;
        CData/*0:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lh_en;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_5;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_6;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_7;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_9;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_10;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_11;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_12;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_14;
        CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_15;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VicoDidInit;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__1;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_IN(inst,31,0);
        VL_OUT(PC,31,0);
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__rdata;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sb_data;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sh_data;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__mem_data;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__wdata;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm;
        IData/*31:0*/ top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_PC__DOT__next_PC;
    };
    struct {
        IData/*31:0*/ __Vfunc_pmem_read__4__Vfuncout;
        IData/*31:0*/ __Vfunc_pmem_read__5__Vfuncout;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_2;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
        IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_8;
        IData/*31:0*/ __Vtrigprevexpr___TOP__inst__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 16> top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

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
