// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopen8_top.h for the primary calling header

#include "Vopen8_top__pch.h"

VL_ATTR_COLD void Vopen8_top___024root___eval_static(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_static\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vopen8_top___024root___eval_initial__TOP(Vopen8_top___024root* vlSelf);
VL_ATTR_COLD void Vopen8_top___024root____Vm_traceActivitySetAll(Vopen8_top___024root* vlSelf);

VL_ATTR_COLD void Vopen8_top___024root___eval_initial(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_initial\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vopen8_top___024root___eval_initial__TOP(vlSelf);
    Vopen8_top___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vopen8_top___024root___eval_initial__TOP(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_initial__TOP\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.open8_top__DOT__pmem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00001000U, vlSelfRef.open8_top__DOT__pmem__DOT__i)) {
        vlSelfRef.open8_top__DOT__pmem__DOT__mem[(0x00000fffU 
                                                  & vlSelfRef.open8_top__DOT__pmem__DOT__i)] = 0U;
        vlSelfRef.open8_top__DOT__pmem__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.open8_top__DOT__pmem__DOT__i);
    }
    VL_READMEM_N(true, 16, 4096, 0, "program.hex"s,  &(vlSelfRef.open8_top__DOT__pmem__DOT__mem)
                 , 0, ~0ULL);
    vlSelfRef.open8_top__DOT__dmem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00001000U, vlSelfRef.open8_top__DOT__dmem__DOT__i)) {
        vlSelfRef.open8_top__DOT__dmem__DOT__mem[(0x00000fffU 
                                                  & vlSelfRef.open8_top__DOT__dmem__DOT__i)] = 0U;
        vlSelfRef.open8_top__DOT__dmem__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.open8_top__DOT__dmem__DOT__i);
    }
}

VL_ATTR_COLD void Vopen8_top___024root___eval_final(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_final\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopen8_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vopen8_top___024root___eval_phase__stl(Vopen8_top___024root* vlSelf);

VL_ATTR_COLD void Vopen8_top___024root___eval_settle(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_settle\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vopen8_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/open8_top.v", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vopen8_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vopen8_top___024root___eval_triggers_vec__stl(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_triggers_vec__stl\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vopen8_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopen8_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vopen8_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vopen8_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vopen8_top___024root___stl_sequent__TOP__0(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___stl_sequent__TOP__0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    // Body
    vlSelfRef.halted = vlSelfRef.open8_top__DOT__core__DOT__halt;
    vlSelfRef.dbg_pc = vlSelfRef.open8_top__DOT__core__DOT__pc;
    vlSelfRef.dbg_sreg = vlSelfRef.open8_top__DOT__core__DOT__sreg;
    vlSelfRef.open8_top__DOT__dmem_we = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 0U;
    vlSelfRef.open8_top__DOT__io_we = 0U;
    vlSelfRef.dbg_data = vlSelfRef.open8_top__DOT__core__DOT__R
        [vlSelfRef.dbg_addr];
    vlSelfRef.open8_top__DOT__core__DOT__halt_n = vlSelfRef.open8_top__DOT__core__DOT__halt;
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (7U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]);
    vlSelfRef.open8_top__DOT__dmem_addr = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__di = (0x00000010U 
                                               | (0x0000000fU 
                                                  & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 4U)));
    __VdfgRegularize_hebeb780c_0_3 = (1U & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                            >> 9U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x0000001fU 
                                                & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                   [
                                                   (0x00000fffU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                   >> 4U));
    __VdfgRegularize_hebeb780c_0_1 = (0x0000000fU & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                      [(0x00000fffU 
                                        & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]);
    vlSelfRef.open8_top__DOT__core__DOT__br_off = (
                                                   (0x0000ff80U 
                                                    & ((- (IData)((IData)(__VdfgRegularize_hebeb780c_0_3))) 
                                                       << 7U)) 
                                                   | (0x0000007fU 
                                                      & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                         >> 3U)));
    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
    vlSelfRef.open8_top__DOT__io_wdata = 0U;
    vlSelfRef.open8_top__DOT__dmem_wdata = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__r5 = (((IData)(__VdfgRegularize_hebeb780c_0_3) 
                                                << 4U) 
                                               | (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.open8_top__DOT__core__DOT__K8 = ((0x000000f0U 
                                                & ((vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                    >> 8U) 
                                                   << 4U)) 
                                               | (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.open8_top__DOT__core__DOT__io6 = ((0x00000030U 
                                                 & ((vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 9U) 
                                                    << 4U)) 
                                                | (IData)(__VdfgRegularize_hebeb780c_0_1));
    vlSelfRef.open8_top__DOT__core__DOT__pc_n = (0x0000ffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)));
    vlSelfRef.open8_top__DOT__io_addr = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__sreg_n = vlSelfRef.open8_top__DOT__core__DOT__sreg;
    vlSelfRef.open8_top__DOT__core__DOT__a = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__b = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__cin = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__add9 = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__sub9 = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__add4 = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__sub4 = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__res = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__fC = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__fZ = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__fN = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__fV = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__fS = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__fH = 0U;
    if ((0x00008000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
         [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
        if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                      [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                      >> 0x0000000eU)))) {
            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                          [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                          >> 0x0000000dU)))) {
                if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                     [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                  [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                  >> 0x0000000bU)))) {
                        if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                      [(0x00000fffU 
                                        & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                      >> 0x0000000aU)))) {
                            if ((0x00000200U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                              [(0x00000fffU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                  [
                                                  (0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                vlSelfRef.open8_top__DOT__dmem_we = 1U;
                                                vlSelfRef.open8_top__DOT__dmem_addr 
                                                    = vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)))];
                                                vlSelfRef.open8_top__DOT__dmem_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__R
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                 >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                              [(0x00000fffU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                  [
                                                  (0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                   [
                                                   (0x00000fffU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                            vlSelfRef.open8_top__DOT__dmem_addr 
                                                = vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)))];
                                        }
                                    }
                                }
                            }
                        }
                        if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                          [(0x00000fffU 
                                            & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                          >> 9U)))) {
                                if ((0x00000100U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((0x00000080U 
                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                 [
                                                                 (0x00000fffU 
                                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                     [
                                                                     (0x00000fffU 
                                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                        [
                                                                        (0x00000fffU 
                                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                                    vlSelfRef.open8_top__DOT__core__DOT__halt_n = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                     [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                    if ((0x00000800U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                         [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                        vlSelfRef.open8_top__DOT__io_we = 1U;
                        vlSelfRef.open8_top__DOT__io_wdata 
                            = vlSelfRef.open8_top__DOT__core__DOT__R
                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
                    }
                    vlSelfRef.open8_top__DOT__io_addr 
                        = vlSelfRef.open8_top__DOT__core__DOT__io6;
                }
            }
        }
        if ((0x00004000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                              [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                              >> 0x0000000cU)))) {
                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                        = vlSelfRef.open8_top__DOT__core__DOT__di;
                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                        = vlSelfRef.open8_top__DOT__core__DOT__K8;
                }
                if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                     [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                  [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                  >> 0x0000000bU)))) {
                        if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((1U & (~ ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                          >> (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2))))) {
                                vlSelfRef.open8_top__DOT__core__DOT__pc_n 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + ((IData)(vlSelfRef.open8_top__DOT__core__DOT__pc) 
                                             + (IData)(vlSelfRef.open8_top__DOT__core__DOT__br_off))));
                            }
                        } else if ((1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                          >> (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)))) {
                            vlSelfRef.open8_top__DOT__core__DOT__pc_n 
                                = (0x0000ffffU & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelfRef.open8_top__DOT__core__DOT__pc) 
                                                   + (IData)(vlSelfRef.open8_top__DOT__core__DOT__br_off))));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                 >> 0x0000000cU)))) {
                vlSelfRef.open8_top__DOT__core__DOT__pc_n 
                    = (0x0000ffffU & ((IData)(1U) + 
                                      ((IData)(vlSelfRef.open8_top__DOT__core__DOT__pc) 
                                       + ((0x0000f000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                             [
                                                             (0x00000fffU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                             >> 0x0000000bU)))) 
                                              << 0x0000000cU)) 
                                          | (0x00000fffU 
                                             & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])))));
            }
        } else {
            if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                     [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                  [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                  >> 0x0000000bU)))) {
                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                            = ((IData)(vlSelfRef.port_in) 
                               & (- (IData)((0U == (IData)(vlSelfRef.open8_top__DOT__io_addr)))));
                    }
                }
            } else if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                        [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                              [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                              >> 0x0000000bU)))) {
                    if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                         [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                        if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                      [(0x00000fffU 
                                        & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                      >> 9U)))) {
                            if ((0x00000100U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((0x00000080U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((0x00000040U 
                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                            [
                                                            (0x00000fffU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                - (IData)(1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xf1U 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (((0x80U 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                 << 3U) 
                                                                | (((2U 
                                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                        >> 6U)) 
                                                                    | (0U 
                                                                       == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                                   << 1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | ((IData)(
                                                                        (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                          >> 7U) 
                                                                         ^ 
                                                                         (0x80U 
                                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                                << 4U));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x00000080U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                             << 7U)) 
                                                         | (0x0000007fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & ((0x07fffffcU 
                                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                     >> 5U)) 
                                                                 ^ 
                                                                 (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                  << 2U))) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x0000007fU 
                                                         & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            >> 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                 << 2U)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x00000080U 
                                                      & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                          >> 7U) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & ((0x07fffffcU 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 5U)) 
                                                             ^ 
                                                             (vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              << 2U))) 
                                                         | ((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x7fU 
                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x7fU 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                            << 4U));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x000000f0U 
                                                          & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             << 4U)) 
                                                         | (0x0000000fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 4U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xdfU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000020U 
                                                        & ((0xffffffe0U 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               << 2U)) 
                                                           | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 3U) 
                                                              << 5U))));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x80U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x80U 
                                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 4U));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((2U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 3U)));
                                            }
                                        }
                                    } else if ((0x00000020U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                            [
                                                            (0x00000fffU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                - (IData)(1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xf1U 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (((0x80U 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                 << 3U) 
                                                                | (((2U 
                                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                        >> 6U)) 
                                                                    | (0U 
                                                                       == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                                   << 1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | ((IData)(
                                                                        (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                          >> 7U) 
                                                                         ^ 
                                                                         (0x80U 
                                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                                << 4U));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x00000080U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                             << 7U)) 
                                                         | (0x0000007fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & ((0x07fffffcU 
                                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                     >> 5U)) 
                                                                 ^ 
                                                                 (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                  << 2U))) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x0000007fU 
                                                         & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            >> 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                 << 2U)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x00000080U 
                                                      & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                          >> 7U) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & ((0x07fffffcU 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 5U)) 
                                                             ^ 
                                                             (vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              << 2U))) 
                                                         | ((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x7fU 
                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x7fU 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                            << 4U));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x000000f0U 
                                                          & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             << 4U)) 
                                                         | (0x0000000fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 4U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xdfU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000020U 
                                                        & ((0xffffffe0U 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               << 2U)) 
                                                           | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 3U) 
                                                              << 5U))));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x80U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x80U 
                                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 4U));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((2U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 3U)));
                                            }
                                        }
                                    } else if ((0x00000010U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                            [
                                                            (0x00000fffU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                - (IData)(1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xf1U 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (((0x80U 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                 << 3U) 
                                                                | (((2U 
                                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                        >> 6U)) 
                                                                    | (0U 
                                                                       == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                                   << 1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | ((IData)(
                                                                        (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                          >> 7U) 
                                                                         ^ 
                                                                         (0x80U 
                                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                                << 4U));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x00000080U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                             << 7U)) 
                                                         | (0x0000007fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & ((0x07fffffcU 
                                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                     >> 5U)) 
                                                                 ^ 
                                                                 (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                  << 2U))) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x0000007fU 
                                                         & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            >> 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                 << 2U)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x00000080U 
                                                      & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                          >> 7U) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & ((0x07fffffcU 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 5U)) 
                                                             ^ 
                                                             (vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              << 2U))) 
                                                         | ((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x7fU 
                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x7fU 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                            << 4U));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x000000f0U 
                                                          & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             << 4U)) 
                                                         | (0x0000000fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 4U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xdfU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000020U 
                                                        & ((0xffffffe0U 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               << 2U)) 
                                                           | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 3U) 
                                                              << 5U))));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x80U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x80U 
                                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 4U));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((2U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 3U)));
                                            }
                                        }
                                    } else if ((8U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                            - (IData)(1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x80U 
                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x80U 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            if ((1U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x00000080U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & ((0x07fffffcU 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 5U)) 
                                                             ^ 
                                                             (vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              << 2U))) 
                                                         | ((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x0000007fU 
                                                     & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        >> 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             << 2U)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x00000080U 
                                                    & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        >> 7U) 
                                                       << 7U)) 
                                                   | (0x0000007fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & ((0x07fffffcU 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               >> 5U)) 
                                                           ^ 
                                                           (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            << 2U))) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        }
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x7fU 
                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x7fU 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                        << 4U));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x000000f0U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)) 
                                                     | (0x0000000fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 4U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xdfU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000020U 
                                                      & ((0xffffffe0U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                             << 2U)) 
                                                         | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             >> 3U) 
                                                            << 5U))));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((0x80U 
                                                        == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                       << 3U) 
                                                      | (((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                         << 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 7U) 
                                                               ^ 
                                                               (0x80U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 4U));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (1U 
                                                   | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((2U 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 6U)) 
                                                       | (0U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                         >> 3U)));
                                        }
                                    }
                                } else if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                  [
                                                  (0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                  >> 2U)))) {
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                        - (IData)(1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x80U 
                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x80U 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                        << 4U));
                                            }
                                        }
                                    }
                                } else if ((4U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x00000080U 
                                                    & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                       << 7U)) 
                                                   | (0x0000007fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & ((0x07fffffcU 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               >> 5U)) 
                                                           ^ 
                                                           (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            << 2U))) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x0000007fU 
                                                   & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                      >> 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 2U)) 
                                                       | (0U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = ((0x00000080U 
                                                & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                    >> 7U) 
                                                   << 7U)) 
                                               | (0x0000007fU 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     >> 1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (1U 
                                                  & vlSelfRef.open8_top__DOT__core__DOT__R
                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((4U 
                                                    & ((0x07fffffcU 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 5U)) 
                                                       ^ 
                                                       (vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        << 2U))) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                          >> 6U)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                  << 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000010U 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     << 4U)));
                                    }
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                    if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((0x7fU 
                                                        == vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                       << 3U) 
                                                      | (((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                         << 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 7U) 
                                                               ^ 
                                                               (0x7fU 
                                                                == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                      << 4U));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x000000f0U 
                                                    & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 4U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xdfU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000020U 
                                                  & ((0xffffffe0U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                         << 2U)) 
                                                     | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 3U) 
                                                        << 5U))));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((0x80U 
                                                    == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                   << 3U) 
                                                  | (((2U 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                          >> 6U)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                     << 1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | ((IData)(
                                                          (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                            >> 7U) 
                                                           ^ 
                                                           (0x80U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                  << 4U));
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = (1U | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((2U 
                                                    & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                       >> 6U)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                  << 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000010U 
                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                     >> 3U)));
                                    }
                                }
                            } else if ((0x00000080U 
                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                        [(0x00000fffU 
                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((0x00000040U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((0x00000020U 
                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((0x00000010U 
                                             & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((8U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                        if (
                                                            (1U 
                                                             & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                [
                                                                (0x00000fffU 
                                                                 & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                                = 
                                                                (0x000000ffU 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                    - (IData)(1U)));
                                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                                = 
                                                                ((0xf1U 
                                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                                 | (((0x80U 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                     << 3U) 
                                                                    | (((2U 
                                                                         & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                            >> 6U)) 
                                                                        | (0U 
                                                                           == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                                       << 1U)));
                                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                                = 
                                                                ((0xefU 
                                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                                 | ((IData)(
                                                                            (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                              >> 7U) 
                                                                             ^ 
                                                                             (0x80U 
                                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                                    << 4U));
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                   [
                                                                   (0x00000fffU 
                                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            (0x7fU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            ((0x00000080U 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                                 << 7U)) 
                                                             | (0x0000007fU 
                                                                & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                   >> 1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xfeU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (1U 
                                                                & vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xf1U 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (((4U 
                                                                  & ((0x07fffffcU 
                                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                         >> 5U)) 
                                                                     ^ 
                                                                     (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                      << 2U))) 
                                                                 | ((2U 
                                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                        >> 6U)) 
                                                                    | (0U 
                                                                       == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                                << 1U));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (0x00000010U 
                                                                & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                   << 4U)));
                                                    } else {
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            (0x0000007fU 
                                                             & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                >> 1U));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xfeU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (1U 
                                                                & vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xf1U 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (((4U 
                                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                     << 2U)) 
                                                                 | (0U 
                                                                    == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                                << 1U));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (0x00000010U 
                                                                & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                   << 4U)));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                            [
                                                            (0x00000fffU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x00000080U 
                                                          & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              >> 7U) 
                                                             << 7U)) 
                                                         | (0x0000007fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & ((0x07fffffcU 
                                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                     >> 5U)) 
                                                                 ^ 
                                                                 (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                  << 2U))) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                }
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                if (
                                                    (2U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xf1U 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (((0x7fU 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                 << 3U) 
                                                                | (((2U 
                                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                        >> 6U)) 
                                                                    | (0U 
                                                                       == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                                   << 1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | ((IData)(
                                                                        (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                          >> 7U) 
                                                                         ^ 
                                                                         (0x7fU 
                                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                                << 4U));
                                                    } else {
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            ((0x000000f0U 
                                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                 << 4U)) 
                                                             | (0x0000000fU 
                                                                & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                   >> 4U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    }
                                                } else if (
                                                           (1U 
                                                            & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                            [
                                                            (0x00000fffU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0U 
                                                            != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xdfU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000020U 
                                                            & ((0xffffffe0U 
                                                                & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                   << 2U)) 
                                                               | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                   >> 3U) 
                                                                  << 5U))));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x80U 
                                                              == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x80U 
                                                                      == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                            << 4U));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        (1U 
                                                         | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((2U 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 6U)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               >> 3U)));
                                                }
                                            }
                                        } else if (
                                                   (8U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                            [
                                                            (0x00000fffU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                - (IData)(1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xf1U 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (((0x80U 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                 << 3U) 
                                                                | (((2U 
                                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                        >> 6U)) 
                                                                    | (0U 
                                                                       == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                                   << 1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | ((IData)(
                                                                        (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                          >> 7U) 
                                                                         ^ 
                                                                         (0x80U 
                                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                                << 4U));
                                                    }
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x00000080U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                             << 7U)) 
                                                         | (0x0000007fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & ((0x07fffffcU 
                                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                     >> 5U)) 
                                                                 ^ 
                                                                 (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                  << 2U))) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x0000007fU 
                                                         & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            >> 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                 << 2U)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x00000080U 
                                                      & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                          >> 7U) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & ((0x07fffffcU 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 5U)) 
                                                             ^ 
                                                             (vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              << 2U))) 
                                                         | ((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x7fU 
                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x7fU 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                            << 4U));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x000000f0U 
                                                          & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             << 4U)) 
                                                         | (0x0000000fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 4U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xdfU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000020U 
                                                        & ((0xffffffe0U 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               << 2U)) 
                                                           | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 3U) 
                                                              << 5U))));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x80U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x80U 
                                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 4U));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((2U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 3U)));
                                            }
                                        }
                                    } else if ((8U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                            - (IData)(1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x80U 
                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x80U 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            if ((1U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x00000080U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & ((0x07fffffcU 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 5U)) 
                                                             ^ 
                                                             (vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              << 2U))) 
                                                         | ((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x0000007fU 
                                                     & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        >> 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             << 2U)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x00000080U 
                                                    & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        >> 7U) 
                                                       << 7U)) 
                                                   | (0x0000007fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & ((0x07fffffcU 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               >> 5U)) 
                                                           ^ 
                                                           (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            << 2U))) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        }
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x7fU 
                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x7fU 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                        << 4U));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x000000f0U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)) 
                                                     | (0x0000000fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 4U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xdfU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000020U 
                                                      & ((0xffffffe0U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                             << 2U)) 
                                                         | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             >> 3U) 
                                                            << 5U))));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((0x80U 
                                                        == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                       << 3U) 
                                                      | (((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                         << 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 7U) 
                                                               ^ 
                                                               (0x80U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 4U));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (1U 
                                                   | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((2U 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 6U)) 
                                                       | (0U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                         >> 3U)));
                                        }
                                    }
                                } else if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                  [
                                                  (0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                  >> 2U)))) {
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                        - (IData)(1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x80U 
                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x80U 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                        << 4U));
                                            }
                                        }
                                    }
                                } else if ((4U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x00000080U 
                                                    & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                       << 7U)) 
                                                   | (0x0000007fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & ((0x07fffffcU 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               >> 5U)) 
                                                           ^ 
                                                           (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            << 2U))) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x0000007fU 
                                                   & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                      >> 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 2U)) 
                                                       | (0U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = ((0x00000080U 
                                                & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                    >> 7U) 
                                                   << 7U)) 
                                               | (0x0000007fU 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     >> 1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (1U 
                                                  & vlSelfRef.open8_top__DOT__core__DOT__R
                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((4U 
                                                    & ((0x07fffffcU 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 5U)) 
                                                       ^ 
                                                       (vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        << 2U))) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                          >> 6U)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                  << 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000010U 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     << 4U)));
                                    }
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                    if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((0x7fU 
                                                        == vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                       << 3U) 
                                                      | (((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                         << 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 7U) 
                                                               ^ 
                                                               (0x7fU 
                                                                == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                      << 4U));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x000000f0U 
                                                    & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 4U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xdfU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000020U 
                                                  & ((0xffffffe0U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                         << 2U)) 
                                                     | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 3U) 
                                                        << 5U))));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((0x80U 
                                                    == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                   << 3U) 
                                                  | (((2U 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                          >> 6U)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                     << 1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | ((IData)(
                                                          (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                            >> 7U) 
                                                           ^ 
                                                           (0x80U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                  << 4U));
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = (1U | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((2U 
                                                    & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                       >> 6U)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                  << 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000010U 
                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                     >> 3U)));
                                    }
                                }
                            } else if ((0x00000040U 
                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                        [(0x00000fffU 
                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((0x00000020U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((0x00000010U 
                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    if (
                                                        (1U 
                                                         & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                            [
                                                            (0x00000fffU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                                            = 
                                                            (0x000000ffU 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                - (IData)(1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xf1U 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | (((0x80U 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                                 << 3U) 
                                                                | (((2U 
                                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                        >> 6U)) 
                                                                    | (0U 
                                                                       == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                                   << 1U)));
                                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                            = 
                                                            ((0xefU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                             | ((IData)(
                                                                        (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                          >> 7U) 
                                                                         ^ 
                                                                         (0x80U 
                                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                                << 4U));
                                                    }
                                                } else if (
                                                           (1U 
                                                            & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                               [
                                                               (0x00000fffU 
                                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        (0x00000080U 
                                                         | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                                }
                                            }
                                        } else if (
                                                   (4U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x00000080U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                             << 7U)) 
                                                         | (0x0000007fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & ((0x07fffffcU 
                                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                     >> 5U)) 
                                                                 ^ 
                                                                 (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                  << 2U))) 
                                                             | ((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x0000007fU 
                                                         & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            >> 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xfeU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (1U 
                                                            & vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((4U 
                                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                                 << 2U)) 
                                                             | (0U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                            << 1U));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (0x00000010U 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               << 4U)));
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x00000080U 
                                                      & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                          >> 7U) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & ((0x07fffffcU 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 5U)) 
                                                             ^ 
                                                             (vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              << 2U))) 
                                                         | ((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x7fU 
                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x7fU 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                            << 4U));
                                                } else {
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        ((0x000000f0U 
                                                          & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             << 4U)) 
                                                         | (0x0000000fU 
                                                            & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 4U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0U 
                                                        != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xdfU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000020U 
                                                        & ((0xffffffe0U 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               << 2U)) 
                                                           | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                               [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                               >> 3U) 
                                                              << 5U))));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x80U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x80U 
                                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 4U));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    (1U 
                                                     | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((2U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                             >> 6U)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 3U)));
                                            }
                                        }
                                    } else if ((8U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                if (
                                                    (1U 
                                                     & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                                        = 
                                                        (0x000000ffU 
                                                         & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                            - (IData)(1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xf1U 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | (((0x80U 
                                                              == vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                             << 3U) 
                                                            | (((2U 
                                                                 & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                    >> 6U)) 
                                                                | (0U 
                                                                   == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                               << 1U)));
                                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                        = 
                                                        ((0xefU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                         | ((IData)(
                                                                    (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                      >> 7U) 
                                                                     ^ 
                                                                     (0x80U 
                                                                      == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                            << 4U));
                                                }
                                            }
                                        }
                                    } else if ((4U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            if ((1U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x00000080U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                         << 7U)) 
                                                     | (0x0000007fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & ((0x07fffffcU 
                                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                 >> 5U)) 
                                                             ^ 
                                                             (vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                              << 2U))) 
                                                         | ((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x0000007fU 
                                                     & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        >> 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xfeU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (1U 
                                                        & vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((4U 
                                                          & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             << 2U)) 
                                                         | (0U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                        << 1U));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (0x00000010U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 4U)));
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x00000080U 
                                                    & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        >> 7U) 
                                                       << 7U)) 
                                                   | (0x0000007fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & ((0x07fffffcU 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               >> 5U)) 
                                                           ^ 
                                                           (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            << 2U))) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        }
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x7fU 
                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x7fU 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                        << 4U));
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    ((0x000000f0U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)) 
                                                     | (0x0000000fU 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           >> 4U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            }
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0U 
                                                      != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xdfU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000020U 
                                                      & ((0xffffffe0U 
                                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                             << 2U)) 
                                                         | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                             >> 3U) 
                                                            << 5U))));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((0x80U 
                                                        == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                       << 3U) 
                                                      | (((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                         << 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 7U) 
                                                               ^ 
                                                               (0x80U 
                                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 4U));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (1U 
                                                   | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((2U 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 6U)) 
                                                       | (0U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                         >> 3U)));
                                        }
                                    }
                                } else if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                  [
                                                  (0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                  >> 2U)))) {
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            if ((1U 
                                                 & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                                    = 
                                                    (0x000000ffU 
                                                     & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                        - (IData)(1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xf1U 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | (((0x80U 
                                                          == vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                         << 3U) 
                                                        | (((2U 
                                                             & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 6U)) 
                                                            | (0U 
                                                               == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                           << 1U)));
                                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                    = 
                                                    ((0xefU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                     | ((IData)(
                                                                (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                  >> 7U) 
                                                                 ^ 
                                                                 (0x80U 
                                                                  == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                        << 4U));
                                            }
                                        }
                                    }
                                } else if ((4U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x00000080U 
                                                    & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                       << 7U)) 
                                                   | (0x0000007fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & ((0x07fffffcU 
                                                            & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                               >> 5U)) 
                                                           ^ 
                                                           (vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                            << 2U))) 
                                                       | ((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x0000007fU 
                                                   & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                      >> 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xfeU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (1U 
                                                      & vlSelfRef.open8_top__DOT__core__DOT__R
                                                      [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((4U 
                                                        & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                           << 2U)) 
                                                       | (0U 
                                                          == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                      << 1U));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (0x00000010U 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         << 4U)));
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = ((0x00000080U 
                                                & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                    >> 7U) 
                                                   << 7U)) 
                                               | (0x0000007fU 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     >> 1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (1U 
                                                  & vlSelfRef.open8_top__DOT__core__DOT__R
                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((4U 
                                                    & ((0x07fffffcU 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 5U)) 
                                                       ^ 
                                                       (vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        << 2U))) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                          >> 6U)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                  << 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000010U 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     << 4U)));
                                    }
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                    if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((0x7fU 
                                                        == vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                       << 3U) 
                                                      | (((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                         << 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 7U) 
                                                               ^ 
                                                               (0x7fU 
                                                                == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                      << 4U));
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (
                                                   (0x000000f0U 
                                                    & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                       << 4U)) 
                                                   | (0x0000000fU 
                                                      & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 4U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        }
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xdfU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000020U 
                                                  & ((0xffffffe0U 
                                                      & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                         << 2U)) 
                                                     | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                         [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                         >> 3U) 
                                                        << 5U))));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((0x80U 
                                                    == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                   << 3U) 
                                                  | (((2U 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                          >> 6U)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                     << 1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | ((IData)(
                                                          (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                            >> 7U) 
                                                           ^ 
                                                           (0x80U 
                                                            == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                  << 4U));
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = (1U | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((2U 
                                                    & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                       >> 6U)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                  << 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000010U 
                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                     >> 3U)));
                                    }
                                }
                            } else if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                        [(0x00000fffU 
                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                              [(0x00000fffU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                              >> 2U)))) {
                                    if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                   [
                                                   (0x00000fffU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                                = (0x000000ffU 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                      - (IData)(1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xf1U 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | (((0x80U 
                                                        == vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                       << 3U) 
                                                      | (((2U 
                                                           & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                              >> 6U)) 
                                                          | (0U 
                                                             == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                         << 1U)));
                                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                                = (
                                                   (0xefU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                                   | ((IData)(
                                                              (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                                >> 7U) 
                                                               ^ 
                                                               (0x80U 
                                                                == vlSelfRef.open8_top__DOT__core__DOT__R
                                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                      << 4U));
                                        }
                                    }
                                }
                            } else if ((4U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                        [(0x00000fffU 
                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                    if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = ((0x00000080U 
                                                & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                   << 7U)) 
                                               | (0x0000007fU 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     >> 1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (1U 
                                                  & vlSelfRef.open8_top__DOT__core__DOT__R
                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((4U 
                                                    & ((0x07fffffcU 
                                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                           >> 5U)) 
                                                       ^ 
                                                       (vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                        << 2U))) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                          >> 6U)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                                  << 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000010U 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     << 4U)));
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x0000007fU 
                                               & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                  >> 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xfeU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (1U 
                                                  & vlSelfRef.open8_top__DOT__core__DOT__R
                                                  [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((4U 
                                                    & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                       << 2U)) 
                                                   | (0U 
                                                      == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                  << 1U));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (0x00000010U 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     << 4U)));
                                    }
                                } else if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                        = ((0x00000080U 
                                            & ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                >> 7U) 
                                               << 7U)) 
                                           | (0x0000007fU 
                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                 >> 1U)));
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xfeU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (1U & vlSelfRef.open8_top__DOT__core__DOT__R
                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (((4U 
                                                & ((0x07fffffcU 
                                                    & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                       >> 5U)) 
                                                   ^ 
                                                   (vlSelfRef.open8_top__DOT__core__DOT__R
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                    << 2U))) 
                                               | ((2U 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                      >> 6U)) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                              << 1U));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                 << 4U)));
                                }
                            } else {
                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | (((0x7fU 
                                                    == vlSelfRef.open8_top__DOT__core__DOT__R
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                   << 3U) 
                                                  | (((2U 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                          >> 6U)) 
                                                      | (0U 
                                                         == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                     << 1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xefU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                               | ((IData)(
                                                          (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                            >> 7U) 
                                                           ^ 
                                                           (0x7fU 
                                                            == vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]))) 
                                                  << 4U));
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = ((0x000000f0U 
                                                & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                   << 4U)) 
                                               | (0x0000000fU 
                                                  & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     >> 4U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                    }
                                } else if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                        = (0x000000ffU 
                                           & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xfeU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (0U != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xdfU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (0x00000020U 
                                              & ((0xffffffe0U 
                                                  & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                     << 2U)) 
                                                 | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                                     [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                     >> 3U) 
                                                    << 5U))));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (((0x80U 
                                                == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                               << 3U) 
                                              | (((2U 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                      >> 6U)) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                 << 1U)));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | ((IData)(
                                                      (((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                        >> 7U) 
                                                       ^ 
                                                       (0x80U 
                                                        == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                              << 4U));
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                        = (0x000000ffU 
                                           & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                        [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = (1U | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (((2U 
                                                & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                              << 1U));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (0x00000010U 
                                              & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                 >> 3U)));
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                         >> 9U)))) {
                        if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                      [(0x00000fffU 
                                        & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                      >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                          [(0x00000fffU 
                                            & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                              [(0x00000fffU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                               [(0x00000fffU 
                                                 & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__dmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__dmem_addr))];
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                          [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                          >> 0x0000000dU)))) {
                if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                     [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                  [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                  >> 0x0000000bU)))) {
                        if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                          [(0x00000fffU 
                                            & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                          >> 9U)))) {
                                if ((0x00000100U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((0x00000080U 
                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                         [(0x00000fffU 
                                           & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                    >> 6U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                     [
                                                     (0x00000fffU 
                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                     >> 5U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                         >> 4U)))) {
                                                    if (
                                                        (8U 
                                                         & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                         [
                                                         (0x00000fffU 
                                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                 [
                                                                 (0x00000fffU 
                                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                     [
                                                                     (0x00000fffU 
                                                                      & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                                     >> 1U)))) {
                                                                if (
                                                                    (1U 
                                                                     & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                                        [
                                                                        (0x00000fffU 
                                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                                                    vlSelfRef.open8_top__DOT__core__DOT__pc_n 
                                                                        = vlSelfRef.open8_top__DOT__core__DOT__pc;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x00000200U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                          [(0x00000fffU 
                                            & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                              [(0x00000fffU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                  [
                                                  (0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                  >> 1U)))) {
                                        if ((1U & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                   [
                                                   (0x00000fffU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                            vlSelfRef.open8_top__DOT__core__DOT__pc_n 
                                                = (0x0000ffffU 
                                                   & ((IData)(2U) 
                                                      + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)));
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                             >> 3U)))) {
                            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                          [(0x00000fffU 
                                            & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                          >> 2U)))) {
                                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                              [(0x00000fffU 
                                                & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                              >> 1U)))) {
                                    if ((1U & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                               [(0x00000fffU 
                                                 & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                        vlSelfRef.open8_top__DOT__core__DOT__pc_n 
                                            = (0x0000ffffU 
                                               & ((IData)(2U) 
                                                  + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x00004000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
        if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                = vlSelfRef.open8_top__DOT__core__DOT__di;
            if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                vlSelfRef.open8_top__DOT__core__DOT__res 
                    = (vlSelfRef.open8_top__DOT__core__DOT__R
                       [vlSelfRef.open8_top__DOT__core__DOT__di] 
                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__K8));
                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                    = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                  >> 6U)) | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                          << 1U));
                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                       | (0x00000010U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                         >> 3U)));
            } else {
                vlSelfRef.open8_top__DOT__core__DOT__res 
                    = (vlSelfRef.open8_top__DOT__core__DOT__R
                       [vlSelfRef.open8_top__DOT__core__DOT__di] 
                       | (IData)(vlSelfRef.open8_top__DOT__core__DOT__K8));
                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                    = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                  >> 6U)) | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                          << 1U));
                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                       | (0x00000010U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                         >> 3U)));
            }
        } else if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            vlSelfRef.open8_top__DOT__core__DOT__reg_we 
                = (5U == (7U & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                >> 0x0cU)));
            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                = vlSelfRef.open8_top__DOT__core__DOT__di;
            vlSelfRef.open8_top__DOT__core__DOT__a 
                = vlSelfRef.open8_top__DOT__core__DOT__R
                [vlSelfRef.open8_top__DOT__core__DOT__di];
            vlSelfRef.open8_top__DOT__core__DOT__b 
                = vlSelfRef.open8_top__DOT__core__DOT__K8;
            vlSelfRef.open8_top__DOT__core__DOT__sub9 
                = (0x000001ffU & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                                  - (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)));
            vlSelfRef.open8_top__DOT__core__DOT__sub4 
                = (0x0000001fU & ((0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__a)) 
                                  - (0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__b))));
            vlSelfRef.open8_top__DOT__core__DOT__res 
                = (0x000000ffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sub9));
            vlSelfRef.open8_top__DOT__core__DOT__fC 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sub9) 
                         >> 8U));
            vlSelfRef.open8_top__DOT__core__DOT__fH 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sub4) 
                         >> 4U));
            vlSelfRef.open8_top__DOT__core__DOT__fN 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                         >> 7U));
            vlSelfRef.open8_top__DOT__core__DOT__fZ 
                = (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res));
            vlSelfRef.open8_top__DOT__core__DOT__fV 
                = (1U & ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                           ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)) 
                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                             ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                         >> 7U));
            vlSelfRef.open8_top__DOT__core__DOT__fS 
                = ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                   ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__fV));
            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                = vlSelfRef.open8_top__DOT__core__DOT__res;
            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                = ((0xc0U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                   | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fH) 
                        << 5U) | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fS) 
                                  << 4U)) | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fV) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.open8_top__DOT__core__DOT__fZ) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.open8_top__DOT__core__DOT__fC)))));
        }
    } else if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
        vlSelfRef.open8_top__DOT__core__DOT__reg_we 
            = ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                         [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                         >> 0x0000000cU))) || (5U == 
                                               (7U 
                                                & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                   [
                                                   (0x00000fffU 
                                                    & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                   >> 0x0cU))));
        if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                = vlSelfRef.open8_top__DOT__core__DOT__di;
            vlSelfRef.open8_top__DOT__core__DOT__a 
                = vlSelfRef.open8_top__DOT__core__DOT__R
                [vlSelfRef.open8_top__DOT__core__DOT__di];
            vlSelfRef.open8_top__DOT__core__DOT__b 
                = vlSelfRef.open8_top__DOT__core__DOT__K8;
            vlSelfRef.open8_top__DOT__core__DOT__sub9 
                = (0x000001ffU & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                                  - (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)));
            vlSelfRef.open8_top__DOT__core__DOT__sub4 
                = (0x0000001fU & ((0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__a)) 
                                  - (0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__b))));
            vlSelfRef.open8_top__DOT__core__DOT__res 
                = (0x000000ffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sub9));
            vlSelfRef.open8_top__DOT__core__DOT__fC 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sub9) 
                         >> 8U));
            vlSelfRef.open8_top__DOT__core__DOT__fH 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sub4) 
                         >> 4U));
            vlSelfRef.open8_top__DOT__core__DOT__fN 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                         >> 7U));
            vlSelfRef.open8_top__DOT__core__DOT__fZ 
                = (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res));
            vlSelfRef.open8_top__DOT__core__DOT__fV 
                = (1U & ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                           ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)) 
                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                             ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                         >> 7U));
            vlSelfRef.open8_top__DOT__core__DOT__fS 
                = ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                   ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__fV));
            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                = vlSelfRef.open8_top__DOT__core__DOT__res;
            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                = ((0xc0U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                   | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fH) 
                        << 5U) | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fS) 
                                  << 4U)) | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fV) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.open8_top__DOT__core__DOT__fZ) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.open8_top__DOT__core__DOT__fC)))));
        } else {
            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
            if ((0x00000800U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                     [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                        = vlSelfRef.open8_top__DOT__core__DOT__R
                        [vlSelfRef.open8_top__DOT__core__DOT__r5];
                } else {
                    vlSelfRef.open8_top__DOT__core__DOT__res 
                        = (vlSelfRef.open8_top__DOT__core__DOT__R
                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                           | vlSelfRef.open8_top__DOT__core__DOT__R
                           [vlSelfRef.open8_top__DOT__core__DOT__r5]);
                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                           | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                      >> 6U)) | (0U 
                                                 == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                              << 1U));
                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                           | (0x00000010U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                             >> 3U)));
                }
            } else if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                        [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                vlSelfRef.open8_top__DOT__core__DOT__res 
                    = (vlSelfRef.open8_top__DOT__core__DOT__R
                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                       ^ vlSelfRef.open8_top__DOT__core__DOT__R
                       [vlSelfRef.open8_top__DOT__core__DOT__r5]);
                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                    = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                  >> 6U)) | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                          << 1U));
                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                       | (0x00000010U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                         >> 3U)));
            } else {
                vlSelfRef.open8_top__DOT__core__DOT__res 
                    = (vlSelfRef.open8_top__DOT__core__DOT__R
                       [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                       & vlSelfRef.open8_top__DOT__core__DOT__R
                       [vlSelfRef.open8_top__DOT__core__DOT__r5]);
                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                    = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                  >> 6U)) | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                          << 1U));
                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                       | (0x00000010U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                         >> 3U)));
            }
        }
    } else if ((0x00000800U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
        vlSelfRef.open8_top__DOT__core__DOT__reg_we 
            = ((1U & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                      [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                      >> 0x0000000aU)) || (1U & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                 [(0x00000fffU 
                                                   & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                 >> 0x0bU)));
        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
        if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            vlSelfRef.open8_top__DOT__core__DOT__a 
                = vlSelfRef.open8_top__DOT__core__DOT__R
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
            vlSelfRef.open8_top__DOT__core__DOT__b 
                = vlSelfRef.open8_top__DOT__core__DOT__R
                [vlSelfRef.open8_top__DOT__core__DOT__r5];
            vlSelfRef.open8_top__DOT__core__DOT__cin 
                = (1U & ((vlSelfRef.open8_top__DOT__pmem__DOT__mem
                          [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                          >> 0x0cU) & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg)));
            vlSelfRef.open8_top__DOT__core__DOT__add9 
                = (0x000001ffU & (((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                                   + (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)) 
                                  + (IData)(vlSelfRef.open8_top__DOT__core__DOT__cin)));
            vlSelfRef.open8_top__DOT__core__DOT__add4 
                = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__a)) 
                                   + (0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__b))) 
                                  + (IData)(vlSelfRef.open8_top__DOT__core__DOT__cin)));
            vlSelfRef.open8_top__DOT__core__DOT__res 
                = (0x000000ffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__add9));
            vlSelfRef.open8_top__DOT__core__DOT__fC 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__add9) 
                         >> 8U));
            vlSelfRef.open8_top__DOT__core__DOT__fH 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__add4) 
                         >> 4U));
            vlSelfRef.open8_top__DOT__core__DOT__fN 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                         >> 7U));
            vlSelfRef.open8_top__DOT__core__DOT__fZ 
                = (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res));
            vlSelfRef.open8_top__DOT__core__DOT__fV 
                = (1U & ((~ (((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                              ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)) 
                             >> 7U)) & (((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                                         ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                        >> 7U)));
            vlSelfRef.open8_top__DOT__core__DOT__fS 
                = ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                   ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__fV));
            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                = vlSelfRef.open8_top__DOT__core__DOT__res;
            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                = ((0xc0U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                   | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fH) 
                        << 5U) | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fS) 
                                  << 4U)) | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fV) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.open8_top__DOT__core__DOT__fZ) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.open8_top__DOT__core__DOT__fC)))));
        } else {
            vlSelfRef.open8_top__DOT__core__DOT__a 
                = vlSelfRef.open8_top__DOT__core__DOT__R
                [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
            vlSelfRef.open8_top__DOT__core__DOT__b 
                = vlSelfRef.open8_top__DOT__core__DOT__R
                [vlSelfRef.open8_top__DOT__core__DOT__r5];
            vlSelfRef.open8_top__DOT__core__DOT__cin 
                = (1U & ((~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                             >> 0x0cU)) & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg)));
            vlSelfRef.open8_top__DOT__core__DOT__sub9 
                = (0x000001ffU & (((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                                   - (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)) 
                                  - (IData)(vlSelfRef.open8_top__DOT__core__DOT__cin)));
            vlSelfRef.open8_top__DOT__core__DOT__sub4 
                = (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__a)) 
                                   - (0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__b))) 
                                  - (IData)(vlSelfRef.open8_top__DOT__core__DOT__cin)));
            vlSelfRef.open8_top__DOT__core__DOT__res 
                = (0x000000ffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sub9));
            vlSelfRef.open8_top__DOT__core__DOT__fC 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sub9) 
                         >> 8U));
            vlSelfRef.open8_top__DOT__core__DOT__fH 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sub4) 
                         >> 4U));
            vlSelfRef.open8_top__DOT__core__DOT__fN 
                = (1U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                         >> 7U));
            vlSelfRef.open8_top__DOT__core__DOT__fV 
                = (1U & ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                           ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)) 
                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                             ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                         >> 7U));
            vlSelfRef.open8_top__DOT__core__DOT__fS 
                = ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                   ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__fV));
            vlSelfRef.open8_top__DOT__core__DOT__fZ 
                = ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])
                    ? (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))
                    : ((0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                          >> 1U)));
            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                = vlSelfRef.open8_top__DOT__core__DOT__res;
            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                = ((0xc0U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                   | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fH) 
                        << 5U) | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fS) 
                                  << 4U)) | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fV) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.open8_top__DOT__core__DOT__fZ) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.open8_top__DOT__core__DOT__fC)))));
        }
    } else if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
        vlSelfRef.open8_top__DOT__core__DOT__reg_we 
            = (1U & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                     [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                     >> 0x0bU));
        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
        vlSelfRef.open8_top__DOT__core__DOT__a = vlSelfRef.open8_top__DOT__core__DOT__R
            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0];
        vlSelfRef.open8_top__DOT__core__DOT__b = vlSelfRef.open8_top__DOT__core__DOT__R
            [vlSelfRef.open8_top__DOT__core__DOT__r5];
        vlSelfRef.open8_top__DOT__core__DOT__cin = 
            (1U & ((~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                       [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                       >> 0x0cU)) & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg)));
        vlSelfRef.open8_top__DOT__core__DOT__sub9 = 
            (0x000001ffU & (((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                             - (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)) 
                            - (IData)(vlSelfRef.open8_top__DOT__core__DOT__cin)));
        vlSelfRef.open8_top__DOT__core__DOT__sub4 = 
            (0x0000001fU & (((0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__a)) 
                             - (0x0000000fU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__b))) 
                            - (IData)(vlSelfRef.open8_top__DOT__core__DOT__cin)));
        vlSelfRef.open8_top__DOT__core__DOT__res = 
            (0x000000ffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sub9));
        vlSelfRef.open8_top__DOT__core__DOT__fC = (1U 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sub9) 
                                                      >> 8U));
        vlSelfRef.open8_top__DOT__core__DOT__fH = (1U 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sub4) 
                                                      >> 4U));
        vlSelfRef.open8_top__DOT__core__DOT__fN = (1U 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                      >> 7U));
        vlSelfRef.open8_top__DOT__core__DOT__fV = (1U 
                                                   & ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                                                        ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__b)) 
                                                       & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__a) 
                                                          ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                      >> 7U));
        vlSelfRef.open8_top__DOT__core__DOT__fS = ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                                                   ^ (IData)(vlSelfRef.open8_top__DOT__core__DOT__fV));
        vlSelfRef.open8_top__DOT__core__DOT__fZ = (
                                                   (0x00001000U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])
                                                    ? 
                                                   (0U 
                                                    == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                                    & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg) 
                                                       >> 1U)));
        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
            = vlSelfRef.open8_top__DOT__core__DOT__res;
        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
            = ((0xc0U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
               | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fH) 
                    << 5U) | ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fS) 
                              << 4U)) | ((((IData)(vlSelfRef.open8_top__DOT__core__DOT__fV) 
                                           << 3U) | 
                                          ((IData)(vlSelfRef.open8_top__DOT__core__DOT__fN) 
                                           << 2U)) 
                                         | (((IData)(vlSelfRef.open8_top__DOT__core__DOT__fZ) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.open8_top__DOT__core__DOT__fC)))));
    }
}

VL_ATTR_COLD void Vopen8_top___024root___eval_stl(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_stl\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vopen8_top___024root___stl_sequent__TOP__0(vlSelf);
        Vopen8_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vopen8_top___024root___eval_phase__stl(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_phase__stl\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vopen8_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vopen8_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vopen8_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vopen8_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vopen8_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopen8_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vopen8_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vopen8_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopen8_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vopen8_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vopen8_top___024root____Vm_traceActivitySetAll(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root____Vm_traceActivitySetAll\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vopen8_top___024root___ctor_var_reset(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___ctor_var_reset\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->port_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12887145065322796384ull);
    vlSelf->port_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11451668073807345609ull);
    vlSelf->port_out_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14503849903296445976ull);
    vlSelf->halted = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18300898478658917723ull);
    vlSelf->dbg_addr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10106814393097140953ull);
    vlSelf->dbg_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10213329243391659403ull);
    vlSelf->dbg_sreg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18118730805753172527ull);
    vlSelf->dbg_pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4205037871569850614ull);
    vlSelf->open8_top__DOT__dmem_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18264177556704015764ull);
    vlSelf->open8_top__DOT__dmem_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13080460629509696124ull);
    vlSelf->open8_top__DOT__dmem_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6426453360638815101ull);
    vlSelf->open8_top__DOT__io_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7756755176479921282ull);
    vlSelf->open8_top__DOT__io_addr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3669609716621755647ull);
    vlSelf->open8_top__DOT__io_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 922737862554239495ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->open8_top__DOT__core__DOT__R[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10534137408086444091ull);
    }
    vlSelf->open8_top__DOT__core__DOT__sreg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 846481485653093678ull);
    vlSelf->open8_top__DOT__core__DOT__pc = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1767307134381621050ull);
    vlSelf->open8_top__DOT__core__DOT__halt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13370437478183242253ull);
    vlSelf->open8_top__DOT__core__DOT__k = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2255569211937305818ull);
    vlSelf->open8_top__DOT__core__DOT__r5 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1335825883265209561ull);
    vlSelf->open8_top__DOT__core__DOT__di = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7938076793446659064ull);
    vlSelf->open8_top__DOT__core__DOT__K8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14205957384904196676ull);
    vlSelf->open8_top__DOT__core__DOT__io6 = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 489520071303332293ull);
    vlSelf->open8_top__DOT__core__DOT__br_off = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16326300710991971064ull);
    vlSelf->open8_top__DOT__core__DOT__reg_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13501111014576906809ull);
    vlSelf->open8_top__DOT__core__DOT__reg_waddr = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16727156831120612038ull);
    vlSelf->open8_top__DOT__core__DOT__reg_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17861886338178371932ull);
    vlSelf->open8_top__DOT__core__DOT__sreg_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6104042287844483315ull);
    vlSelf->open8_top__DOT__core__DOT__pc_n = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14933256073154663426ull);
    vlSelf->open8_top__DOT__core__DOT__halt_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7440010831181661249ull);
    vlSelf->open8_top__DOT__core__DOT__a = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7804427069631086703ull);
    vlSelf->open8_top__DOT__core__DOT__b = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11109531504812624126ull);
    vlSelf->open8_top__DOT__core__DOT__res = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8445638049649107299ull);
    vlSelf->open8_top__DOT__core__DOT__cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14000247284677895550ull);
    vlSelf->open8_top__DOT__core__DOT__add9 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 7089068271904000975ull);
    vlSelf->open8_top__DOT__core__DOT__sub9 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3037169383143828698ull);
    vlSelf->open8_top__DOT__core__DOT__add4 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16230228355060187405ull);
    vlSelf->open8_top__DOT__core__DOT__sub4 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15500033099385632318ull);
    vlSelf->open8_top__DOT__core__DOT__fC = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1465385715108967675ull);
    vlSelf->open8_top__DOT__core__DOT__fZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7965013458812593864ull);
    vlSelf->open8_top__DOT__core__DOT__fN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10552813325171635792ull);
    vlSelf->open8_top__DOT__core__DOT__fV = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 543117949199425357ull);
    vlSelf->open8_top__DOT__core__DOT__fS = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2065238407031473438ull);
    vlSelf->open8_top__DOT__core__DOT__fH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8936679183534248842ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->open8_top__DOT__pmem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 227819375305791332ull);
    }
    vlSelf->open8_top__DOT__pmem__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4734792775124725260ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->open8_top__DOT__dmem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2004118751990661922ull);
    }
    vlSelf->open8_top__DOT__dmem__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17709468803677116564ull);
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
