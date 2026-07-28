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
                                                        ((IData)(vlSelfRef.clk) 
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
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
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    CData/*2:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__ready;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__ready = 0;
                    CData/*2:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr = 0;
                    CData/*3:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count = 0;
                    CData/*2:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr = 0;
                    CData/*7:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 0;
                    CData/*2:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 0;
                    CData/*0:0*/ __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 0;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync 
                        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__ready 
                        = vlSelfRef.ready;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr 
                        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count 
                        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr 
                        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 0U;
                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync 
                        = ((6U & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync) 
                                  << 1U)) | (IData)(vlSelfRef.ps2_clk));
                    if (vlSelfRef.clrn) {
                        if ((IData)((4U == (6U & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync))))) {
                            if ((2U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count))) {
                                if ((((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer) 
                                      & (IData)(vlSelfRef.ps2_data)) 
                                     & VL_REDXOR_32(
                                                    (0x000001ffU 
                                                     & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer) 
                                                        >> 1U))))) {
                                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 
                                        = (0x000000ffU 
                                           & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer) 
                                              >> 1U));
                                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 
                                        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr;
                                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 1U;
                                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__ready = 1U;
                                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr 
                                        = (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr)));
                                    vlSelfRef.overflow 
                                        = ((IData)(vlSelfRef.overflow) 
                                           | ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr) 
                                              == (7U 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr)))));
                                }
                                __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count = 0U;
                            } else {
                                if ((9U >= (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count))) {
                                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer 
                                        = (((~ ((IData)(1U) 
                                                << (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count))) 
                                            & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer)) 
                                           | (0x03ffU 
                                              & ((IData)(vlSelfRef.ps2_data) 
                                                 << (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count))));
                                }
                                __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count 
                                    = (0x0000000fU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count)));
                            }
                            if (vlSelfRef.ready) {
                                if ((1U & (~ (IData)(vlSelfRef.nextdata_n)))) {
                                    __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr 
                                        = (7U & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr)));
                                    if (((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr) 
                                         == ((IData)(1U) 
                                             + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr)))) {
                                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__ready = 0U;
                                    }
                                }
                            }
                        }
                    } else {
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__ready = 0U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count = 0U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr = 0U;
                        __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr = 0U;
                        vlSelfRef.overflow = 0U;
                    }
                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync;
                    vlSelfRef.ready = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__ready;
                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr;
                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count;
                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr 
                        = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr;
                    if (__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0) {
                        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo[__Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyDim0__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0] 
                            = __Vinline_0__eval_nba___Vinline_0__nba_sequent__TOP__0___VdlyVal__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0;
                    }
                    vlSelfRef.data = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo
                        [vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr];
                }
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
    if (VL_UNLIKELY(((vlSelfRef.clrn & 0xfeU)))) {
        Verilated::overWidthError("clrn");
    }
    if (VL_UNLIKELY(((vlSelfRef.ps2_clk & 0xfeU)))) {
        Verilated::overWidthError("ps2_clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.ps2_data & 0xfeU)))) {
        Verilated::overWidthError("ps2_data");
    }
    if (VL_UNLIKELY(((vlSelfRef.nextdata_n & 0xfeU)))) {
        Verilated::overWidthError("nextdata_n");
    }
}
#endif  // VL_DEBUG
