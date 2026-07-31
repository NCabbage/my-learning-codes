// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__rom_init__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14842976808221614253ull);
    }
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__0 
        = vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__1 
        = vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__rom_init__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000100U, vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__rom_init__DOT__i)) {
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[(0x000000ffU 
                                                                                & vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__rom_init__DOT__i)] = 0U;
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__rom_init__DOT__i 
                = ((IData)(1U) + vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__rom_init__DOT__i);
        }
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[0U] = 0x8aU;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[1U] = 0x8aU;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[2U] = 0xa0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[3U] = 0xb1U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[4U] = 0x17U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[5U] = 0x29U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[6U] = 0xd1U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[7U] = 0xdfU;
    }
    {
        // Inlined CFunc: __Vm_traceActivitySetAll
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
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

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top.ysyx_100022863_sCPU_inst.ysyx_100022863_GPR_inst.GPR)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
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
    } while ((2U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[1U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
        vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__0.neq(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR)));
        vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__0.assign(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR);
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
            vlSelfRef.__VstlDidInit = 1U;
            vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
        }
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
            if ((1ULL & vlSelfRef.__VstlTriggered[1U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                }
            }
            if ((1ULL & (vlSelfRef.__VstlTriggered[1U] 
                         | vlSelfRef.__VstlTriggered[0U]))) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.ans = (0x000000ffU & 
                                     ((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__bner_en)
                                       ? ((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR
                                                  [vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1]) 
                                          - (IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR
                                                    [vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2]))
                                       : ((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR
                                                  [vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1]) 
                                          + (IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR
                                                    [vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2]))));
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR[vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rd] 
                        = ((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__li_en)
                            ? (IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__imm)
                            : ((IData)(vlSelfRef.ans) 
                               & (- (IData)((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__add_en)))));
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top.ysyx_100022863_sCPU_inst.ysyx_100022863_GPR_inst.GPR)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( rst_n)\n");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] top.ysyx_100022863_sCPU_inst.ysyx_100022863_GPR_inst.GPR)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge clk)\n");
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
    vlSelf->ans = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16063379797845830942ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1646678502906214951ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4561380345417467105ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__rd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2378177847988686387ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__imm = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5635867554806091559ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__add_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13042454124169457146ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__li_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 368397149828329997ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__bner_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3898777768419950838ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__out_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11947429977030204995ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__A = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17368189224189928196ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__B = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 704484758698212666ull);
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT____Vcellout__ysyx_100022863_ctrl_inst__bner_addr = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5220140255083450379ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3355996766072555400ull);
    }
    vlSelf->top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6154097295995480722ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__0[__Vi0] = 0;
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__1[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
