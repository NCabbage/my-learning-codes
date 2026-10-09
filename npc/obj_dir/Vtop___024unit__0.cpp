// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

extern "C" int pmem_read(int raddre);

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddre, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int raddre__Vcvt;
    raddre__Vcvt = raddre;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(raddre__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(int waddr, int wdata, int wmask);

void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    int wmask__Vcvt;
    wmask__Vcvt = wmask;
    pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

extern "C" void halt(int inst, int a0);

void Vtop___024unit____Vdpiimwrap_halt_TOP____024unit(IData/*31:0*/ inst, IData/*31:0*/ a0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit____Vdpiimwrap_halt_TOP____024unit\n"); );
    // Body
    int inst__Vcvt;
    inst__Vcvt = inst;
    int a0__Vcvt;
    a0__Vcvt = a0;
    halt(inst__Vcvt, a0__Vcvt);
}
