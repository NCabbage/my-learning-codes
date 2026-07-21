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
                                                        (((((IData)(vlSelfRef.En) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__En__0)) 
                                                           << 3U) 
                                                          | (((IData)(vlSelfRef.ysyx_100022863_decoder__02Ex) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ysyx_100022863_decoder__02Ex__0)) 
                                                             << 2U)) 
                                                         | ((((IData)(vlSelfRef.en) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__en__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.top__02Ex) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top__02Ex__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__top__02Ex__0 
            = vlSelfRef.top__02Ex;
        vlSelfRef.__Vtrigprevexpr___TOP__en__0 = vlSelfRef.en;
        vlSelfRef.__Vtrigprevexpr___TOP__ysyx_100022863_decoder__02Ex__0 
            = vlSelfRef.ysyx_100022863_decoder__02Ex;
        vlSelfRef.__Vtrigprevexpr___TOP__En__0 = vlSelfRef.En;
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
            if ((3ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.top__02Ey = ((IData)(vlSelfRef.en)
                                            ? (3U & 
                                               (0x00030210U 
                                                >> 
                                                ((IData)(vlSelfRef.top__02Ex) 
                                                 << 1U)))
                                            : 0U);
                }
            }
            if ((0x000000000000000cULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.ysyx_100022863_decoder__02Ey 
                        = ((IData)(vlSelfRef.En) ? 
                           (0x0000000fU & (0x8421U 
                                           >> ((IData)(vlSelfRef.ysyx_100022863_decoder__02Ex) 
                                               << 2U)))
                            : 0U);
                }
            }
        }
    }
    return (__VicoExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
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
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.top__02Ex & 0xf0U)))) {
        Verilated::overWidthError("top.x");
    }
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");
    }
    if (VL_UNLIKELY(((vlSelfRef.ysyx_100022863_decoder__02Ex 
                      & 0xfcU)))) {
        Verilated::overWidthError("ysyx_100022863_decoder.x");
    }
    if (VL_UNLIKELY(((vlSelfRef.En & 0xfeU)))) {
        Verilated::overWidthError("En");
    }
}
#endif  // VL_DEBUG
