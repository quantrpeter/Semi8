// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vopen8_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vopen8_top::Vopen8_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vopen8_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , port_in{vlSymsp->TOP.port_in}
    , port_out{vlSymsp->TOP.port_out}
    , port_out_we{vlSymsp->TOP.port_out_we}
    , halted{vlSymsp->TOP.halted}
    , dbg_addr{vlSymsp->TOP.dbg_addr}
    , dbg_data{vlSymsp->TOP.dbg_data}
    , dbg_sreg{vlSymsp->TOP.dbg_sreg}
    , dbg_pc{vlSymsp->TOP.dbg_pc}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vopen8_top::Vopen8_top(const char* _vcname__)
    : Vopen8_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vopen8_top::~Vopen8_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vopen8_top___024root___eval_debug_assertions(Vopen8_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vopen8_top___024root___eval_static(Vopen8_top___024root* vlSelf);
void Vopen8_top___024root___eval_initial(Vopen8_top___024root* vlSelf);
void Vopen8_top___024root___eval_settle(Vopen8_top___024root* vlSelf);
void Vopen8_top___024root___eval(Vopen8_top___024root* vlSelf);

void Vopen8_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vopen8_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vopen8_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vopen8_top___024root___eval_static(&(vlSymsp->TOP));
        Vopen8_top___024root___eval_initial(&(vlSymsp->TOP));
        Vopen8_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vopen8_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vopen8_top::eventsPending() { return false; }

uint64_t Vopen8_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vopen8_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vopen8_top___024root___eval_final(Vopen8_top___024root* vlSelf);

VL_ATTR_COLD void Vopen8_top::final() {
    contextp()->executingFinal(true);
    Vopen8_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vopen8_top::hierName() const { return vlSymsp->name(); }
const char* Vopen8_top::modelName() const { return "Vopen8_top"; }
unsigned Vopen8_top::threads() const { return 1; }
void Vopen8_top::prepareClone() const { contextp()->prepareClone(); }
void Vopen8_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vopen8_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vopen8_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vopen8_top___024root__trace_init_top(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vopen8_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vopen8_top___024root*>(voidSelf);
    Vopen8_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vopen8_top___024root__trace_decl_types(tracep);
    Vopen8_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vopen8_top___024root__trace_register(Vopen8_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vopen8_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vopen8_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 102);
    Vopen8_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
