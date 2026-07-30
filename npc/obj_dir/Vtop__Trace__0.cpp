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

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__en));
        bufp->chgSData(oldp+1,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__buffer),10);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 2, vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__fifo);
        bufp->chgCData(oldp+10,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__w_ptr),3);
        bufp->chgCData(oldp+11,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__r_ptr),3);
        bufp->chgCData(oldp+12,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__count),4);
        bufp->chgCData(oldp+13,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync),3);
        bufp->chgCData(oldp+14,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_sync),3);
        bufp->chgBit(oldp+15,((IData)((4U == (6U & (IData)(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ps2_clk_sync))))));
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__ready_up));
        bufp->chgCData(oldp+17,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__state),4);
    }
    bufp->chgBit(oldp+18,(vlSelfRef.clk));
    bufp->chgBit(oldp+19,(vlSelfRef.clrn));
    bufp->chgBit(oldp+20,(vlSelfRef.ps2_clk));
    bufp->chgBit(oldp+21,(vlSelfRef.ps2_data));
    bufp->chgCData(oldp+22,(vlSelfRef.data),8);
    bufp->chgBit(oldp+23,(vlSelfRef.ready));
    bufp->chgBit(oldp+24,(vlSelfRef.overflow));
    bufp->chgCData(oldp+25,(vlSelfRef.seg0),8);
    bufp->chgCData(oldp+26,(vlSelfRef.seg1),8);
    bufp->chgCData(oldp+27,(vlSelfRef.seg2),8);
    bufp->chgCData(oldp+28,(vlSelfRef.seg3),8);
    bufp->chgCData(oldp+29,(vlSelfRef.seg4),8);
    bufp->chgCData(oldp+30,(vlSelfRef.seg5),8);
    bufp->chgCData(oldp+31,(vlSelfRef.ascll),8);
    bufp->chgCData(oldp+32,(vlSelfRef.times),8);
    bufp->chgCData(oldp+33,(vlSelfRef.top__DOT__ysyx_100022863_ps2_keyboard_model_inst__DOT__next_state),4);
    bufp->chgCData(oldp+34,((0x0000000fU & (IData)(vlSelfRef.data))),4);
    bufp->chgCData(oldp+35,((0x0000000fU & ((IData)(vlSelfRef.data) 
                                            >> 4U))),4);
    bufp->chgCData(oldp+36,((0x0000000fU & (IData)(vlSelfRef.ascll))),4);
    bufp->chgCData(oldp+37,((0x0000000fU & ((IData)(vlSelfRef.ascll) 
                                            >> 4U))),4);
    bufp->chgCData(oldp+38,((0x0000000fU & (IData)(vlSelfRef.times))),4);
    bufp->chgCData(oldp+39,((0x0000000fU & ((IData)(vlSelfRef.times) 
                                            >> 4U))),4);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<CData/*7:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgCData(oldp+0,(__VdtypeVar[7]),8);
    bufp->chgCData(oldp+1,(__VdtypeVar[6]),8);
    bufp->chgCData(oldp+2,(__VdtypeVar[5]),8);
    bufp->chgCData(oldp+3,(__VdtypeVar[4]),8);
    bufp->chgCData(oldp+4,(__VdtypeVar[3]),8);
    bufp->chgCData(oldp+5,(__VdtypeVar[2]),8);
    bufp->chgCData(oldp+6,(__VdtypeVar[1]),8);
    bufp->chgCData(oldp+7,(__VdtypeVar[0]),8);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
