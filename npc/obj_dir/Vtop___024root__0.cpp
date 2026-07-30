// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

extern const VlWide<20>/*639:0*/ Vtop__ConstPool__CONST_h7ca4bd95_0;

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*8:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt 
            = ((0x0320U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt))
                ? 0U : (0x00000fffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt))));
        vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt 
            = ((0x020dU == (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt))
                ? 0U : (0x00000fffU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt))));
    } else {
        vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt = 0U;
    }
    vlSelfRef.hsync = (0x0060U < (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt));
    vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__h_valid 
        = ((0x0090U < (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt)) 
           & (0x0310U >= (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt)));
    vlSelfRef.vsync = (2U < (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt));
    vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__v_valid 
        = ((0x0023U < (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt)) 
           & (0x009bU >= (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt)));
    vlSelfRef.h_addr = (0x00000fffU & (((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt) 
                                        - (IData)(0x0145U)) 
                                       & (- (IData)((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__h_valid)))));
    vlSelfRef.valid = ((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__h_valid) 
                       & (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__v_valid));
    vlSelfRef.v_addr = (0x00000fffU & (((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt) 
                                        - (IData)(0x0036U)) 
                                       & (- (IData)((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__v_valid)))));
    __VdfgRegularize_h6e95ff9d_0_1 = (0x000001ffU & 
                                      (((IData)(0x00000280U) 
                                        * (IData)(vlSelfRef.v_addr)) 
                                       + (IData)(vlSelfRef.h_addr)));
    if ((0x01dfU >= (IData)(__VdfgRegularize_h6e95ff9d_0_1))) {
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][0U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[1U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][1U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[2U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][2U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[3U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][3U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[4U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][4U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[5U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][5U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[6U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][6U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[7U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][7U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[8U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][8U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[9U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][9U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[10U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][10U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[11U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][11U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[12U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][12U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[13U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][13U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[14U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][14U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[15U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][15U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[16U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][16U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[17U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][17U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[18U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][18U];
        vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[19U] 
            = vlSelfRef.top__DOT__mem[__VdfgRegularize_h6e95ff9d_0_1][19U];
    } else {
        VL_ASSIGN_W(640, vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0, Vtop__ConstPool__CONST_h7ca4bd95_0);
    }
    vlSelfRef.vga_r = (0x000000ffU & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U]);
    vlSelfRef.vga_g = (0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                      >> 8U));
    vlSelfRef.vga_b = (0x000000ffU & (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0[0U] 
                                      >> 0x00000010U));
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.top__DOT__clkout) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clkout__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clkout__0 
            = vlSelfRef.top__DOT__clkout;
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    IData/*31:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__clkout;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__clkout = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount 
                        = vlSelfRef.top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__clkout 
                        = vlSelfRef.top__DOT__clkout;
                    if (vlSelfRef.rst_n) {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount 
                            = ((IData)(1U) + vlSelfRef.top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount);
                        if ((2U <= vlSelfRef.top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount)) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__clkout 
                                = (1U & (~ (IData)(vlSelfRef.top__DOT__clkout)));
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount = 0U;
                        } else {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__clkout 
                                = vlSelfRef.top__DOT__clkout;
                        }
                    } else {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__clkout = 0U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount = 0U;
                    }
                    vlSelfRef.top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount;
                    vlSelfRef.top__DOT__clkout = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__clkout;
                }
            }
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtop___024root___nba_sequent__TOP__1(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/top.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/top.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
