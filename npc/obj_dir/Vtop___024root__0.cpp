// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

void Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ raddre, IData/*31:0*/ &pmem_read__Vfuncrtn);

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (0x000000ffU 
                                                & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000fU))] 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelfRef.inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | ((0x00000fe0U 
                                                       & (vlSelfRef.inst 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001fU 
                                                         & (vlSelfRef.inst 
                                                            >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 = (vlSelfRef.PC 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelfRef.inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | ((0x00000800U 
                                                       & (vlSelfRef.inst 
                                                          << 4U)) 
                                                      | ((0x000007e0U 
                                                          & (vlSelfRef.inst 
                                                             >> 0x00000014U)) 
                                                         | (0x0000001eU 
                                                            & (vlSelfRef.inst 
                                                               >> 7U))))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000fU))] 
                                                == vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en 
        = (IData)((0x00000063U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en 
        = (IData)((0x00001063U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en 
        = (IData)((0x00002023U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en 
        = (IData)((0x00000023U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result 
        = ((vlSelfRef.PC + (((- (IData)((vlSelfRef.inst 
                                         >> 0x0000001fU))) 
                             << 0x00000014U) | ((((0x000001feU 
                                                   & (vlSelfRef.inst 
                                                      >> 0x0000000bU)) 
                                                  | (1U 
                                                     & (vlSelfRef.inst 
                                                        >> 0x00000014U))) 
                                                 << 0x0000000bU) 
                                                | (0x000007feU 
                                                   & (vlSelfRef.inst 
                                                      >> 0x00000014U))))) 
           & (- (IData)((0x6fU == (0x0000007fU & vlSelfRef.inst)))));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en 
        = (IData)((0x00003013U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en 
        = (IData)((0x00003033U == (0xfe00707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en 
        = (IData)((0x00004033U == (0xfe00707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en 
        = (IData)((0x00006033U == (0xfe00707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en 
        = (IData)((0x00000013U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9 = (IData)(
                                                       (0x00000033U 
                                                        == 
                                                        (0x0000707fU 
                                                         & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en 
        = (IData)((0x00000067U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm 
        = (((- (IData)((vlSelfRef.inst >> 0x0000001fU))) 
            << 0x0000000cU) | (vlSelfRef.inst >> 0x00000014U));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en 
        = (IData)((0x00002003U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en 
        = (IData)((0x00004003U == (0x0000707fU & vlSelfRef.inst)));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr 
        = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
           & ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en))) 
              | (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en)))));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en 
        = ((0x20U == (vlSelfRef.inst >> 0x00000019U)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en 
        = ((0U == (vlSelfRef.inst >> 0x00000019U)) 
           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 = ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.inst)) 
                                                | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000fU))] 
                                                + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4 = ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en) 
                                                | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__wmask 
        = (0x0000000fU & ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en)
                           ? (0x8421U >> (0x0000000cU 
                                          & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr 
                                             << 2U)))
                           : (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en)))));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result 
        = (0xfffffffeU & ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11 = ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en) 
                                                 | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en) 
                                                    | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en) 
                                                       | ((0x37U 
                                                           == 
                                                           (0x0000007fU 
                                                            & vlSelfRef.inst)) 
                                                          | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)))));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_PC__DOT__next_PC 
        = ((0x6fU == (0x0000007fU & vlSelfRef.inst))
            ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result
            : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en)
                ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result
                : ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en))) 
                   & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                       ? ((IData)(4U) + vlSelfRef.PC)
                       : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))));
    if (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en) {
        vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
               & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en))));
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                               >> 2U), vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
        vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
            = vlSelfRef.__Vfunc_pmem_read__3__Vfuncout;
    } else {
        vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
               & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en))));
        if (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en) {
            if ((2U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr)) {
                if ((1U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr)) {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                          (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                                           >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_3__pmem_read);
                    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                        = (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_3__pmem_read 
                           >> 0x00000018U);
                } else {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                          (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                                           >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_2__pmem_read);
                    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                        = (0x000000ffU & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_2__pmem_read 
                                          >> 0x00000010U));
                }
            } else if ((1U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr)) {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                      (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                                       >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_1__pmem_read);
                vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                    = (0x000000ffU & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_1__pmem_read 
                                      >> 8U));
            } else {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                      (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                                       >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_0__pmem_read);
                vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                    = (0x000000ffU & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_0__pmem_read);
            }
        } else {
            vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata = 0U;
        }
    }
    vlSelfRef.error = (1U & ((~ ((0U == vlSelfRef.inst) 
                                 | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
                                    | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en) 
                                       | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en) 
                                          | ((0x17U 
                                              == (0x0000007fU 
                                                  & vlSelfRef.inst)) 
                                             | ((0x6fU 
                                                 == 
                                                 (0x0000007fU 
                                                  & vlSelfRef.inst)) 
                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en) 
                                                   | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en) 
                                                      | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en) 
                                                         | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en) 
                                                            | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en) 
                                                               | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en) 
                                                                  | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en)))))))))))))) 
                             | (IData)((0x01080800U 
                                        == (0x01080800U 
                                            & vlSelfRef.inst)))));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__wdata 
        = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
            ? ((IData)(4U) + vlSelfRef.PC) : ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                                               ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata
                                               : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en)
                                                   ? 
                                                  (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                                                   & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en))))
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en)
                                                    ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result
                                                    : 
                                                   ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en)
                                                     ? 
                                                    ((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                      [
                                                      (0x0000000fU 
                                                       & (vlSelfRef.inst 
                                                          >> 0x0000000fU))] 
                                                      + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                      [
                                                      (0x0000000fU 
                                                       & (vlSelfRef.inst 
                                                          >> 0x00000014U))]) 
                                                     & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en))))
                                                     : 
                                                    ((0x37U 
                                                      == 
                                                      (0x0000007fU 
                                                       & vlSelfRef.inst))
                                                      ? 
                                                     (0xfffff000U 
                                                      & (vlSelfRef.inst 
                                                         & (- (IData)(
                                                                      (0x37U 
                                                                       == 
                                                                       (0x0000007fU 
                                                                        & vlSelfRef.inst))))))
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x0000007fU 
                                                        & vlSelfRef.inst))
                                                       ? 
                                                      ((vlSelfRef.PC 
                                                        + 
                                                        (0xfffff000U 
                                                         & vlSelfRef.inst)) 
                                                       & (- (IData)(
                                                                    (0x17U 
                                                                     == 
                                                                     (0x0000007fU 
                                                                      & vlSelfRef.inst)))))
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x0000007fU 
                                                         & vlSelfRef.inst))
                                                        ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result
                                                        : 
                                                       ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en)
                                                         ? 
                                                        ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en))) 
                                                         & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                            [
                                                            (0x0000000fU 
                                                             & (vlSelfRef.inst 
                                                                >> 0x0000000fU))] 
                                                            < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm))
                                                         : 
                                                        ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en)
                                                          ? 
                                                         ((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                           [
                                                           (0x0000000fU 
                                                            & (vlSelfRef.inst 
                                                               >> 0x0000000fU))] 
                                                           - vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                           [
                                                           (0x0000000fU 
                                                            & (vlSelfRef.inst 
                                                               >> 0x00000014U))]) 
                                                          & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en))))
                                                          : 
                                                         ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en)
                                                           ? 
                                                          ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en))) 
                                                           & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                              [
                                                              (0x0000000fU 
                                                               & (vlSelfRef.inst 
                                                                  >> 0x0000000fU))] 
                                                              < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                              [
                                                              (0x0000000fU 
                                                               & (vlSelfRef.inst 
                                                                  >> 0x00000014U))]))
                                                           : 
                                                          ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en)
                                                            ? 
                                                           ((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                             [
                                                             (0x0000000fU 
                                                              & (vlSelfRef.inst 
                                                                 >> 0x0000000fU))] 
                                                             ^ vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                             [
                                                             (0x0000000fU 
                                                              & (vlSelfRef.inst 
                                                                 >> 0x00000014U))]) 
                                                            & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en))))
                                                            : 
                                                           ((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                             [
                                                             (0x0000000fU 
                                                              & (vlSelfRef.inst 
                                                                 >> 0x0000000fU))] 
                                                             | vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                             [
                                                             (0x0000000fU 
                                                              & (vlSelfRef.inst 
                                                                 >> 0x00000014U))]) 
                                                            & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en))))))))))))))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        ((((IData)(vlSelfRef.rst_n) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                          << 2U) 
                                                         | (((vlSelfRef.inst 
                                                              != vlSelfRef.__Vtrigprevexpr___TOP__inst__0) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.clk) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__inst__0 = vlSelfRef.inst;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((2ULL & vlSelfRef.__VicoTriggered[0U])) {
                Vtop___024root___ico_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
    }
    return (__VicoExecute);
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
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

void Vtop___024unit____Vdpiimwrap_halt_TOP____024unit(IData/*31:0*/ inst, IData/*31:0*/ a0);
void Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ waddr, IData/*31:0*/ wdata, IData/*31:0*/ wmask);

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0;
    __VdlyVal__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0 = 0;
    CData/*3:0*/ __VdlyDim0__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0;
    __VdlyDim0__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0 = 0;
    CData/*0:0*/ __VdlySet__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0;
    __VdlySet__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0 = 0;
    // Body
    Vtop___024unit____Vdpiimwrap_halt_TOP____024unit(vlSelfRef.inst, vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[10U]);
    if (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr 
                                                                >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                               [
                                                               (0x0000000fU 
                                                                & (vlSelfRef.inst 
                                                                   >> 0x00000014U))], vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__wmask);
    } else if (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en) {
        Vtop___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr 
                                                                >> 2U), 
                                                               (((2U 
                                                                  & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                                                                  ? 
                                                                 (((1U 
                                                                    & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                                                                    ? 
                                                                   (0x0000ff00U 
                                                                    & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                                       [
                                                                       (0x0000000fU 
                                                                        & (vlSelfRef.inst 
                                                                           >> 0x00000014U))] 
                                                                       << 8U))
                                                                    : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5)) 
                                                                  << 0x00000010U)
                                                                  : 
                                                                 ((1U 
                                                                   & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr)
                                                                   ? 
                                                                  ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                                                                   << 8U)
                                                                   : (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5))) 
                                                                & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en)))), (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__wmask));
    }
    __VdlySet__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0 = 0U;
    if ((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11) 
          | ((0x17U == (0x0000007fU & vlSelfRef.inst)) 
             | ((0x6fU == (0x0000007fU & vlSelfRef.inst)) 
                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en) 
                   | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en) 
                      | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en)))))) 
         & (0U != (0x0000000fU & (vlSelfRef.inst >> 7U))))) {
        __VdlyVal__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0 
            = vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__wdata;
        __VdlyDim0__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0 
            = (0x0000000fU & (vlSelfRef.inst >> 7U));
        __VdlySet__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0 = 1U;
    }
    if (__VdlySet__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0) {
        vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[__VdlyDim0__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0] 
            = __VdlyVal__top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR__v0;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5 = (0x000000ffU 
                                                & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 = (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000fU))] 
                                                + (
                                                   ((- (IData)(
                                                               (vlSelfRef.inst 
                                                                >> 0x0000001fU))) 
                                                    << 0x0000000cU) 
                                                   | ((0x00000fe0U 
                                                       & (vlSelfRef.inst 
                                                          >> 0x00000014U)) 
                                                      | (0x0000001fU 
                                                         & (vlSelfRef.inst 
                                                            >> 7U)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8 = (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000fU))] 
                                                == vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x00000014U))]);
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                [(0x0000000fU 
                                                  & (vlSelfRef.inst 
                                                     >> 0x0000000fU))] 
                                                + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm);
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr 
        = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6 
           & ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en))) 
              | (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en)))));
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result 
        = (0xfffffffeU & ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en))) 
                          & vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0));
    if (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en) {
        vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
               & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en))));
        Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                               >> 2U), vlSelfRef.__Vfunc_pmem_read__3__Vfuncout);
        vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
            = vlSelfRef.__Vfunc_pmem_read__3__Vfuncout;
    } else {
        vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
            = (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
               & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en))));
        if (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en) {
            if ((2U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr)) {
                if ((1U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr)) {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                          (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                                           >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_3__pmem_read);
                    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                        = (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_3__pmem_read 
                           >> 0x00000018U);
                } else {
                    Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                          (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                                           >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_2__pmem_read);
                    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                        = (0x000000ffU & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_2__pmem_read 
                                          >> 0x00000010U));
                }
            } else if ((1U & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr)) {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                      (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                                       >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_1__pmem_read);
                vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                    = (0x000000ffU & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_1__pmem_read 
                                      >> 8U));
            } else {
                Vtop___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                                      (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr 
                                                                       >> 2U), vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_0__pmem_read);
                vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata 
                    = (0x000000ffU & vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT____VlemCall_0__pmem_read);
            }
        } else {
            vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata = 0U;
        }
    }
    vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__wmask 
        = (0x0000000fU & ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en)
                           ? (0x8421U >> (0x0000000cU 
                                          & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr 
                                             << 2U)))
                           : (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en)))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__1
            vlSelfRef.PC = ((IData)(vlSelfRef.rst_n)
                             ? (((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3))
                                 ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_PC__DOT__next_PC
                                 : ((IData)(4U) + vlSelfRef.PC))
                             : 0x80000000U);
            vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7 
                = (vlSelfRef.PC + (((- (IData)((vlSelfRef.inst 
                                                >> 0x0000001fU))) 
                                    << 0x0000000cU) 
                                   | ((0x00000800U 
                                       & (vlSelfRef.inst 
                                          << 4U)) | 
                                      ((0x000007e0U 
                                        & (vlSelfRef.inst 
                                           >> 0x00000014U)) 
                                       | (0x0000001eU 
                                          & (vlSelfRef.inst 
                                             >> 7U))))));
            vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result 
                = ((vlSelfRef.PC + (((- (IData)((vlSelfRef.inst 
                                                 >> 0x0000001fU))) 
                                     << 0x00000014U) 
                                    | ((((0x000001feU 
                                          & (vlSelfRef.inst 
                                             >> 0x0000000bU)) 
                                         | (1U & (vlSelfRef.inst 
                                                  >> 0x00000014U))) 
                                        << 0x0000000bU) 
                                       | (0x000007feU 
                                          & (vlSelfRef.inst 
                                             >> 0x00000014U))))) 
                   & (- (IData)((0x6fU == (0x0000007fU 
                                           & vlSelfRef.inst)))));
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_comb__TOP__0
            vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_PC__DOT__next_PC 
                = ((0x6fU == (0x0000007fU & vlSelfRef.inst))
                    ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result
                    : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en)
                        ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result
                        : ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en))) 
                           & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)
                               ? ((IData)(4U) + vlSelfRef.PC)
                               : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7))));
            vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__wdata 
                = ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3)
                    ? ((IData)(4U) + vlSelfRef.PC) : 
                   ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_4)
                     ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata
                     : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en)
                         ? (vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 
                            & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en))))
                         : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en)
                             ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result
                             : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en)
                                 ? ((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                     [(0x0000000fU 
                                       & (vlSelfRef.inst 
                                          >> 0x0000000fU))] 
                                     + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                     [(0x0000000fU 
                                       & (vlSelfRef.inst 
                                          >> 0x00000014U))]) 
                                    & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en))))
                                 : ((0x37U == (0x0000007fU 
                                               & vlSelfRef.inst))
                                     ? (0xfffff000U 
                                        & (vlSelfRef.inst 
                                           & (- (IData)(
                                                        (0x37U 
                                                         == 
                                                         (0x0000007fU 
                                                          & vlSelfRef.inst))))))
                                     : ((0x17U == (0x0000007fU 
                                                   & vlSelfRef.inst))
                                         ? ((vlSelfRef.PC 
                                             + (0xfffff000U 
                                                & vlSelfRef.inst)) 
                                            & (- (IData)(
                                                         (0x17U 
                                                          == 
                                                          (0x0000007fU 
                                                           & vlSelfRef.inst)))))
                                         : ((0x6fU 
                                             == (0x0000007fU 
                                                 & vlSelfRef.inst))
                                             ? vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result
                                             : ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en)
                                                 ? 
                                                ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en))) 
                                                 & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                    [
                                                    (0x0000000fU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x0000000fU))] 
                                                    < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm))
                                                 : 
                                                ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en)
                                                  ? 
                                                 ((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                   [
                                                   (0x0000000fU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x0000000fU))] 
                                                   - vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                   [
                                                   (0x0000000fU 
                                                    & (vlSelfRef.inst 
                                                       >> 0x00000014U))]) 
                                                  & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en))))
                                                  : 
                                                 ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en)
                                                   ? 
                                                  ((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en))) 
                                                   & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                      [
                                                      (0x0000000fU 
                                                       & (vlSelfRef.inst 
                                                          >> 0x0000000fU))] 
                                                      < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                      [
                                                      (0x0000000fU 
                                                       & (vlSelfRef.inst 
                                                          >> 0x00000014U))]))
                                                   : 
                                                  ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en)
                                                    ? 
                                                   ((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                     [
                                                     (0x0000000fU 
                                                      & (vlSelfRef.inst 
                                                         >> 0x0000000fU))] 
                                                     ^ vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                     [
                                                     (0x0000000fU 
                                                      & (vlSelfRef.inst 
                                                         >> 0x00000014U))]) 
                                                    & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en))))
                                                    : 
                                                   ((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                     [
                                                     (0x0000000fU 
                                                      & (vlSelfRef.inst 
                                                         >> 0x0000000fU))] 
                                                     | vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                                     [
                                                     (0x0000000fU 
                                                      & (vlSelfRef.inst 
                                                         >> 0x00000014U))]) 
                                                    & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en))))))))))))))));
        }
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_n)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_n__1 = vlSelfRef.rst_n;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/top.v", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/top.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/cappage/ysyx-workbench/npc/vsrc/top/top.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
}
#endif  // VL_DEBUG
