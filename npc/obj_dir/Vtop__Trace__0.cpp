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
        bufp->chgBit(oldp+16,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en));
        bufp->chgBit(oldp+17,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__andi_en));
        bufp->chgBit(oldp+18,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sll_en));
        bufp->chgBit(oldp+19,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__and_en));
        bufp->chgBit(oldp+20,(((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en) 
                               | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgIData(oldp+21,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en))))),32);
        bufp->chgIData(oldp+22,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result),32);
        bufp->chgIData(oldp+23,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en))))),32);
        bufp->chgIData(oldp+24,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en))))),32);
        bufp->chgIData(oldp+25,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en))))),32);
        bufp->chgIData(oldp+26,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en))))),32);
        bufp->chgIData(oldp+27,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en))))),32);
        bufp->chgIData(oldp+28,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr),32);
        bufp->chgIData(oldp+29,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata),32);
        bufp->chgIData(oldp+30,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr),32);
        bufp->chgIData(oldp+31,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sb_data),32);
        bufp->chgIData(oldp+32,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sh_data),32);
        bufp->chgCData(oldp+33,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sb_mask),4);
        bufp->chgCData(oldp+34,((((~ (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en)) 
                                  & (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en))
                                  ? (0x0000000fU & 
                                     (0x0c03U >> (0x0000000cU 
                                                  & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr 
                                                     << 2U))))
                                  : 0U)),4);
    }
    bufp->chgBit(oldp+35,(vlSelfRef.clk));
    bufp->chgIData(oldp+36,(vlSelfRef.inst),32);
    bufp->chgBit(oldp+37,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+38,(vlSelfRef.PC),32);
    bufp->chgBit(oldp+39,(vlSelfRef.error));
    bufp->chgCData(oldp+40,((0x0000000fU & (vlSelfRef.inst 
                                            >> 0x0000000fU))),4);
    bufp->chgCData(oldp+41,((0x0000000fU & (vlSelfRef.inst 
                                            >> 0x00000014U))),4);
    bufp->chgCData(oldp+42,((0x0000000fU & (vlSelfRef.inst 
                                            >> 7U))),4);
    bufp->chgIData(oldp+43,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->chgIData(oldp+44,((((- (IData)((vlSelfRef.inst 
                                          >> 0x0000001fU))) 
                              << 0x0000000cU) | ((0x00000fe0U 
                                                  & (vlSelfRef.inst 
                                                     >> 0x00000014U)) 
                                                 | (0x0000001fU 
                                                    & (vlSelfRef.inst 
                                                       >> 7U))))),32);
    bufp->chgIData(oldp+45,((((- (IData)((vlSelfRef.inst 
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
    bufp->chgIData(oldp+46,((((- (IData)((vlSelfRef.inst 
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
    bufp->chgBit(oldp+47,((0x00100073U == vlSelfRef.inst)));
    bufp->chgBit(oldp+48,((0x37U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+49,((0x17U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+50,((0x6fU == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgIData(oldp+51,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en))))),32);
    bufp->chgIData(oldp+52,((0xfffff000U & (vlSelfRef.inst 
                                            & (- (IData)(
                                                         (0x37U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.inst))))))),32);
    bufp->chgIData(oldp+53,(((vlSelfRef.PC + (0xfffff000U 
                                              & vlSelfRef.inst)) 
                             & (- (IData)((0x17U == 
                                           (0x0000007fU 
                                            & vlSelfRef.inst)))))),32);
    bufp->chgIData(oldp+54,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result),32);
    bufp->chgIData(oldp+55,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en))) 
                             & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x0000000fU))] 
                                < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm))),32);
    bufp->chgIData(oldp+56,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en))) 
                             & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                                 ? ((IData)(4U) + vlSelfRef.PC)
                                 : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))),32);
    bufp->chgIData(oldp+57,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              - vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en))))),32);
    bufp->chgIData(oldp+58,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en))) 
                             & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x0000000fU))] 
                                < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x00000014U))]))),32);
    bufp->chgIData(oldp+59,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              ^ vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en))))),32);
    bufp->chgIData(oldp+60,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              | vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x00000014U))]) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en))))),32);
    bufp->chgIData(oldp+61,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                               ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7
                               : ((IData)(4U) + vlSelfRef.PC)) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en))))),32);
    bufp->chgIData(oldp+62,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              >> (0x0000001fU & (vlSelfRef.inst 
                                                 >> 0x00000014U))) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en))))),32);
    bufp->chgIData(oldp+63,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__andi_en))) 
                             & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x0000000fU))] 
                                & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm))),32);
    bufp->chgIData(oldp+64,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              << (0x0000001fU & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                  [(0x0000000fU & (vlSelfRef.inst 
                                                   >> 0x00000014U))])) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sll_en))))),32);
    bufp->chgIData(oldp+65,((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                             [(0x0000000fU & (vlSelfRef.inst 
                                              >> 0x0000000fU))] 
                             & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x00000014U))] 
                                & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__and_en)))))),32);
    bufp->chgBit(oldp+66,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
                           | ((0x17U == (0x0000007fU 
                                         & vlSelfRef.inst)) 
                              | ((0x6fU == (0x0000007fU 
                                            & vlSelfRef.inst)) 
                                 | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en) 
                                    | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en) 
                                       | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en) 
                                          | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en) 
                                             | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)))))))))));
    bufp->chgIData(oldp+67,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                            [(0x0000000fU & (vlSelfRef.inst 
                                             >> 0x0000000fU))]),32);
    bufp->chgIData(oldp+68,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                            [(0x0000000fU & (vlSelfRef.inst 
                                             >> 0x00000014U))]),32);
    bufp->chgIData(oldp+69,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__wdata),32);
    bufp->chgIData(oldp+70,(((0x6fU == (0x0000007fU 
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
    bufp->chgIData(oldp+71,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[10U]),32);
    bufp->chgIData(oldp+72,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              ^ vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm) 
                             & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__andi_en))))),32);
    bufp->chgCData(oldp+73,((0x0000007fU & vlSelfRef.inst)),7);
    bufp->chgCData(oldp+74,((7U & (vlSelfRef.inst >> 0x0000000cU))),3);
    bufp->chgCData(oldp+75,((vlSelfRef.inst >> 0x00000019U)),7);
    bufp->chgCData(oldp+76,((0x0000001fU & (vlSelfRef.inst 
                                            >> 7U))),5);
    bufp->chgCData(oldp+77,((0x0000001fU & (vlSelfRef.inst 
                                            >> 0x0000000fU))),5);
    bufp->chgCData(oldp+78,((0x0000001fU & (vlSelfRef.inst 
                                            >> 0x00000014U))),5);
    bufp->chgBit(oldp+79,(((0x00100073U == vlSelfRef.inst) 
                           | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_12) 
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
                                                            | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en) 
                                                               | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en) 
                                                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)))))))))))))))));
    bufp->chgBit(oldp+80,((0x13U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+81,((0U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+82,((0x67U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+83,((0x33U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+84,((0U == (vlSelfRef.inst >> 0x00000019U))));
    bufp->chgBit(oldp+85,((3U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+86,((2U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+87,((4U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+88,((0x23U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+89,((3U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+90,((0x63U == (0x0000007fU & vlSelfRef.inst))));
    bufp->chgBit(oldp+91,((1U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+92,((0x20U == (vlSelfRef.inst 
                                     >> 0x00000019U))));
    bufp->chgBit(oldp+93,((6U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+94,((5U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    bufp->chgBit(oldp+95,((7U == (7U & (vlSelfRef.inst 
                                        >> 0x0000000cU)))));
    Vtop___024root__trace_chg_dtype____0(vlSelf, bufp, 96, vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR);
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
