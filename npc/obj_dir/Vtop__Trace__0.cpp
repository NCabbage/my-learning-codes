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
        bufp->chgIData(oldp+0,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm),32);
        bufp->chgBit(oldp+1,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en));
        bufp->chgBit(oldp+2,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en));
        bufp->chgBit(oldp+3,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en));
        bufp->chgBit(oldp+4,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en));
        bufp->chgBit(oldp+5,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en));
        bufp->chgBit(oldp+6,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en));
        bufp->chgBit(oldp+7,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en));
        bufp->chgBit(oldp+8,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en));
        bufp->chgBit(oldp+9,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en));
        bufp->chgBit(oldp+10,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en));
        bufp->chgBit(oldp+11,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en));
        bufp->chgBit(oldp+12,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en));
        bufp->chgBit(oldp+13,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en));
        bufp->chgBit(oldp+14,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en));
        bufp->chgBit(oldp+15,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en));
        bufp->chgBit(oldp+16,(((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+17,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en))))),32);
        bufp->chgIData(oldp+18,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result),32);
        bufp->chgIData(oldp+19,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en))))),32);
        bufp->chgIData(oldp+20,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en))))),32);
        bufp->chgIData(oldp+21,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en))))),32);
        bufp->chgIData(oldp+22,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en))))),32);
        bufp->chgIData(oldp+23,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr),32);
        bufp->chgIData(oldp+24,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata),32);
        bufp->chgIData(oldp+25,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr),32);
        bufp->chgCData(oldp+26,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__wmask),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+27,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[10U]),32);
        Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 28, vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR);
        bufp->chgIData(oldp+44,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sw_data_r),32);
        bufp->chgIData(oldp+45,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sb_data_r),32);
    }
    bufp->chgBit(oldp+46,(vlSelfRef.clk));
    bufp->chgIData(oldp+47,(vlSelfRef.inst),32);
    bufp->chgBit(oldp+48,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+49,(vlSelfRef.PC),32);
    bufp->chgBit(oldp+50,(vlSelfRef.error));
    bufp->chgCData(oldp+51,((0x0000000fU & (vlSelfRef.inst 
                                            >> 0x0000000fU))),4);
    bufp->chgCData(oldp+52,((0x0000000fU & (vlSelfRef.inst 
                                            >> 0x00000014U))),4);
    bufp->chgCData(oldp+53,((0x0000000fU & (vlSelfRef.inst 
                                            >> 7U))),4);
    bufp->chgIData(oldp+54,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->chgIData(oldp+55,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x0000000cU) | ((0x00000fe0U 
                                                  & (vlSelfRef.inst 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.inst 
                                                       >> 7U))))),32);
    bufp->chgIData(oldp+56,((((- (IData)((vlSelfRef.inst 
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
    bufp->chgIData(oldp+57,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x0000000cU) | ((0x00000800U 
                                                  & (vlSelfRef.inst 
                                                     << 4U)) 
                                                 | ((0x000007e0U 
                                                     & (vlSelfRef.inst 
                                                        >> 0x00000014U)) 
                                                    | (0x0000001eU 
                                                       & (vlSelfRef.inst 
                                                          >> 7U)))))),32);
    bufp->chgBit(oldp+58,((0x00100073U == vlSelfRef.inst)));
    bufp->chgBit(oldp+59,((0x37U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+60,((0x17U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+61,((0x6fU == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgIData(oldp+62,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en))))),32);
    bufp->chgIData(oldp+63,((0xfffff000U & (vlSelfRef.inst 
                                            & (- (IData)(
                                                         (0x37U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.inst))))))),32);
    bufp->chgIData(oldp+64,(((vlSelfRef.PC + (0xfffff000U 
                                              & vlSelfRef.inst)) 
                             & (- (IData)((0x17U == 
                                           (0x0000007fU 
                                            & vlSelfRef.inst)))))),32);
    bufp->chgIData(oldp+65,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result),32);
    bufp->chgIData(oldp+66,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en))) 
                             & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x0000000fU))] 
                                < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm))),32);
    bufp->chgIData(oldp+67,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en))) 
                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                                 ? ((IData)(4U) + vlSelfRef.PC)
                                 : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))),32);
    bufp->chgIData(oldp+68,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              - vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en))))),32);
    bufp->chgIData(oldp+69,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en))) 
                             & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x0000000fU))] 
                                < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x00000014U))]))),32);
    bufp->chgIData(oldp+70,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              ^ vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en))))),32);
    bufp->chgIData(oldp+71,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              | vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en))))),32);
    bufp->chgIData(oldp+72,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                               ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7
                               : ((IData)(4U) + vlSelfRef.PC)) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en))))),32);
    bufp->chgIData(oldp+73,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              >> (0x0000001fU & (vlSelfRef.inst 
                                                 >> 0x00000014U))) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en))))),32);
    bufp->chgBit(oldp+74,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                           | ((0x17U == (0x0000007fU 
                                         & vlSelfRef.inst)) 
                              | ((0x6fU == (0x0000007fU 
                                            & vlSelfRef.inst)) 
                                 | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en) 
                                    | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en) 
                                       | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en) 
                                          | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en) 
                                             | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en) 
                                                | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en)))))))))));
    bufp->chgIData(oldp+75,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                            [(0x0000000fU & (vlSelfRef.inst 
                                             >> 0x0000000fU))]),32);
    bufp->chgIData(oldp+76,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                            [(0x0000000fU & (vlSelfRef.inst 
                                             >> 0x00000014U))]),32);
    bufp->chgIData(oldp+77,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__wdata),32);
    bufp->chgIData(oldp+78,(((0x6fU == (0x0000007fU 
                                        & vlSelfRef.inst))
                              ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result
                              : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en)
                                  ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result
                                  : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en)
                                      ? ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en))) 
                                         & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                                             ? ((IData)(4U) 
                                                + vlSelfRef.PC)
                                             : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))
                                      : (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                                           ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7
                                           : ((IData)(4U) 
                                              + vlSelfRef.PC)) 
                                         & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en)))))))),32);
    bufp->chgCData(oldp+79,((0x0000007fU & vlSelfRef.inst)),7);
    bufp->chgCData(oldp+80,((7U & (vlSelfRef.inst >> 0x0000000cU))),3);
    bufp->chgCData(oldp+81,((vlSelfRef.inst >> 0x00000019U)),7);
    bufp->chgCData(oldp+82,((0x0000001fU & (vlSelfRef.inst 
                                            >> 7U))),5);
    bufp->chgCData(oldp+83,((0x0000001fU & (vlSelfRef.inst 
                                            >> 0x0000000fU))),5);
    bufp->chgCData(oldp+84,((0x0000001fU & (vlSelfRef.inst 
                                            >> 0x00000014U))),5);
    bufp->chgBit(oldp+85,(((0x00100073U == vlSelfRef.inst) 
                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                              | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en) 
                                 | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en) 
                                    | ((0x17U == (0x0000007fU 
                                                  & vlSelfRef.inst)) 
                                       | ((0x6fU == 
                                           (0x0000007fU 
                                            & vlSelfRef.inst)) 
                                          | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en) 
                                             | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en) 
                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en) 
                                                      | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en) 
                                                         | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en) 
                                                            | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en) 
                                                               | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en))))))))))))))));
    bufp->chgBit(oldp+86,((0x13U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+87,((0U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+88,((0x67U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+89,((0x33U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+90,((0U == (vlSelfRef.inst >> 0x00000019U))));
    bufp->chgBit(oldp+91,((3U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+92,((2U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+93,((4U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+94,((0x23U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+95,((3U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+96,((0x63U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+97,((1U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+98,((0x20U == (vlSelfRef.inst 
                                     >> 0x00000019U))));
    bufp->chgBit(oldp+99,((6U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+100,((5U == (7U & (vlSelfRef.inst 
                                         >> 0x0000000cU)))));
    bufp->chgIData(oldp+101,((((2U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                                ? (((1U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                                     ? (0x0000ff00U 
                                        & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                           [(0x0000000fU 
                                             & (vlSelfRef.inst 
                                                >> 0x00000014U))] 
                                           << 8U)) : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                   << 0x00000010U) : 
                               ((1U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                    << 8U) : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
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
