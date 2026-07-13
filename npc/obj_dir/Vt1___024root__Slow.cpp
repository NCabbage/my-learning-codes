// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vt1.h for the primary calling header

#include "Vt1__pch.h"

void Vt1___024root___ctor_var_reset(Vt1___024root* vlSelf);

Vt1___024root::Vt1___024root(Vt1__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vt1___024root___ctor_var_reset(this);
}

void Vt1___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vt1___024root::~Vt1___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
