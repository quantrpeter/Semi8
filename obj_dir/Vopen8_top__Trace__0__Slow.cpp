// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vopen8_top__Syms.h"


VL_ATTR_COLD void Vopen8_top___024root__trace_init_dtype____0(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vopen8_top___024root__trace_init_sub__TOP__0(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_init_sub__TOP__0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"port_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"port_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"port_out_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"dbg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"dbg_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"dbg_sreg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"dbg_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "open8_top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"PROG_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"DATA_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"DMEM_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+91,0,"PROG_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"port_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"port_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"port_out_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"dbg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"dbg_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"dbg_sreg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"dbg_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"pa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"pb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"da",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"db",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"dmem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"dmem_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"dmem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"dmem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"io_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"io_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"io_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"io_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_PUSH_PREFIX(tracep, "core", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"PROG_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"DATA_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+81,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"pmem_addr_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"pmem_data_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"pmem_addr_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"pmem_data_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"dmem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"dmem_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"dmem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"dmem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"io_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"io_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"io_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"io_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"dbg_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"dbg_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"dbg_sreg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"dbg_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"Z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"T",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vopen8_top___024root__trace_init_dtype____0(vlSelf, tracep, "R", 0, c+31, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"sreg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+63,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"ir",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"ir2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+64,0,"d5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"r5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"di",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"K8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"io6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"br_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"rj_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"Rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"Rr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"Rdi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"reg_waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"reg_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"sreg_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"pc_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+78,0,"halt_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+4,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+5,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"cin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"add9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"sub9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 8,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"add4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"sub4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"fC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"fZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"fN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"fV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"fS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"fH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "dmem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"BUS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+80,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+25,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+27,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "pmem", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_WIDE(tracep,c+91,0,"INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 87,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"addr_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"data_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+22,0,"addr_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 11,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"data_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BUS(tracep,c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_init_dtype_sub____0(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vopen8_top___024root__trace_init_dtype____0(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_init_dtype____0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vopen8_top___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_init_dtype_sub____0(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_init_dtype_sub____0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 7,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_init_top(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_init_top\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vopen8_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vopen8_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vopen8_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vopen8_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vopen8_top___024root__trace_register(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_register\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vopen8_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vopen8_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vopen8_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vopen8_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_const_0_sub_0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vopen8_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_const_0\n"); );
    // Body
    Vopen8_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vopen8_top___024root*>(voidSelf);
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vopen8_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_const_0_sub_0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_const_0_sub_0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+89,(0x0000000cU),32);
    bufp->fullIData(oldp+90,(0x00000010U),32);
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x6772616dU;
    __Vtemp_1[2U] = 0x0070726fU;
    bufp->fullWData(oldp+91,(__Vtemp_1),88);
    bufp->fullIData(oldp+94,(0U),32);
    bufp->fullIData(oldp+95,(1U),32);
    bufp->fullIData(oldp+96,(2U),32);
    bufp->fullIData(oldp+97,(3U),32);
    bufp->fullIData(oldp+98,(4U),32);
    bufp->fullIData(oldp+99,(5U),32);
    bufp->fullIData(oldp+100,(6U),32);
    bufp->fullIData(oldp+101,(7U),32);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_full_0_sub_0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vopen8_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_full_0\n"); );
    // Body
    Vopen8_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vopen8_top___024root*>(voidSelf);
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vopen8_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_full_dtype____0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vopen8_top___024root__trace_full_0_sub_0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_full_0_sub_0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.open8_top__DOT__dmem__DOT__i),32);
    bufp->fullIData(oldp+1,(vlSelfRef.open8_top__DOT__pmem__DOT__i),32);
    bufp->fullCData(oldp+2,(vlSelfRef.open8_top__DOT__core__DOT__reg_wdata),8);
    bufp->fullCData(oldp+3,(vlSelfRef.open8_top__DOT__core__DOT__sreg_n),8);
    bufp->fullCData(oldp+4,(vlSelfRef.open8_top__DOT__core__DOT__a),8);
    bufp->fullCData(oldp+5,(vlSelfRef.open8_top__DOT__core__DOT__b),8);
    bufp->fullCData(oldp+6,(vlSelfRef.open8_top__DOT__core__DOT__res),8);
    bufp->fullBit(oldp+7,(vlSelfRef.open8_top__DOT__core__DOT__cin));
    bufp->fullSData(oldp+8,(vlSelfRef.open8_top__DOT__core__DOT__add9),9);
    bufp->fullSData(oldp+9,(vlSelfRef.open8_top__DOT__core__DOT__sub9),9);
    bufp->fullCData(oldp+10,(vlSelfRef.open8_top__DOT__core__DOT__add4),5);
    bufp->fullCData(oldp+11,(vlSelfRef.open8_top__DOT__core__DOT__sub4),5);
    bufp->fullBit(oldp+12,(vlSelfRef.open8_top__DOT__core__DOT__fC));
    bufp->fullBit(oldp+13,(vlSelfRef.open8_top__DOT__core__DOT__fZ));
    bufp->fullBit(oldp+14,(vlSelfRef.open8_top__DOT__core__DOT__fN));
    bufp->fullBit(oldp+15,(vlSelfRef.open8_top__DOT__core__DOT__fV));
    bufp->fullBit(oldp+16,(vlSelfRef.open8_top__DOT__core__DOT__fS));
    bufp->fullBit(oldp+17,(vlSelfRef.open8_top__DOT__core__DOT__fH));
    bufp->fullBit(oldp+18,(vlSelfRef.open8_top__DOT__core__DOT__halt));
    bufp->fullCData(oldp+19,(vlSelfRef.open8_top__DOT__core__DOT__sreg),8);
    bufp->fullSData(oldp+20,(vlSelfRef.open8_top__DOT__core__DOT__pc),16);
    bufp->fullSData(oldp+21,((0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))),12);
    bufp->fullSData(oldp+22,((0x00000fffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)))),12);
    bufp->fullSData(oldp+23,(vlSelfRef.open8_top__DOT__pmem__DOT__mem
                             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]),16);
    bufp->fullSData(oldp+24,(vlSelfRef.open8_top__DOT__pmem__DOT__mem
                             [(0x00000fffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc)))]),16);
    bufp->fullSData(oldp+25,(vlSelfRef.open8_top__DOT__dmem_addr),16);
    bufp->fullBit(oldp+26,(vlSelfRef.open8_top__DOT__dmem_we));
    bufp->fullCData(oldp+27,(vlSelfRef.open8_top__DOT__dmem_wdata),8);
    bufp->fullBit(oldp+28,(vlSelfRef.open8_top__DOT__io_we));
    bufp->fullCData(oldp+29,(vlSelfRef.open8_top__DOT__io_addr),6);
    bufp->fullCData(oldp+30,(vlSelfRef.open8_top__DOT__io_wdata),8);
    Vopen8_top___024root__trace_full_dtype____0(vlSelf, bufp, 31, vlSelfRef.open8_top__DOT__core__DOT__R);
    bufp->fullIData(oldp+63,(vlSelfRef.open8_top__DOT__core__DOT__k),32);
    bufp->fullCData(oldp+64,(vlSelfRef.__VdfgRegularize_hebeb780c_0_0),5);
    bufp->fullCData(oldp+65,(vlSelfRef.open8_top__DOT__core__DOT__r5),5);
    bufp->fullCData(oldp+66,(vlSelfRef.open8_top__DOT__core__DOT__di),5);
    bufp->fullCData(oldp+67,(vlSelfRef.open8_top__DOT__core__DOT__K8),8);
    bufp->fullCData(oldp+68,(vlSelfRef.open8_top__DOT__core__DOT__io6),6);
    bufp->fullCData(oldp+69,(vlSelfRef.__VdfgRegularize_hebeb780c_0_2),3);
    bufp->fullSData(oldp+70,(vlSelfRef.open8_top__DOT__core__DOT__br_off),16);
    bufp->fullSData(oldp+71,(((0x0000f000U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                                             [
                                                             (0x00000fffU 
                                                              & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))] 
                                                             >> 0x0000000bU)))) 
                                              << 0x0000000cU)) 
                              | (0x00000fffU & vlSelfRef.open8_top__DOT__pmem__DOT__mem
                                 [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__core__DOT__pc))]))),16);
    bufp->fullCData(oldp+72,(vlSelfRef.open8_top__DOT__core__DOT__R
                             [vlSelfRef.__VdfgRegularize_hebeb780c_0_0]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.open8_top__DOT__core__DOT__R
                             [vlSelfRef.open8_top__DOT__core__DOT__r5]),8);
    bufp->fullCData(oldp+74,(vlSelfRef.open8_top__DOT__core__DOT__R
                             [vlSelfRef.open8_top__DOT__core__DOT__di]),8);
    bufp->fullBit(oldp+75,(vlSelfRef.open8_top__DOT__core__DOT__reg_we));
    bufp->fullCData(oldp+76,(vlSelfRef.open8_top__DOT__core__DOT__reg_waddr),5);
    bufp->fullSData(oldp+77,(vlSelfRef.open8_top__DOT__core__DOT__pc_n),16);
    bufp->fullBit(oldp+78,(vlSelfRef.open8_top__DOT__core__DOT__halt_n));
    bufp->fullSData(oldp+79,((0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__dmem_addr))),12);
    bufp->fullBit(oldp+80,(vlSelfRef.clk));
    bufp->fullBit(oldp+81,(vlSelfRef.rst_n));
    bufp->fullCData(oldp+82,(vlSelfRef.port_in),8);
    bufp->fullCData(oldp+83,(vlSelfRef.port_out),8);
    bufp->fullBit(oldp+84,(vlSelfRef.port_out_we));
    bufp->fullCData(oldp+85,(vlSelfRef.dbg_addr),5);
    bufp->fullCData(oldp+86,(vlSelfRef.dbg_data),8);
    bufp->fullCData(oldp+87,(vlSelfRef.open8_top__DOT__dmem__DOT__mem
                             [(0x00000fffU & (IData)(vlSelfRef.open8_top__DOT__dmem_addr))]),8);
    bufp->fullCData(oldp+88,(((IData)(vlSelfRef.port_in) 
                              & (- (IData)((0U == (IData)(vlSelfRef.open8_top__DOT__io_addr)))))),8);
}

VL_ATTR_COLD void Vopen8_top___024root__trace_full_dtype____0(Vopen8_top___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vopen8_top___024root__trace_full_dtype____0\n"); );
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->fullCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->fullCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->fullCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->fullCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->fullCData(oldp+5,(__VdtypeVar[5]),8);
    bufp->fullCData(oldp+6,(__VdtypeVar[6]),8);
    bufp->fullCData(oldp+7,(__VdtypeVar[7]),8);
    bufp->fullCData(oldp+8,(__VdtypeVar[8]),8);
    bufp->fullCData(oldp+9,(__VdtypeVar[9]),8);
    bufp->fullCData(oldp+10,(__VdtypeVar[10]),8);
    bufp->fullCData(oldp+11,(__VdtypeVar[11]),8);
    bufp->fullCData(oldp+12,(__VdtypeVar[12]),8);
    bufp->fullCData(oldp+13,(__VdtypeVar[13]),8);
    bufp->fullCData(oldp+14,(__VdtypeVar[14]),8);
    bufp->fullCData(oldp+15,(__VdtypeVar[15]),8);
    bufp->fullCData(oldp+16,(__VdtypeVar[16]),8);
    bufp->fullCData(oldp+17,(__VdtypeVar[17]),8);
    bufp->fullCData(oldp+18,(__VdtypeVar[18]),8);
    bufp->fullCData(oldp+19,(__VdtypeVar[19]),8);
    bufp->fullCData(oldp+20,(__VdtypeVar[20]),8);
    bufp->fullCData(oldp+21,(__VdtypeVar[21]),8);
    bufp->fullCData(oldp+22,(__VdtypeVar[22]),8);
    bufp->fullCData(oldp+23,(__VdtypeVar[23]),8);
    bufp->fullCData(oldp+24,(__VdtypeVar[24]),8);
    bufp->fullCData(oldp+25,(__VdtypeVar[25]),8);
    bufp->fullCData(oldp+26,(__VdtypeVar[26]),8);
    bufp->fullCData(oldp+27,(__VdtypeVar[27]),8);
    bufp->fullCData(oldp+28,(__VdtypeVar[28]),8);
    bufp->fullCData(oldp+29,(__VdtypeVar[29]),8);
    bufp->fullCData(oldp+30,(__VdtypeVar[30]),8);
    bufp->fullCData(oldp+31,(__VdtypeVar[31]),8);
}
