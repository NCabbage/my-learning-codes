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
    VL_IN8(A,3,0);
    VL_IN8(B,3,0);
    VL_IN8(func,2,0);
    VL_IN8(en,0,0);
    VL_OUT8(result,3,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(A_big,0,0);
    VL_OUT8(equ,0,0);
    VL_OUT8(carry,0,0);
    CData/*3:0*/ top__DOT__ysyx_100022863_ALU_inst__DOT__t_no_cin;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*3:0*/ __Vtrigprevexpr___TOP__A__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__B__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__func__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__en__0;
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
