// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(din,7,0);
    VL_IN8(shamt,2,0);
    VL_IN8(LR,0,0);
    VL_IN8(AL,0,0);
    VL_OUT8(dout,7,0);
    CData/*7:0*/ __VdfgRegularize_h6e95ff9d_0_0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*7:0*/ __Vtrigprevexpr___TOP__din__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__shamt__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__LR__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__AL__0;
    CData/*0:0*/ __VicoDidInit;
    CData/*0:0*/ __VicoPhaseResult;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 2> __VicoTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
