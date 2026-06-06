// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopen8_top.h for the primary calling header

#include "Vopen8_top__pch.h"

void Vopen8_top___024root___ctor_var_reset(Vopen8_top___024root* vlSelf);

Vopen8_top___024root::Vopen8_top___024root(Vopen8_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vopen8_top___024root___ctor_var_reset(this);
}

void Vopen8_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vopen8_top___024root::~Vopen8_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
