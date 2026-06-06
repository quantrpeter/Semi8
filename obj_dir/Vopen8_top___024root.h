// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vopen8_top.h for the primary calling header

#ifndef VERILATED_VOPEN8_TOP___024ROOT_H_
#define VERILATED_VOPEN8_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vopen8_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vopen8_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(port_in,7,0);
        VL_OUT8(port_out,7,0);
        VL_OUT8(port_out_we,0,0);
        VL_OUT8(halted,0,0);
        VL_IN8(dbg_addr,4,0);
        VL_OUT8(dbg_data,7,0);
        VL_OUT8(dbg_sreg,7,0);
        CData/*0:0*/ open8_top__DOT__dmem_we;
        CData/*7:0*/ open8_top__DOT__dmem_wdata;
        CData/*0:0*/ open8_top__DOT__io_we;
        CData/*5:0*/ open8_top__DOT__io_addr;
        CData/*7:0*/ open8_top__DOT__io_wdata;
        CData/*7:0*/ open8_top__DOT__core__DOT__sreg;
        CData/*0:0*/ open8_top__DOT__core__DOT__halt;
        CData/*4:0*/ open8_top__DOT__core__DOT__r5;
        CData/*4:0*/ open8_top__DOT__core__DOT__di;
        CData/*7:0*/ open8_top__DOT__core__DOT__K8;
        CData/*5:0*/ open8_top__DOT__core__DOT__io6;
        CData/*0:0*/ open8_top__DOT__core__DOT__reg_we;
        CData/*4:0*/ open8_top__DOT__core__DOT__reg_waddr;
        CData/*7:0*/ open8_top__DOT__core__DOT__reg_wdata;
        CData/*7:0*/ open8_top__DOT__core__DOT__sreg_n;
        CData/*0:0*/ open8_top__DOT__core__DOT__halt_n;
        CData/*7:0*/ open8_top__DOT__core__DOT__a;
        CData/*7:0*/ open8_top__DOT__core__DOT__b;
        CData/*7:0*/ open8_top__DOT__core__DOT__res;
        CData/*0:0*/ open8_top__DOT__core__DOT__cin;
        CData/*4:0*/ open8_top__DOT__core__DOT__add4;
        CData/*4:0*/ open8_top__DOT__core__DOT__sub4;
        CData/*0:0*/ open8_top__DOT__core__DOT__fC;
        CData/*0:0*/ open8_top__DOT__core__DOT__fZ;
        CData/*0:0*/ open8_top__DOT__core__DOT__fN;
        CData/*0:0*/ open8_top__DOT__core__DOT__fV;
        CData/*0:0*/ open8_top__DOT__core__DOT__fS;
        CData/*0:0*/ open8_top__DOT__core__DOT__fH;
        CData/*4:0*/ __VdfgRegularize_hebeb780c_0_0;
        CData/*2:0*/ __VdfgRegularize_hebeb780c_0_2;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        VL_OUT16(dbg_pc,15,0);
        SData/*15:0*/ open8_top__DOT__dmem_addr;
        SData/*15:0*/ open8_top__DOT__core__DOT__pc;
        SData/*15:0*/ open8_top__DOT__core__DOT__br_off;
        SData/*15:0*/ open8_top__DOT__core__DOT__pc_n;
        SData/*8:0*/ open8_top__DOT__core__DOT__add9;
        SData/*8:0*/ open8_top__DOT__core__DOT__sub9;
        IData/*31:0*/ open8_top__DOT__core__DOT__k;
        IData/*31:0*/ open8_top__DOT__pmem__DOT__i;
        IData/*31:0*/ open8_top__DOT__dmem__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 32> open8_top__DOT__core__DOT__R;
        VlUnpacked<SData/*15:0*/, 4096> open8_top__DOT__pmem__DOT__mem;
        VlUnpacked<CData/*7:0*/, 4096> open8_top__DOT__dmem__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vopen8_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vopen8_top___024root(Vopen8_top__Syms* symsp, const char* namep);
    ~Vopen8_top___024root();
    VL_UNCOPYABLE(Vopen8_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
