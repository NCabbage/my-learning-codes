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
                                                        ((((IData)(vlSelfRef.rst_n) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
            vlSelfRef.__VactDidInit = 1U;
            vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
        }
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
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q 
                        = vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q;
                    if (vlSelfRef.rst_n) {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q = 0U;
                        vlSelfRef.out = 0U;
                    } else if ((4U & (IData)(vlSelfRef.func))) {
                        if ((2U & (IData)(vlSelfRef.func))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q 
                                = ((1U & (IData)(vlSelfRef.func))
                                    ? ((0x000000feU 
                                        & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q) 
                                           << 1U)) 
                                       | (1U & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q) 
                                                >> 7U)))
                                    : ((0x00000080U 
                                        & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q) 
                                           << 7U)) 
                                       | (0x0000007fU 
                                          & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q) 
                                             >> 1U))));
                        } else if ((1U & (IData)(vlSelfRef.func))) {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q 
                                = (((IData)(vlSelfRef.left_in) 
                                    << 7U) | (0x0000007fU 
                                              & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q) 
                                                 >> 1U)));
                            vlSelfRef.out = vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q;
                        } else {
                            __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q 
                                = ((0x00000080U & (IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q)) 
                                   | (0x0000007fU & 
                                      ((IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q) 
                                       >> 1U)));
                        }
                    } else {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q 
                            = ((2U & (IData)(vlSelfRef.func))
                                ? ((1U & (IData)(vlSelfRef.func))
                                    ? (0x000000feU 
                                       & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q) 
                                          << 1U)) : 
                                   (0x0000007fU & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q) 
                                                   >> 1U)))
                                : ((1U & (IData)(vlSelfRef.func))
                                    ? (IData)(vlSelfRef.in)
                                    : 0U));
                    }
                    vlSelfRef.top__DOT__ysyx_100022863_shift_register_inst__DOT__Q 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_shift_register_inst__DOT__Q;
                }
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
    if (VL_UNLIKELY(((vlSelfRef.func & 0xf8U)))) {
        Verilated::overWidthError("func");
    }
    if (VL_UNLIKELY(((vlSelfRef.left_in & 0xfeU)))) {
        Verilated::overWidthError("left_in");
    }
}
#endif  // VL_DEBUG
