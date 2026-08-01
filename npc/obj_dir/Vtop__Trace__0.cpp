// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 6>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__rom_init__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgCData(oldp+1,((0x0000000fU & ((- (IData)((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_ctrl_inst__DOT__bner_en))) 
                                               & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                                  [
                                                  ((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                                   >> 2U)] 
                                                  >> 2U)))),8);
        bufp->chgCData(oldp+2,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_ctrl_inst__DOT__rs2),2);
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_ctrl_inst__DOT__add_en));
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_ctrl_inst__DOT__bner_en));
        bufp->chgCData(oldp+5,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__rs1_data),8);
        bufp->chgCData(oldp+6,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR
                               [vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_ctrl_inst__DOT__rs2]),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+7,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                               [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                 >> 2U)]),8);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 8, vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__GPR);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_GPR_inst__DOT__i),32);
        bufp->chgCData(oldp+15,(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC),8);
    }
    bufp->chgBit(oldp+16,(vlSelfRef.clk));
    bufp->chgBit(oldp+17,(vlSelfRef.rst_n));
    bufp->chgCData(oldp+18,(vlSelfRef.ans),8);
    bufp->chgCData(oldp+19,((3U & ((- (IData)((1U & 
                                               (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))))) 
                                   & ((- (IData)((1U 
                                                  & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))))) 
                                      & ((vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                          [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                            >> 2U)] 
                                          >> 2U) & 
                                         (- (IData)((IData)(vlSelfRef.rst_n)))))))),2);
    bufp->chgCData(oldp+20,((3U & (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)
                                     ? 1U : (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                             [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                               >> 2U)] 
                                             >> 4U)) 
                                   & (- (IData)((IData)(vlSelfRef.rst_n)))))),2);
    bufp->chgCData(oldp+21,((0x0000000fU & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                            & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                               [((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                                 >> 2U)] 
                                               & ((- (IData)((IData)(vlSelfRef.rst_n))) 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))))))))),4);
    bufp->chgBit(oldp+22,(((IData)(vlSelfRef.rst_n) 
                           & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))));
    bufp->chgBit(oldp+23,(((IData)(vlSelfRef.rst_n) 
                           & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))));
    bufp->chgCData(oldp+24,((((IData)(vlSelfRef.rst_n) 
                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                 & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))
                              ? (0x0000000fU & ((- (IData)((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))) 
                                                & (vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__ROM
                                                   [
                                                   ((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_PC_inst__DOT__PC) 
                                                    >> 2U)] 
                                                   & ((- (IData)((IData)(vlSelfRef.rst_n))) 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))))))))
                              : ((IData)(vlSelfRef.ans) 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_ctrl_inst__DOT__add_en)))))),8);
    bufp->chgBit(oldp+25,(((0U != (IData)(vlSelfRef.ans)) 
                           & (IData)(vlSelfRef.top__DOT__ysyx_100022863_sCPU_inst__DOT__ysyx_100022863_ctrl_inst__DOT__bner_en))));
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 6>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[0]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[5]),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
