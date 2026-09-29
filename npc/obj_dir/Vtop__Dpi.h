// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/cappage/ysyx-workbench/npc/vsrc/ysyx_100022863_minirv/ysyx_100022863_TOP.v:1:30
    extern void halt(const svLogicVecVal* inst);

#ifdef __cplusplus
}
#endif

#endif  // guard
