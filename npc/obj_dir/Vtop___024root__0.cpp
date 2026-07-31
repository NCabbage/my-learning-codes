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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        if ((0U != (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                          [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                            >> 2U)] >> 6U)))) {
            if ((2U != (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                              [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                >> 2U)] >> 6U)))) {
                if ((3U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                  [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                    >> 2U)] >> 6U)))) {
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT____Vcellout__ysyx_100022863_ctrl_inst__bner_addr 
                        = (0x0000000fU & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                          [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                            >> 2U)] 
                                          >> 2U));
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__bner_en = 1U;
                }
            }
            if ((2U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                              [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                >> 2U)] >> 6U)))) {
                vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__imm 
                    = (0x0000000fU & vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                       [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                         >> 2U)]);
                vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__li_en = 1U;
            }
        }
        if ((0U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                          [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                            >> 2U)] >> 6U)))) {
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rd 
                = (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                         [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                           >> 2U)] >> 4U));
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__add_en = 1U;
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1 
                = (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                         [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                           >> 2U)] >> 2U));
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2 
                = (3U & vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                   [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                     >> 2U)]);
        } else {
            if ((2U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                              [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                >> 2U)] >> 6U)))) {
                vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rd 
                    = (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                             [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                               >> 2U)] >> 4U));
            }
            if ((2U != (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                              [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                >> 2U)] >> 6U)))) {
                if ((3U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                  [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                    >> 2U)] >> 6U)))) {
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1 = 0U;
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2 
                        = (3U & vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                           [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                             >> 2U)]);
                }
            }
        }
    } else {
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rd = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__add_en = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__imm = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__li_en = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1 = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2 = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__bner_en = 0U;
    }
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
                                                        ((((IData)(vlSelfRef.rst_n) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.clk) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)) 
                                                             << 1U) 
                                                            | vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__0.neq(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR)))));
        vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__0.assign(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR);
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
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
            if ((4ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
            if ((5ULL & vlSelfRef.__VicoTriggered[0U])) {
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC 
            = (0x000000ffU & (((~ (0U != (IData)(vlSelfRef.ans))) 
                               & (IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__bner_en))
                               ? (IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT____Vcellout__ysyx_100022863_ctrl_inst__bner_addr)
                               : ((IData)(4U) + (IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC))));
        if ((0U != (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                          [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                            >> 2U)] >> 6U)))) {
            if ((2U != (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                              [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                >> 2U)] >> 6U)))) {
                if ((3U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                  [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                    >> 2U)] >> 6U)))) {
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT____Vcellout__ysyx_100022863_ctrl_inst__bner_addr 
                        = (0x0000000fU & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                          [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                            >> 2U)] 
                                          >> 2U));
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__bner_en = 1U;
                }
            }
            if ((2U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                              [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                >> 2U)] >> 6U)))) {
                vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__imm 
                    = (0x0000000fU & vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                       [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                         >> 2U)]);
                vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__li_en = 1U;
            }
        }
        if ((0U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                          [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                            >> 2U)] >> 6U)))) {
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rd 
                = (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                         [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                           >> 2U)] >> 4U));
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__add_en = 1U;
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1 
                = (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                         [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                           >> 2U)] >> 2U));
            vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2 
                = (3U & vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                   [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                     >> 2U)]);
        } else {
            if ((2U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                              [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                >> 2U)] >> 6U)))) {
                vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rd 
                    = (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                             [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                               >> 2U)] >> 4U));
            }
            if ((2U != (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                              [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                >> 2U)] >> 6U)))) {
                if ((3U == (3U & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                  [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                    >> 2U)] >> 6U)))) {
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1 = 0U;
                    vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2 
                        = (3U & vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                           [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                             >> 2U)]);
                }
            }
        }
    } else {
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rd = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__add_en = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__imm = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__li_en = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs1 = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__rs2 = 0U;
        vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__bner_en = 0U;
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
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))) 
                                                          << 1U) 
                                                         | vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__1.neq(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR))));
        vlSelfRef.__Vtrigprevexpr___TOP__top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR__1.assign(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR);
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
            vlSelfRef.__VactDidInit = 1U;
            vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        {
            // Inlined CFunc: _eval_act
            if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
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
    return (__VactExecute);
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
                Vtop___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
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
            VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/top.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
