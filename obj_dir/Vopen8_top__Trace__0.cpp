// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vopen8_top__Syms.h"


void Vopen8_top___024root__trace_chg_0_sub_0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vopen8_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_chg_0\n"); );
    // Body
    Vopen8_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vopen8_top___024root*>(voidSelf);
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vopen8_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vopen8_top___024root__trace_chg_dtype____0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 32>& __VdtypeVar);

void Vopen8_top___024root__trace_chg_0_sub_0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_chg_0_sub_0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.open8_top__DOT__dmem__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelfRef.open8_top__DOT__pmem__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgCData(oldp+2,(vlSelfRef.open8_top__DOT__core__DOT__reg_wdata),8);
        bufp->chgCData(oldp+3,(vlSelfRef.open8_top__DOT__core__DOT__sreg_n),8);
        bufp->chgCData(oldp+4,(vlSelfRef.open8_top__DOT__core__DOT__a),8);
        bufp->chgCData(oldp+5,(vlSelfRef.open8_top__DOT__core__DOT__b),8);
        bufp->chgCData(oldp+6,(vlSelfRef.open8_top__DOT__core__DOT__res),8);
        bufp->chgBit(oldp+7,(vlSelfRef.open8_top__DOT__core__DOT__cin));
        bufp->chgSData(oldp+8,(vlSelfRef.open8_top__DOT__core__DOT__add9),9);
        bufp->chgSData(oldp+9,(vlSelfRef.open8_top__DOT__core__DOT__sub9),9);
        bufp->chgCData(oldp+10,(vlSelfRef.open8_top__DOT__core__DOT__add4),5);
        bufp->chgCData(oldp+11,(vlSelfRef.open8_top__DOT__core__DOT__sub4),5);
        bufp->chgBit(oldp+12,(vlSelfRef.open8_top__DOT__core__DOT__fC));
        bufp->chgBit(oldp+13,(vlSelfRef.open8_top__DOT__core__DOT__fZ));
        bufp->chgBit(oldp+14,(vlSelfRef.open8_top__DOT__core__DOT__fN));
        bufp->chgBit(oldp+15,(vlSelfRef.open8_top__DOT__core__DOT__fV));
        bufp->chgBit(oldp+16,(vlSelfRef.open8_top__DOT__core__DOT__fS));
        bufp->chgBit(oldp+17,(vlSelfRef.open8_top__DOT__core__DOT__fH));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+18,(vlSelfRef.open8_top__DOT__core__DOT__halt));
        bufp->chgCData(oldp+19,(vlSelfRef.open8_top__DOT__core__DOT__sreg),8);
        bufp->chgSData(oldp+20,(vlSelfRef.open8_top__DOT__core__DOT__pc),16);
        bufp->chgSData(oldp+21,((0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))),12);
        bufp->chgSData(oldp+22,((0x00000fffU & ((IData)(1U) 
                                                + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)))),12);
        bufp->chgSData(oldp+23,(vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]),16);
        bufp->chgSData(oldp+24,(vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                [(0x00000fffU & ((IData)(1U) 
                                                 + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)))]),16);
        bufp->chgSData(oldp+25,(vlSelfRef.open8_top__DOT__dmem_addr),16);
        bufp->chgBit(oldp+26,(vlSelfRef.open8_top__DOT__dmem_we));
        bufp->chgCData(oldp+27,(vlSelfRef.open8_top__DOT__dmem_wdata),8);
        bufp->chgBit(oldp+28,(vlSelfRef.open8_top__DOT__io_we));
        bufp->chgCData(oldp+29,(vlSelfRef.open8_top__DOT__io_addr),6);
        bufp->chgCData(oldp+30,(vlSelfRef.open8_top__DOT__io_wdata),8);
        Vopen8_top___024root__trace_chg_dtype____0(vlSelf, bufp, 31, vlSelfRef.open8_top__DOT__core__DOT__R);
        bufp->chgIData(oldp+63,(vlSelfRef.open8_top__DOT__core__DOT__k),32);
        bufp->chgCData(oldp+64,(vlSelfRef.__VdfgRegularize_hebeb780c_0_0),5);
        bufp->chgCData(oldp+65,(vlSelfRef.open8_top__DOT__core__DOT__r5),5);
        bufp->chgCData(oldp+66,(vlSelfRef.open8_top__DOT__core__DOT__di),5);
        bufp->chgCData(oldp+67,(vlSelfRef.open8_top__DOT__core__DOT__K8),8);
        bufp->chgCData(oldp+68,(vlSelfRef.open8_top__DOT__core__DOT__io6),6);
        bufp->chgCData(oldp+69,(vlSelfRef.__VdfgRegularize_hebeb780c_0_2),3);
        bufp->chgSData(oldp+70,(vlSelfRef.open8_top__DOT__core__DOT__br_off),16);
        bufp->chgSData(oldp+71,(((0x0000f000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                [
                                                                (0x00000fffU 
                                                                 & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                                >> 0x0000000bU)))) 
                                                 << 0x0000000cU)) 
                                 | (0x00000fffU & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))),16);
        bufp->chgCData(oldp+72,(vlSelfRef.open8_top__DOT__core__DOT__R
                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),8);
        bufp->chgCData(oldp+73,(vlSelfRef.open8_top__DOT__core__DOT__R
                                [vlSelfRef.open8_top__DOT__core__DOT__r5]),8);
        bufp->chgCData(oldp+74,(vlSelfRef.open8_top__DOT__core__DOT__R
                                [vlSelfRef.open8_top__DOT__core__DOT__di]),8);
        bufp->chgBit(oldp+75,(vlSelfRef.open8_top__DOT__core__DOT__reg_we));
        bufp->chgCData(oldp+76,(vlSelfRef.open8_top__DOT__core__DOT__reg_waddr),5);
        bufp->chgSData(oldp+77,(vlSelfRef.open8_top__DOT__core__DOT__pc_n),16);
        bufp->chgBit(oldp+78,(vlSelfRef.open8_top__DOT__core__DOT__halt_n));
        bufp->chgSData(oldp+79,((0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__dmem_addr))),12);
    }
    bufp->chgBit(oldp+80,(vlSelfRef.clk));
    bufp->chgBit(oldp+81,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+82,(vlSelfRef.port_in),8);
    bufp->chgCData(oldp+83,(vlSelfRef.port_out),8);
    bufp->chgBit(oldp+84,(vlSelfRef.port_out_we));
    bufp->chgCData(oldp+85,(vlSelfRef.dbg_addr),5);
    bufp->chgCData(oldp+86,(vlSelfRef.dbg_data),8);
    bufp->chgCData(oldp+87,(vlSelfRef.open8_top__DOT__dmem__DOT__mem
                            [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__dmem_addr))]),8);
    bufp->chgCData(oldp+88,(((IData)(vlSelfRef.port_in) 
                             & (- (IData)((0U == (IData)(vlSelfRef.open8_top__DOT__io_addr)))))),8);
}

void Vopen8_top___024root__trace_chg_dtype____0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_chg_dtype____0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->chgCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->chgCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->chgCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->chgCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->chgCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->chgCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->chgCData(oldp+15,(__VdtypeVar[15]),8);
    bufp->chgCData(oldp+16,(__VdtypeVar[16]),8);
    bufp->chgCData(oldp+17,(__VdtypeVar[17]),8);
    bufp->chgCData(oldp+18,(__VdtypeVar[18]),8);
    bufp->chgCData(oldp+19,(__VdtypeVar[19]),8);
    bufp->chgCData(oldp+20,(__VdtypeVar[20]),8);
    bufp->chgCData(oldp+21,(__VdtypeVar[21]),8);
    bufp->chgCData(oldp+22,(__VdtypeVar[22]),8);
    bufp->chgCData(oldp+23,(__VdtypeVar[23]),8);
    bufp->chgCData(oldp+24,(__VdtypeVar[24]),8);
    bufp->chgCData(oldp+25,(__VdtypeVar[25]),8);
    bufp->chgCData(oldp+26,(__VdtypeVar[26]),8);
    bufp->chgCData(oldp+27,(__VdtypeVar[27]),8);
    bufp->chgCData(oldp+28,(__VdtypeVar[28]),8);
    bufp->chgCData(oldp+29,(__VdtypeVar[29]),8);
    bufp->chgCData(oldp+30,(__VdtypeVar[30]),8);
    bufp->chgCData(oldp+31,(__VdtypeVar[31]),8);
}

void Vopen8_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_cleanup\n"); );
    // Body
    Vopen8_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vopen8_top___024root*>(voidSelf);
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
