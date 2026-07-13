// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vt1.h for the primary calling header

#include "Vt1__pch.h"

bool Vt1___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt1___024root___trigger_anySet__ico\n"); );
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
VL_ATTR_COLD void Vt1___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vt1___024root___eval_phase__ico(Vt1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt1___024root___eval_phase__ico\n"); );
    Vt1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.b) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__b__0)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.a) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__a__0)))));
        vlSelfRef.__Vtrigprevexpr___TOP__a__0 = vlSelfRef.a;
        vlSelfRef.__Vtrigprevexpr___TOP__b__0 = vlSelfRef.b;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vt1___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vt1___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((3ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.f = ((IData)(vlSelfRef.a) 
                                   ^ (IData)(vlSelfRef.b));
                }
            }
        }
    }
    return (__VicoExecute);
}

void Vt1___024root___eval(Vt1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt1___024root___eval\n"); );
    Vt1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vt1___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("vsrc/t1.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vt1___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
}

#ifdef VL_DEBUG
void Vt1___024root___eval_debug_assertions(Vt1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vt1___024root___eval_debug_assertions\n"); );
    Vt1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.a & 0xfeU)))) {
        Verilated::overWidthError("a");
    }
    if (VL_UNLIKELY(((vlSelfRef.b & 0xfeU)))) {
        Verilated::overWidthError("b");
    }
}
#endif  // VL_DEBUG
