// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vopen8_top.h for the primary calling header

#include "Vopen8_top__pch.h"

void Vopen8_top___024root___eval_triggers_vec__ico(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_triggers_vec__ico\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vopen8_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___trigger_anySet__ico\n"); );
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

void Vopen8_top___024root___ico_sequent__TOP__0(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___ico_sequent__TOP__0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dbg_data = vlSelfRef.open8_top__DOT__core__DOT__R
        [vlSelfRef.dbg_addr];
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
        if ((0x00004000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                              [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                              >> 0x0000000cU)))) {
                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                        = vlSelfRef.open8_top__DOT__core__DOT__K8;
                }
            }
        } else if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                              [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                              >> 0x0000000bU)))) {
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
                                  [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                  >> 9U)))) {
                        if ((0x00000100U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((0x00000080U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((0x00000040U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((0x00000020U 
                                            & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((0x00000010U 
                                            & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                            } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                       | (((0x80U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                           << 3U) | 
                                          (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                            | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                           << 1U)));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | ((IData)((
                                                   ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                  >> 6U)) 
                                           | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                          << 1U));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | (0x00000010U 
                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                             >> 3U)));
                            }
                        } else if ((0x00000080U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((0x00000040U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
                                        } else if (
                                                   (2U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                            } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                       | (((0x80U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                           << 3U) | 
                                          (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                            | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                           << 1U)));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | ((IData)((
                                                   ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                  >> 6U)) 
                                           | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                          << 1U));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | (0x00000010U 
                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                             >> 3U)));
                            }
                        } else if ((0x00000040U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((0x00000020U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((0x00000010U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                    } else if ((4U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                            } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                       | (((0x80U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                           << 3U) | 
                                          (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                            | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                           << 1U)));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | ((IData)((
                                                   ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                  >> 6U)) 
                                           | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                          << 1U));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | (0x00000010U 
                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                             >> 3U)));
                            }
                        } else if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                          [(0x00000fffU 
                                            & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((1U & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                               [(0x00000fffU 
                                                 & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                  - (IData)(1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
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
                                            = ((0xefU 
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
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                        = (0x0000007fU 
                                           & (vlSelfRef.open8_top__DOT__core__DOT__R
                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                              >> 1U));
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xfeU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (1U & vlSelfRef.open8_top__DOT__core__DOT__R
                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (((4U 
                                                & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                   << 2U)) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                              << 1U));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                 << 4U)));
                                }
                            } else if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                        [(0x00000fffU 
                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
                                       | (((4U & ((0x07fffffcU 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                      >> 5U)) 
                                                  ^ 
                                                  (vlSelfRef.open8_top__DOT__core__DOT__R
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                   << 2U))) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                        } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | (((0x7fU == vlSelfRef.open8_top__DOT__core__DOT__R
                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                           << 3U) | 
                                          (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                            | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                           << 1U)));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | ((IData)((
                                                   ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                = (0x000000ffU & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xfeU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (0U != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xdfU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (0x00000020U & 
                                      ((0xffffffe0U 
                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                           << 2U)) 
                                       | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                           >> 3U) << 5U))));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (((0x80U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                       << 3U) | (((2U 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                      >> 6U)) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                 << 1U)));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | ((IData)((((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                >> 7U) 
                                               ^ (0x80U 
                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                      << 4U));
                        } else {
                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                = (0x000000ffU & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = (1U | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                              >> 6U)) 
                                       | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                      << 1U));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (0x00000010U & 
                                      ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                       >> 3U)));
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                     >> 9U)))) {
                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                  [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
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
    } else if ((0x00004000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
        if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
        if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
        } else if ((0x00000800U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                  >> 6U)) | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
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
    } else if ((0x00000800U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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

void Vopen8_top___024root___eval_ico(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_ico\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vopen8_top___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vopen8_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vopen8_top___024root___eval_phase__ico(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_phase__ico\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vopen8_top___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vopen8_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vopen8_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vopen8_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vopen8_top___024root___eval_triggers_vec__act(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___eval_triggers_vec__act\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

bool Vopen8_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___trigger_anySet__act\n"); );
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

void Vopen8_top___024root___nba_sequent__TOP__0(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___nba_sequent__TOP__0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdlyVal__open8_top__DOT__dmem__DOT__mem__v0;
    __VdlyVal__open8_top__DOT__dmem__DOT__mem__v0 = 0;
    SData/*11:0*/ __VdlyDim0__open8_top__DOT__dmem__DOT__mem__v0;
    __VdlyDim0__open8_top__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__open8_top__DOT__dmem__DOT__mem__v0;
    __VdlySet__open8_top__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __VdlySet__open8_top__DOT__dmem__DOT__mem__v0 = 0U;
    if (vlSelfRef.open8_top__DOT__dmem_we) {
        __VdlyVal__open8_top__DOT__dmem__DOT__mem__v0 
            = vlSelfRef.open8_top__DOT__dmem_wdata;
        __VdlyDim0__open8_top__DOT__dmem__DOT__mem__v0 
            = (0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__dmem_addr));
        __VdlySet__open8_top__DOT__dmem__DOT__mem__v0 = 1U;
    }
    if (__VdlySet__open8_top__DOT__dmem__DOT__mem__v0) {
        vlSelfRef.open8_top__DOT__dmem__DOT__mem[__VdlyDim0__open8_top__DOT__dmem__DOT__mem__v0] 
            = __VdlyVal__open8_top__DOT__dmem__DOT__mem__v0;
    }
}

void Vopen8_top___024root___nba_sequent__TOP__1(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___nba_sequent__TOP__1\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __VdfgRegularize_hebeb780c_0_1;
    __VdfgRegularize_hebeb780c_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    CData/*7:0*/ __VdlyVal__open8_top__DOT__core__DOT__R__v0;
    __VdlyVal__open8_top__DOT__core__DOT__R__v0 = 0;
    CData/*4:0*/ __VdlyDim0__open8_top__DOT__core__DOT__R__v0;
    __VdlyDim0__open8_top__DOT__core__DOT__R__v0 = 0;
    CData/*0:0*/ __VdlySet__open8_top__DOT__core__DOT__R__v0;
    __VdlySet__open8_top__DOT__core__DOT__R__v0 = 0;
    CData/*0:0*/ __VdlySet__open8_top__DOT__core__DOT__R__v1;
    __VdlySet__open8_top__DOT__core__DOT__R__v1 = 0;
    // Body
    __VdlySet__open8_top__DOT__core__DOT__R__v0 = 0U;
    __VdlySet__open8_top__DOT__core__DOT__R__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.open8_top__DOT__core__DOT__k = 0x00000020U;
    }
    if (vlSelfRef.rst_n) {
        vlSelfRef.port_out_we = 0U;
        if (((IData)(vlSelfRef.open8_top__DOT__io_we) 
             & (0U == (IData)(vlSelfRef.open8_top__DOT__io_addr)))) {
            vlSelfRef.port_out_we = 1U;
            vlSelfRef.port_out = vlSelfRef.open8_top__DOT__io_wdata;
        }
        if ((1U & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__halt)))) {
            vlSelfRef.open8_top__DOT__core__DOT__pc 
                = vlSelfRef.open8_top__DOT__core__DOT__pc_n;
            vlSelfRef.open8_top__DOT__core__DOT__sreg 
                = vlSelfRef.open8_top__DOT__core__DOT__sreg_n;
            vlSelfRef.open8_top__DOT__core__DOT__halt 
                = vlSelfRef.open8_top__DOT__core__DOT__halt_n;
            if (vlSelfRef.open8_top__DOT__core__DOT__reg_we) {
                __VdlyVal__open8_top__DOT__core__DOT__R__v0 
                    = vlSelfRef.open8_top__DOT__core__DOT__reg_wdata;
                __VdlyDim0__open8_top__DOT__core__DOT__R__v0 
                    = vlSelfRef.open8_top__DOT__core__DOT__reg_waddr;
                __VdlySet__open8_top__DOT__core__DOT__R__v0 = 1U;
            }
        }
    } else {
        vlSelfRef.port_out_we = 0U;
        vlSelfRef.port_out = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__pc = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__sreg = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__halt = 0U;
        __VdlySet__open8_top__DOT__core__DOT__R__v1 = 1U;
    }
    if (__VdlySet__open8_top__DOT__core__DOT__R__v0) {
        vlSelfRef.open8_top__DOT__core__DOT__R[__VdlyDim0__open8_top__DOT__core__DOT__R__v0] 
            = __VdlyVal__open8_top__DOT__core__DOT__R__v0;
    }
    if (__VdlySet__open8_top__DOT__core__DOT__R__v1) {
        vlSelfRef.open8_top__DOT__core__DOT__R[0U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[1U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[2U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[3U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[4U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[5U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[6U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[7U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[8U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[9U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[10U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[11U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[12U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[13U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[14U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[15U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[16U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[17U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[18U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[19U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[20U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[21U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[22U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[23U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[24U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[25U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[26U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[27U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[28U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[29U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[30U] = 0U;
        vlSelfRef.open8_top__DOT__core__DOT__R[31U] = 0U;
    }
    vlSelfRef.halted = vlSelfRef.open8_top__DOT__core__DOT__halt;
    vlSelfRef.dbg_sreg = vlSelfRef.open8_top__DOT__core__DOT__sreg;
    vlSelfRef.dbg_data = vlSelfRef.open8_top__DOT__core__DOT__R
        [vlSelfRef.dbg_addr];
    vlSelfRef.dbg_pc = vlSelfRef.open8_top__DOT__core__DOT__pc;
    vlSelfRef.open8_top__DOT__dmem_we = 0U;
    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 0U;
    vlSelfRef.open8_top__DOT__io_we = 0U;
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
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        }
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                    }
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                                        }
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
                                                } else if (
                                                           (1U 
                                                            & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                            [
                                                            (0x00000fffU 
                                                             & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                                }
                                            } else {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        }
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                    }
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                            } else if (
                                                       (1U 
                                                        & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                        [
                                                        (0x00000fffU 
                                                         & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                            }
                                        } else {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                        } else if (
                                                   (1U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
                                                     & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                                = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                        }
                                    } else {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                    } else if ((1U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                    }
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
                                } else if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                        = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
                                }
                            } else {
                                vlSelfRef.open8_top__DOT__core__DOT__reg_we = 1U;
                                vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                                    = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
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
        } else if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            vlSelfRef.open8_top__DOT__core__DOT__reg_we 
                = (5U == (7U & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                >> 0x0cU)));
            vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
                = vlSelfRef.open8_top__DOT__core__DOT__di;
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
        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
            = ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])
                ? (IData)(vlSelfRef.open8_top__DOT__core__DOT__di)
                : (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0));
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
    } else if ((0x00000400U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
        vlSelfRef.open8_top__DOT__core__DOT__reg_we 
            = (1U & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                     [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                     >> 0x0bU));
        vlSelfRef.open8_top__DOT__core__DOT__reg_waddr 
            = vlSelfRef.__VdfgRegularize_hebeb780c_0_0;
    }
}

void Vopen8_top___024root___nba_comb__TOP__0(Vopen8_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root___nba_comb__TOP__0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
        if ((0x00004000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                              [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                              >> 0x0000000cU)))) {
                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                        = vlSelfRef.open8_top__DOT__core__DOT__K8;
                }
            }
        } else if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
            if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                              [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                              >> 0x0000000bU)))) {
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
                                  [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                  >> 9U)))) {
                        if ((0x00000100U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((0x00000080U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((0x00000040U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((0x00000020U 
                                            & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((0x00000010U 
                                            & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                            [(0x00000fffU 
                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                            } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                       | (((0x80U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                           << 3U) | 
                                          (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                            | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                           << 1U)));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | ((IData)((
                                                   ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                  >> 6U)) 
                                           | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                          << 1U));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | (0x00000010U 
                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                             >> 3U)));
                            }
                        } else if ((0x00000080U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((0x00000040U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
                                        } else if (
                                                   (2U 
                                                    & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                    [
                                                    (0x00000fffU 
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                            } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                       | (((0x80U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                           << 3U) | 
                                          (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                            | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                           << 1U)));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | ((IData)((
                                                   ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                  >> 6U)) 
                                           | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                          << 1U));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | (0x00000010U 
                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                             >> 3U)));
                            }
                        } else if ((0x00000040U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((0x00000020U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                if ((0x00000010U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                    } else if ((4U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                [(0x00000fffU 
                                                  & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                        if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                             [(0x00000fffU 
                                               & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
                                    } else if ((2U 
                                                & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                            } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
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
                                       | (((0x80U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                           << 3U) | 
                                          (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                            | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                           << 1U)));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | ((IData)((
                                                   ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                                       | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                  >> 6U)) 
                                           | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                          << 1U));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | (0x00000010U 
                                          & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                             >> 3U)));
                            }
                        } else if ((8U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                          [(0x00000fffU 
                                            & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                          >> 2U)))) {
                                if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                    if ((1U & (~ vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                               [(0x00000fffU 
                                                 & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))) {
                                        vlSelfRef.open8_top__DOT__core__DOT__res 
                                            = (0x000000ffU 
                                               & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                          [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                                  - (IData)(1U)));
                                        vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                            = vlSelfRef.open8_top__DOT__core__DOT__res;
                                        vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                            = ((0xf1U 
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
                                            = ((0xefU 
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
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
                                } else {
                                    vlSelfRef.open8_top__DOT__core__DOT__res 
                                        = (0x0000007fU 
                                           & (vlSelfRef.open8_top__DOT__core__DOT__R
                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                              >> 1U));
                                    vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                        = vlSelfRef.open8_top__DOT__core__DOT__res;
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xfeU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (1U & vlSelfRef.open8_top__DOT__core__DOT__R
                                              [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (((4U 
                                                & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                   << 2U)) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                              << 1U));
                                    vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                        = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                           | (0x00000010U 
                                              & (vlSelfRef.open8_top__DOT__core__DOT__R
                                                 [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                 << 4U)));
                                }
                            } else if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                        [(0x00000fffU 
                                          & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
                                       | (((4U & ((0x07fffffcU 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                      >> 5U)) 
                                                  ^ 
                                                  (vlSelfRef.open8_top__DOT__core__DOT__R
                                                   [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                                   << 2U))) 
                                           | ((2U & 
                                               ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                        } else if ((2U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            if ((1U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                                vlSelfRef.open8_top__DOT__core__DOT__res 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                    [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                                vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                    = vlSelfRef.open8_top__DOT__core__DOT__res;
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | (((0x7fU == vlSelfRef.open8_top__DOT__core__DOT__R
                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]) 
                                           << 3U) | 
                                          (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                   >> 6U)) 
                                            | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                           << 1U)));
                                vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                    = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                       | ((IData)((
                                                   ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
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
                                    [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                = (0x000000ffU & (- (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xfeU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (0U != (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xdfU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (0x00000020U & 
                                      ((0xffffffe0U 
                                        & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                           << 2U)) 
                                       | ((vlSelfRef.open8_top__DOT__core__DOT__R
                                           [vlSelfRef.__VdfgRegularize_hebeb780c_0_0] 
                                           >> 3U) << 5U))));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (((0x80U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)) 
                                       << 3U) | (((2U 
                                                   & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                      >> 6U)) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                                 << 1U)));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | ((IData)((((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                                >> 7U) 
                                               ^ (0x80U 
                                                  == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res)))) 
                                      << 4U));
                        } else {
                            vlSelfRef.open8_top__DOT__core__DOT__res 
                                = (0x000000ffU & (~ (IData)(vlSelfRef.open8_top__DOT__core__DOT__R
                                                            [vlSelfRef.__VdfgRegularize_hebeb780c_0_0])));
                            vlSelfRef.open8_top__DOT__core__DOT__reg_wdata 
                                = vlSelfRef.open8_top__DOT__core__DOT__res;
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = (1U | (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xf1U & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (((2U & ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                              >> 6U)) 
                                       | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
                                      << 1U));
                            vlSelfRef.open8_top__DOT__core__DOT__sreg_n 
                                = ((0xefU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__sreg_n)) 
                                   | (0x00000010U & 
                                      ((IData)(vlSelfRef.open8_top__DOT__core__DOT__res) 
                                       >> 3U)));
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                     [(0x00000fffU 
                                       & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                     >> 9U)))) {
                    if ((1U & (~ (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                  [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
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
    } else if ((0x00004000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
        if ((0x00002000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
        if ((0x00001000U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
        } else if ((0x00000800U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
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
                                  >> 6U)) | (0U == (IData)(vlSelfRef.open8_top__DOT__core__DOT__res))) 
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
    } else if ((0x00000800U & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))])) {
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
