// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.ps2_data) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0)) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.ps2_clk) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.clrn) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clrn__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.clk) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__clrn__0 = vlSelfRef.clrn;
        vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0 
            = vlSelfRef.ps2_clk;
        vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0 
            = vlSelfRef.ps2_data;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__next_state 
                        = ((IData)(vlSelfRef.clrn) ? 
                           ((1U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                 ? 4U : 1U) : ((4U 
                                                == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                                                ? (
                                                   ((0xf0U 
                                                     == (IData)(vlSelfRef.data)) 
                                                    & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up))
                                                    ? 2U
                                                    : 4U)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                                                    ? 
                                                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                                     ? 1U
                                                     : 2U)
                                                    : 1U)))
                            : 1U);
                }
            }
        }
    }
    return (__VicoExecute);
}

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

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h14e9ccf2_0;

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync;
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync = 0;
    CData/*0:0*/ __Vdly__ready;
    __Vdly__ready = 0;
    CData/*2:0*/ __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr;
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count;
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count = 0;
    CData/*2:0*/ __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr;
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__top__DOT__en;
    __Vdly__top__DOT__en = 0;
    CData/*7:0*/ __Vdly__times;
    __Vdly__times = 0;
    CData/*7:0*/ __VdlyVal__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0;
    __VdlyVal__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0;
    __VdlyDim0__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0;
    __VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 0;
    // Body
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync 
        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync;
    __Vdly__top__DOT__en = vlSelfRef.top__DOT__en;
    __Vdly__times = vlSelfRef.times;
    __Vdly__ready = vlSelfRef.ready;
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr 
        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr;
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count 
        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count;
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr 
        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr;
    __VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelfRef.ps2_clk));
    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_sync 
        = ((6U & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_sync) 
                  << 1U)) | (IData)(vlSelfRef.ready));
    __Vdly__top__DOT__en = ((IData)(vlSelfRef.clrn) 
                            && ((4U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state)) 
                                || ((2U != (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state)) 
                                    && (IData)(vlSelfRef.top__DOT__en))));
    if (vlSelfRef.top__DOT__en) {
        vlSelfRef.seg3 = (0x000000ffU & Vtop__ConstPool__CONST_h14e9ccf2_0
                          [(0x0000000fU & ((IData)(vlSelfRef.ascll) 
                                           >> 4U))]);
        vlSelfRef.seg2 = (0x000000ffU & Vtop__ConstPool__CONST_h14e9ccf2_0
                          [(0x0000000fU & (IData)(vlSelfRef.ascll))]);
        vlSelfRef.seg1 = (0x000000ffU & Vtop__ConstPool__CONST_h14e9ccf2_0
                          [(0x0000000fU & ((IData)(vlSelfRef.data) 
                                           >> 4U))]);
        vlSelfRef.seg0 = (0x000000ffU & Vtop__ConstPool__CONST_h14e9ccf2_0
                          [(0x0000000fU & (IData)(vlSelfRef.data))]);
    } else {
        vlSelfRef.seg3 = 0x000000ffU;
        vlSelfRef.seg2 = 0x000000ffU;
        vlSelfRef.seg1 = 0x000000ffU;
        vlSelfRef.seg0 = 0x000000ffU;
    }
    if (vlSelfRef.clrn) {
        __Vdly__times = (0x000000ffU & (((4U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state)) 
                                         & (2U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__next_state)))
                                         ? ((IData)(1U) 
                                            + (IData)(vlSelfRef.times))
                                         : (IData)(vlSelfRef.times)));
        if ((IData)((4U == (6U & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync))))) {
            if ((0x0aU == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count))) {
                if ((((~ (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer)) 
                      & (IData)(vlSelfRef.ps2_data)) 
                     & VL_REDXOR_32((0x000001ffU & 
                                     ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer) 
                                      >> 1U))))) {
                    __VdlyVal__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 
                        = (0x000000ffU & ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer) 
                                          >> 1U));
                    __VdlyDim0__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 
                        = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr;
                    __VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0 = 1U;
                    __Vdly__ready = 1U;
                    __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr)));
                    vlSelfRef.overflow = ((IData)(vlSelfRef.overflow) 
                                          | ((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr) 
                                             == (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count = 0U;
            } else {
                if ((9U >= (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count))) {
                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count))) 
                            & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer)) 
                           | (0x03ffU & ((IData)(vlSelfRef.ps2_data) 
                                         << (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count))));
                }
                __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count)));
            }
            if (vlSelfRef.ready) {
                __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr)));
                if (((IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr) 
                     == ((IData)(1U) + (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr)))) {
                    __Vdly__ready = 0U;
                }
            }
        }
    } else {
        __Vdly__times = 0U;
        __Vdly__ready = 0U;
        __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count = 0U;
        __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr = 0U;
        __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr = 0U;
        vlSelfRef.overflow = 0U;
    }
    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync;
    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr 
        = __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr;
    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count 
        = __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count;
    vlSelfRef.ready = __Vdly__ready;
    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr 
        = __Vdly__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr;
    if (__VdlySet__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0) {
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo[__VdlyDim0__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0] 
            = __VdlyVal__top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo__v0;
    }
    if (vlSelfRef.clrn) {
        vlSelfRef.seg5 = (0x000000ffU & Vtop__ConstPool__CONST_h14e9ccf2_0
                          [(0x0000000fU & ((IData)(vlSelfRef.times) 
                                           >> 4U))]);
        vlSelfRef.seg4 = (0x000000ffU & Vtop__ConstPool__CONST_h14e9ccf2_0
                          [(0x0000000fU & (IData)(vlSelfRef.times))]);
    } else {
        vlSelfRef.seg5 = 0x000000ffU;
        vlSelfRef.seg4 = 0x000000ffU;
    }
    vlSelfRef.times = __Vdly__times;
    vlSelfRef.top__DOT__en = __Vdly__top__DOT__en;
    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up 
        = (IData)((2U == (6U & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_sync))));
    vlSelfRef.data = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo
        [vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr];
    vlSelfRef.ascll = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM
        [vlSelfRef.data];
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = ((0U 
                                                 != (IData)(vlSelfRef.data)) 
                                                & ((0xf0U 
                                                    != (IData)(vlSelfRef.data)) 
                                                   & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up)));
    if (vlSelfRef.clrn) {
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state 
            = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__next_state;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__next_state 
            = ((1U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                    ? 4U : 1U) : ((4U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                                   ? (((0xf0U == (IData)(vlSelfRef.data)) 
                                       & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up))
                                       ? 2U : 4U) : 
                                  ((2U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                                    ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                        ? 1U : 2U) : 1U)));
    } else {
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state = 1U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__next_state = 1U;
    }
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
                                                         & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1)))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
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
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
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
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/keyboard_model/keyboard_top.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/keyboard_model/keyboard_top.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/keyboard_model/keyboard_top.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
}
#endif  // VL_DEBUG
