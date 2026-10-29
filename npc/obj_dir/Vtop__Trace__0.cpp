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

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar);

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en));
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en));
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en));
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en));
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+7,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en))))),32);
        bufp->chgIData(oldp+8,((0xfffffffeU & ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))),32);
        bufp->chgIData(oldp+9,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en))))),32);
        bufp->chgIData(oldp+10,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en))))),32);
        bufp->chgIData(oldp+11,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en))))),32);
        bufp->chgIData(oldp+12,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en))))),32);
        bufp->chgIData(oldp+13,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr),32);
        bufp->chgIData(oldp+14,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata),32);
        bufp->chgIData(oldp+15,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr),32);
        bufp->chgCData(oldp+16,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__wmask),4);
    }
    bufp->chgBit(oldp+17,(vlSelfRef.clk));
    bufp->chgIData(oldp+18,(vlSelfRef.inst),32);
    bufp->chgBit(oldp+19,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+20,(vlSelfRef.PC),32);
    bufp->chgBit(oldp+21,(vlSelfRef.error));
    bufp->chgCData(oldp+22,((0x0000000fU & (vlSelfRef.inst 
                                            >> 0x0000000fU))),4);
    bufp->chgCData(oldp+23,((0x0000000fU & (vlSelfRef.inst 
                                            >> 0x00000014U))),4);
    bufp->chgCData(oldp+24,((0x0000000fU & (vlSelfRef.inst 
                                            >> 7U))),4);
    bufp->chgIData(oldp+25,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x0000000cU) | (vlSelfRef.inst 
                                                 >> 0x00000014U))),32);
    bufp->chgIData(oldp+26,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->chgIData(oldp+27,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x0000000cU) | ((0x00000fe0U 
                                                  & (vlSelfRef.inst 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.inst 
                                                       >> 7U))))),32);
    bufp->chgIData(oldp+28,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x00000014U) | (((
                                                   (0x000001feU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.inst 
                                                         >> 0x00000014U))) 
                                                  << 0x0000000bU) 
                                                 | (0x000007feU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x00000014U))))),32);
    bufp->chgBit(oldp+29,((0x37U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+30,((0x17U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+31,((0x6fU == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgIData(oldp+32,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en))))),32);
    bufp->chgIData(oldp+33,((0xfffff000U & (vlSelfRef.inst 
                                            & (- (IData)(
                                                         (0x37U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.inst))))))),32);
    bufp->chgIData(oldp+34,(((vlSelfRef.PC + (0xfffff000U 
                                              & vlSelfRef.inst)) 
                             & (- (IData)((0x17U == 
                                           (0x0000007fU 
                                            & vlSelfRef.inst)))))),32);
    bufp->chgIData(oldp+35,(((vlSelfRef.PC + (((- (IData)(
                                                          (vlSelfRef.inst 
                                                           >> 0x0000001fU))) 
                                               << 0x00000014U) 
                                              | ((((0x000001feU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x0000000bU)) 
                                                   | (1U 
                                                      & (vlSelfRef.inst 
                                                         >> 0x00000014U))) 
                                                  << 0x0000000bU) 
                                                 | (0x000007feU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x00000014U))))) 
                             & (- (IData)((0x6fU == 
                                           (0x0000007fU 
                                            & vlSelfRef.inst)))))),32);
    bufp->chgBit(oldp+36,(((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en) 
                           | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en) 
                              | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en) 
                                 | ((0x37U == (0x0000007fU 
                                               & vlSelfRef.inst)) 
                                    | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en) 
                                       | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en) 
                                          | ((0x17U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.inst)) 
                                             | (0x6fU 
                                                == 
                                                (0x0000007fU 
                                                 & vlSelfRef.inst)))))))))));
    bufp->chgIData(oldp+37,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                            [(0x0000000fU & (vlSelfRef.inst 
                                             >> 0x0000000fU))]),32);
    bufp->chgIData(oldp+38,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                            [(0x0000000fU & (vlSelfRef.inst 
                                             >> 0x00000014U))]),32);
    bufp->chgIData(oldp+39,(((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en)))) 
                             | (((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                  [(0x0000000fU & (vlSelfRef.inst 
                                                   >> 0x0000000fU))] 
                                  + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                  [(0x0000000fU & (vlSelfRef.inst 
                                                   >> 0x00000014U))]) 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en)))) 
                                | ((0xfffff000U & (vlSelfRef.inst 
                                                   & (- (IData)(
                                                                (0x37U 
                                                                 == 
                                                                 (0x0000007fU 
                                                                  & vlSelfRef.inst)))))) 
                                   | (((vlSelfRef.PC 
                                        + (0xfffff000U 
                                           & vlSelfRef.inst)) 
                                       & (- (IData)(
                                                    (0x17U 
                                                     == 
                                                     (0x0000007fU 
                                                      & vlSelfRef.inst))))) 
                                      | (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                                         | (((IData)(4U) 
                                             + vlSelfRef.PC) 
                                            & (- (IData)(
                                                         ((0x6fU 
                                                           == 
                                                           (0x0000007fU 
                                                            & vlSelfRef.inst)) 
                                                          | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en))))))))))),32);
    bufp->chgIData(oldp+40,((((vlSelfRef.PC + (((- (IData)(
                                                           (vlSelfRef.inst 
                                                            >> 0x0000001fU))) 
                                                << 0x00000014U) 
                                               | ((((0x000001feU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSelfRef.inst 
                                                          >> 0x00000014U))) 
                                                   << 0x0000000bU) 
                                                  | (0x000007feU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x00000014U))))) 
                              & (- (IData)((0x6fU == 
                                            (0x0000007fU 
                                             & vlSelfRef.inst))))) 
                             | (0xfffffffeU & ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en))) 
                                               & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0)))),32);
    bufp->chgIData(oldp+41,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[10U]),32);
    bufp->chgCData(oldp+42,((0x0000007fU & vlSelfRef.inst)),7);
    bufp->chgCData(oldp+43,((7U & (vlSelfRef.inst >> 0x0000000cU))),3);
    bufp->chgCData(oldp+44,((0x0000001fU & (vlSelfRef.inst 
                                            >> 7U))),5);
    bufp->chgCData(oldp+45,((0x0000001fU & (vlSelfRef.inst 
                                            >> 0x0000000fU))),5);
    bufp->chgCData(oldp+46,((0x0000001fU & (vlSelfRef.inst 
                                            >> 0x00000014U))),5);
    bufp->chgBit(oldp+47,((0x13U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+48,((0U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+49,((0x67U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+50,((0x33U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+51,((3U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+52,((2U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+53,((4U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+54,((0x23U == (0x0000007fU & vlSelfRef.inst))));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 55, vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR);
    bufp->chgIData(oldp+71,((((2U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                               ? (((1U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                                    ? (0x0000ff00U 
                                       & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                          [(0x0000000fU 
                                            & (vlSelfRef.inst 
                                               >> 0x00000014U))] 
                                          << 8U)) : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)) 
                                  << 0x00000010U) : 
                              ((1U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                                ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1) 
                                   << 8U) : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en))))),32);
}

void Vtop___024root__trace_chg_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+8,(__VdtypeVar[7]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[0]),32);
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
