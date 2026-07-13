// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vt1__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vt1::Vt1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vt1__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vt1::Vt1(const char* _vcname__)
    : Vt1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vt1::~Vt1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vt1___024root___eval_debug_assertions(Vt1___024root* vlSelf);
#endif  // VL_DEBUG
void Vt1___024root___eval_static(Vt1___024root* vlSelf);
void Vt1___024root___eval_initial(Vt1___024root* vlSelf);
void Vt1___024root___eval_settle(Vt1___024root* vlSelf);
void Vt1___024root___eval(Vt1___024root* vlSelf);

void Vt1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vt1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vt1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vt1___024root___eval_static(&(vlSymsp->TOP));
        Vt1___024root___eval_initial(&(vlSymsp->TOP));
        Vt1___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vt1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vt1::eventsPending() { return false; }

uint64_t Vt1::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vt1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vt1___024root___eval_final(Vt1___024root* vlSelf);

VL_ATTR_COLD void Vt1::final() {
    contextp()->executingFinal(true);
    Vt1___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vt1::hierName() const { return vlSymsp->name(); }
const char* Vt1::modelName() const { return "Vt1"; }
unsigned Vt1::threads() const { return 1; }
void Vt1::prepareClone() const { contextp()->prepareClone(); }
void Vt1::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vt1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vt1___024root__trace_decl_types(VerilatedFst* tracep);

void Vt1___024root__trace_init_top(Vt1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vt1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vt1___024root*>(voidSelf);
    Vt1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vt1___024root__trace_decl_types(tracep);
    Vt1___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vt1___024root__trace_register(Vt1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vt1::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vt1::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 3);
    Vt1___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
