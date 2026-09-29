// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" void halt(const svLogicVecVal* inst);

void Vtop___024unit____Vdpiimwrap_halt_TOP____024unit(IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_halt_TOP____024unit\n"); );
    // Body
    svLogicVecVal inst__Vcvt[1];
    VL_SET_SVLV_I(32, inst__Vcvt, inst);
    halt(inst__Vcvt);
}
