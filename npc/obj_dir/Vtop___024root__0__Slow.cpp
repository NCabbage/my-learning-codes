// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__clrn__0 = vlSelfRef.clrn;
    vlSelfRef.__Vtrigprevexpr___TOP__ps2_clk__0 = vlSelfRef.ps2_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__ps2_data__0 = vlSelfRef.ps2_data;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[28U] = 0x41U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[50U] = 0x42U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[33U] = 0x43U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[35U] = 0x44U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[36U] = 0x45U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[43U] = 0x46U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[52U] = 0x47U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[51U] = 0x48U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[67U] = 0x49U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[59U] = 0x4aU;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[66U] = 0x4bU;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[75U] = 0x4cU;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[58U] = 0x4dU;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[49U] = 0x4eU;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[68U] = 0x4fU;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[77U] = 0x50U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[21U] = 0x51U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[45U] = 0x52U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[27U] = 0x53U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[44U] = 0x54U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[60U] = 0x55U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[42U] = 0x56U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[29U] = 0x57U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[34U] = 0x58U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[53U] = 0x59U;
        vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[26U] = 0x5aU;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/top.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                {
                    // Inlined CFunc: _stl_sequent__TOP__0
                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up 
                        = (IData)((2U == (6U & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_sync))));
                    vlSelfRef.data = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo
                        [vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr];
                    vlSelfRef.ascll = vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM
                        [vlSelfRef.data];
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                        = ((0U != (IData)(vlSelfRef.data)) 
                           & ((0xf0U != (IData)(vlSelfRef.data)) 
                              & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up)));
                    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 
                        = ((0xf0U == (IData)(vlSelfRef.data)) 
                           & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up));
                    vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__next_state 
                        = ((IData)(vlSelfRef.clrn) ? 
                           ((1U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                             ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                 ? 4U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                          ? 2U : 1U))
                             : ((4U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                     ? 2U : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                              ? 4U : 1U))
                                 : ((2U == (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state))
                                     ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)
                                         ? 1U : 2U)
                                     : 1U))) : 1U);
                }
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( clrn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( ps2_clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( ps2_data)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->clrn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17263249432293168359ull);
    vlSelf->ps2_clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8416932302485436191ull);
    vlSelf->ps2_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12987539744063830537ull);
    vlSelf->data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10363016170300574568ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->overflow = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16341344440165733293ull);
    vlSelf->seg0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8493502720866162066ull);
    vlSelf->seg1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12479572413206868450ull);
    vlSelf->seg2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8290370235953472720ull);
    vlSelf->seg3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10826635380300885453ull);
    vlSelf->seg4 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11022115687530795145ull);
    vlSelf->seg5 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5844395792903037563ull);
    vlSelf->ascll = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5983099929216156919ull);
    vlSelf->times = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15831858721452284988ull);
    vlSelf->top__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11663699089965319567ull);
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4343261509521963652ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16063127741267073342ull);
    }
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15117044101884409948ull);
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3798688850706182072ull);
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14480979310404146197ull);
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1207676001407060821ull);
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4669209934159062334ull);
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12786540595578501029ull);
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 404617036366874723ull);
    vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__next_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8218493225979788781ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ROM[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3573973021486267794ull);
    }
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clrn__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ps2_clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__ps2_data__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
