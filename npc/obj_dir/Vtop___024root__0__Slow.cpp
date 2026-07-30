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
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__clkout__0 
        = vlSelfRef.top__DOT__clkout;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.vga_r = 0x6aU;
        vlSelfRef.vga_g = 7U;
        vlSelfRef.vga_b = 0U;
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
                    vlSelfRef.hsync = (0x0060U < (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt));
                    vlSelfRef.vsync = (2U < (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt));
                    vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__h_valid 
                        = ((0x0090U < (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt)) 
                           & (0x0310U >= (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt)));
                    vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__v_valid 
                        = ((0x0023U < (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt)) 
                           & (0x009bU >= (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt)));
                    vlSelfRef.h_addr = (0x00000fffU 
                                        & (((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt) 
                                            - (IData)(0x0145U)) 
                                           & (- (IData)((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__h_valid)))));
                    vlSelfRef.valid = ((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__h_valid) 
                                       & (IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__v_valid));
                    vlSelfRef.v_addr = (0x00000fffU 
                                        & (((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt) 
                                            - (IData)(0x0036U)) 
                                           & (- (IData)((IData)(vlSelfRef.top__DOT__ysyx_100022863_VGA_inst__DOT__v_valid)))));
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
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge top.clkout)\n");
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
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2999247747110030874ull);
    vlSelf->vsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18337175696363507471ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->h_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8809760890132780221ull);
    vlSelf->v_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4595446588323432923ull);
    vlSelf->vga_r = 106U;
    ;
    vlSelf->vga_g = 7U;
    ;
    vlSelf->vga_b = 0U;
    ;
    vlSelf->top__DOT__clkout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10056611469490561674ull);
    vlSelf->top__DOT__ysyx_100022863_VGA_inst__DOT__h_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11012301591435163990ull);
    vlSelf->top__DOT__ysyx_100022863_VGA_inst__DOT__v_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14795769210308125405ull);
    vlSelf->top__DOT__ysyx_100022863_VGA_inst__DOT__x_cnt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2343794923217989460ull);
    vlSelf->top__DOT__ysyx_100022863_VGA_inst__DOT__y_cnt = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 209393041652116814ull);
    vlSelf->top__DOT__ysyx_100022863_clkgen_inst__DOT__clkcount = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7603170699718688852ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__clkout__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
