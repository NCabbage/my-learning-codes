// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_dtype____0(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "$rootio", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "top", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ysyx_100022863_TOP", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"INST_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"PC_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"I_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"U_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"S_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"J_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"B_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"ebreak_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"addi_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"jalr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"add_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"lui_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"lw_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"lbu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"sw_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"sb_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"auipc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"jal_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"sltiu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"bne_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"sub_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"sltu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"xor_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"or_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"beq_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"srai_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"sh_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"andi_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"sll_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"and_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+20,0,"xori_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"bge_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"srli_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"bgeu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"slli_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"blt_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"bltu_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"slt_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"lh_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"sra_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"alu_addi_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"alu_jalr_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"alu_add_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"alu_lui_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"alu_lw_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"alu_lbu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"alu_sw_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"alu_sb_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"alu_auipc_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"alu_jal_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"alu_sltiu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"alu_bne_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"alu_sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"alu_sltu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"alu_xor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"alu_or_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"alu_beq_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"alu_srai_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"alu_sh_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"alu_andi_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"alu_sll_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"alu_and_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"alu_xori_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"alu_bge_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"alu_srli_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"alu_bgeu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"alu_slli_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"alu_blt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"alu_bltu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"alu_slt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"alu_lh_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"alu_sra_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"src1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"src2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"jump_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"next_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"a0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"wraddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"wrdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "inst_ysyx_100022863_ALU", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"src1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"src2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"I_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"U_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"S_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"J_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"B_imm",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"addi_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"jalr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"add_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"lui_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"lw_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"lbu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"sw_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"sb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"auipc_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"jal_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"sltiu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"bne_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"sub_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"sltu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"xor_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"or_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"beq_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"srai_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"sh_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"andi_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"sll_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"and_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+20,0,"xori_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"bge_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"srli_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"bgeu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"slli_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"blt_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"bltu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"slt_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"lh_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"sra_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"alu_jalr_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"alu_addi_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+65,0,"alu_add_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+66,0,"alu_lui_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"alu_lw_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+34,0,"alu_lbu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+35,0,"alu_sw_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+36,0,"alu_sb_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+68,0,"alu_jal_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+67,0,"alu_auipc_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"alu_sltiu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"alu_bne_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"alu_sub_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+37,0,"alu_sltu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"alu_xor_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"alu_or_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+74,0,"alu_beq_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"alu_srai_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+38,0,"alu_sh_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"alu_andi_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"alu_sll_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"alu_and_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"alu_xori_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"alu_bge_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"alu_srli_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"alu_bgeu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"alu_slli_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"alu_blt_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"alu_bltu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+39,0,"alu_slt_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+40,0,"alu_lh_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"alu_sra_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"ssrc1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+94,0,"ssrc2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "inst_ysyx_100022863_DECODE", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+50,0,"inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"rs1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"rs2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"rd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"I_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+57,0,"U_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+58,0,"S_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+59,0,"J_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"B_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+61,0,"ebreak_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"addi_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+2,0,"jalr_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+3,0,"add_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"lui_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"lw_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"lbu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"sw_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"sb_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"auipc_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"jal_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"sltiu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"bne_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"sub_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+11,0,"sltu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"xor_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"or_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+14,0,"beq_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+15,0,"srai_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"sh_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+17,0,"andi_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+18,0,"sll_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+19,0,"and_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+20,0,"xori_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+21,0,"bge_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"srli_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+23,0,"bgeu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+24,0,"slli_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"blt_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"bltu_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"slt_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"lh_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+29,0,"sra_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+53,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+95,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+96,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+97,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 6,0);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+99,0,"rs1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BUS(tracep,c+100,0,"rs2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 4,0);
    VL_TRACE_DECL_BIT(tracep,c+101,0,"inst_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"opcode_6_0_0010011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"funct3_14_12_000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+104,0,"opcode_6_0_1100111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"opcode_6_0_0110011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"funct7_31_25_0000000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+62,0,"opcode_6_0_0110111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+107,0,"opcode_6_0_0000011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"funct3_14_12_010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"funct3_14_12_100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+110,0,"opcode_6_0_0100011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+63,0,"opcode_6_0_0010111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+64,0,"opcode_6_0_1101111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"funct3_14_12_011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"opcode_6_0_1100011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+113,0,"funct3_14_12_001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+114,0,"funct7_31_25_0100000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+115,0,"funct3_14_12_110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+116,0,"funct3_14_12_101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+117,0,"funct3_14_12_111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "inst_ysyx_100022863_GPR", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+135,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+56,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+87,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+54,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+55,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"src1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"src2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"a0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);

    Vtop___024root__trace_init_dtype____0(vlSelf, tracep, "GPR", 0, c+118, VerilatedTraceSigDirection::NONE);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "inst_ysyx_100022863_PC", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+51,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+30,0,"jump_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+91,0,"next_PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+52,0,"PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_ysyx_100022863_LSU", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+49,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+6,0,"sw_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"sh_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"sb_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+43,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"lw_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+28,0,"lh_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"lbu_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+41,0,"raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+42,0,"rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+44,0,"sb_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+45,0,"sh_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+46,0,"sb_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"sh_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+48,0,"mem_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtop___024root__trace_init_dtype____0(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtop___024root__trace_init_dtype_sub____0(Vtop___024root* vlSelf, VerilatedFst* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_dtype_sub____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 15, 0);
    for (int i = 0; i < 16; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (15 - i), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+134,(0x00000020U),32);
    bufp->fullIData(oldp+135,(4U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Body
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar);

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+0,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm),32);
    bufp->fullBit(oldp+1,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en));
    bufp->fullBit(oldp+2,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__jalr_en));
    bufp->fullBit(oldp+3,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en));
    bufp->fullBit(oldp+4,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en));
    bufp->fullBit(oldp+5,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en));
    bufp->fullBit(oldp+6,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en));
    bufp->fullBit(oldp+7,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en));
    bufp->fullBit(oldp+8,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en));
    bufp->fullBit(oldp+9,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en));
    bufp->fullBit(oldp+10,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en));
    bufp->fullBit(oldp+11,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en));
    bufp->fullBit(oldp+12,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en));
    bufp->fullBit(oldp+13,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en));
    bufp->fullBit(oldp+14,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en));
    bufp->fullBit(oldp+15,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en));
    bufp->fullBit(oldp+16,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en));
    bufp->fullBit(oldp+17,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__andi_en));
    bufp->fullBit(oldp+18,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sll_en));
    bufp->fullBit(oldp+19,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__and_en));
    bufp->fullBit(oldp+20,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xori_en));
    bufp->fullBit(oldp+21,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bge_en));
    bufp->fullBit(oldp+22,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srli_en));
    bufp->fullBit(oldp+23,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bgeu_en));
    bufp->fullBit(oldp+24,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slli_en));
    bufp->fullBit(oldp+25,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__blt_en));
    bufp->fullBit(oldp+26,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bltu_en));
    bufp->fullBit(oldp+27,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slt_en));
    bufp->fullBit(oldp+28,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lh_en));
    bufp->fullBit(oldp+29,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sra_en));
    bufp->fullBit(oldp+30,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_5) 
                            | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en) 
                               | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en) 
                                  | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bge_en) 
                                     | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bgeu_en) 
                                        | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bltu_en) 
                                           | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__blt_en)))))))));
    bufp->fullIData(oldp+31,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__addi_en))))),32);
    bufp->fullIData(oldp+32,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jalr_result),32);
    bufp->fullIData(oldp+33,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lw_en))))),32);
    bufp->fullIData(oldp+34,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lbu_en))))),32);
    bufp->fullIData(oldp+35,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en))))),32);
    bufp->fullIData(oldp+36,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en))))),32);
    bufp->fullIData(oldp+37,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6))),32);
    bufp->fullIData(oldp+38,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_3 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en))))),32);
    bufp->fullIData(oldp+39,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slt_en))) 
                              & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9))),32);
    bufp->fullIData(oldp+40,((vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lh_en))))),32);
    bufp->fullIData(oldp+41,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__raddr),32);
    bufp->fullIData(oldp+42,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__rdata),32);
    bufp->fullIData(oldp+43,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr),32);
    bufp->fullIData(oldp+44,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sb_data),32);
    bufp->fullIData(oldp+45,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sh_data),32);
    bufp->fullCData(oldp+46,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__sb_mask),4);
    bufp->fullCData(oldp+47,((((~ (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en)) 
                               & (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en))
                               ? (0x0000000fU & (0x0c03U 
                                                 >> 
                                                 (0x0000000cU 
                                                  & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__waddr 
                                                     << 2U))))
                               : 0U)),4);
    bufp->fullIData(oldp+48,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__u_ysyx_100022863_LSU__DOT__mem_data),32);
    bufp->fullBit(oldp+49,(vlSelfRef.clk));
    bufp->fullIData(oldp+50,(vlSelfRef.inst),32);
    bufp->fullBit(oldp+51,(vlSelfRef.rst_n));
    bufp->fullIData(oldp+52,(vlSelfRef.PC),32);
    bufp->fullBit(oldp+53,(vlSelfRef.error));
    bufp->fullCData(oldp+54,((0x0000000fU & (vlSelfRef.inst 
                                             >> 0x0000000fU))),4);
    bufp->fullCData(oldp+55,((0x0000000fU & (vlSelfRef.inst 
                                             >> 0x00000014U))),4);
    bufp->fullCData(oldp+56,((0x0000000fU & (vlSelfRef.inst 
                                             >> 7U))),4);
    bufp->fullIData(oldp+57,((0xfffff000U & vlSelfRef.inst)),32);
    bufp->fullIData(oldp+58,((((- (IData)((vlSelfRef.inst 
                                           >> 0x0000001fU))) 
                               << 0x0000000cU) | ((0x00000fe0U 
                                                   & (vlSelfRef.inst 
                                                      >> 0x00000014U)) 
                                                  | (0x0000001fU 
                                                     & (vlSelfRef.inst 
                                                        >> 7U))))),32);
    bufp->fullIData(oldp+59,((((- (IData)((vlSelfRef.inst 
                                           >> 0x0000001fU))) 
                               << 0x00000014U) | ((
                                                   ((0x000001feU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x0000000bU)) 
                                                    | (1U 
                                                       & (vlSelfRef.inst 
                                                          >> 0x00000014U))) 
                                                   << 0x0000000bU) 
                                                  | (0x000007feU 
                                                     & (vlSelfRef.inst 
                                                        >> 0x00000014U))))),32);
    bufp->fullIData(oldp+60,((((- (IData)((vlSelfRef.inst 
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
    bufp->fullBit(oldp+61,((0x00100073U == vlSelfRef.inst)));
    bufp->fullBit(oldp+62,((0x37U == (0x0000007fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+63,((0x17U == (0x0000007fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+64,((0x6fU == (0x0000007fU & vlSelfRef.inst))));
    bufp->fullIData(oldp+65,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x0000000fU))] 
                               + vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x00000014U))]) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__add_en))))),32);
    bufp->fullIData(oldp+66,((0xfffff000U & (vlSelfRef.inst 
                                             & (- (IData)(
                                                          (0x37U 
                                                           == 
                                                           (0x0000007fU 
                                                            & vlSelfRef.inst))))))),32);
    bufp->fullIData(oldp+67,(((vlSelfRef.PC + (0xfffff000U 
                                               & vlSelfRef.inst)) 
                              & (- (IData)((0x17U == 
                                            (0x0000007fU 
                                             & vlSelfRef.inst)))))),32);
    bufp->fullIData(oldp+68,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_ALU__DOT__alu_jal_result),32);
    bufp->fullIData(oldp+69,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en))) 
                              & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                 [(0x0000000fU & (vlSelfRef.inst 
                                                  >> 0x0000000fU))] 
                                 < vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm))),32);
    bufp->fullIData(oldp+70,(((- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en))) 
                              & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                  ? ((IData)(4U) + vlSelfRef.PC)
                                  : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))),32);
    bufp->fullIData(oldp+71,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x0000000fU))] 
                               - vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x00000014U))]) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en))))),32);
    bufp->fullIData(oldp+72,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x0000000fU))] 
                               ^ vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x00000014U))]) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en))))),32);
    bufp->fullIData(oldp+73,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x0000000fU))] 
                               | vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x00000014U))]) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en))))),32);
    bufp->fullIData(oldp+74,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_7)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                : ((IData)(4U) + vlSelfRef.PC)) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en))))),32);
    bufp->fullIData(oldp+75,((VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                             [(0x0000000fU 
                                               & (vlSelfRef.inst 
                                                  >> 0x0000000fU))], 
                                             (0x0000001fU 
                                              & (vlSelfRef.inst 
                                                 >> 0x00000014U))) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en))))),32);
    bufp->fullIData(oldp+76,((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__andi_en)))))),32);
    bufp->fullIData(oldp+77,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x0000000fU))] 
                               << (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sll_en))))),32);
    bufp->fullIData(oldp+78,((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                              [(0x0000000fU & (vlSelfRef.inst 
                                               >> 0x0000000fU))] 
                              & (vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                 [(0x0000000fU & (vlSelfRef.inst 
                                                  >> 0x00000014U))] 
                                 & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__and_en)))))),32);
    bufp->fullIData(oldp+79,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x0000000fU))] 
                               ^ vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__I_imm) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xori_en))))),32);
    bufp->fullIData(oldp+80,(((VL_GTES_III(32, vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                           [(0x0000000fU 
                                             & (vlSelfRef.inst 
                                                >> 0x0000000fU))], vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                           [(0x0000000fU 
                                             & (vlSelfRef.inst 
                                                >> 0x00000014U))])
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                : ((IData)(4U) + vlSelfRef.PC)) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bge_en))))),32);
    bufp->fullIData(oldp+81,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x0000000fU))] 
                               >> (0x0000001fU & (vlSelfRef.inst 
                                                  >> 0x00000014U))) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srli_en))))),32);
    bufp->fullIData(oldp+82,((((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x0000000fU))] 
                                >= vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                [(0x0000000fU & (vlSelfRef.inst 
                                                 >> 0x00000014U))])
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                : ((IData)(4U) + vlSelfRef.PC)) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bgeu_en))))),32);
    bufp->fullIData(oldp+83,(((vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                               [(0x0000000fU & (vlSelfRef.inst 
                                                >> 0x0000000fU))] 
                               << (0x0000001fU & (vlSelfRef.inst 
                                                  >> 0x00000014U))) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slli_en))))),32);
    bufp->fullIData(oldp+84,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_9)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                : ((IData)(4U) + vlSelfRef.PC)) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__blt_en))))),32);
    bufp->fullIData(oldp+85,((((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                : ((IData)(4U) + vlSelfRef.PC)) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bltu_en))))),32);
    bufp->fullIData(oldp+86,((VL_SHIFTRS_III(32,32,5, vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                                             [(0x0000000fU 
                                               & (vlSelfRef.inst 
                                                  >> 0x0000000fU))], (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8)) 
                              & (- (IData)((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sra_en))))),32);
    bufp->fullBit(oldp+87,(((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                            | ((0x17U == (0x0000007fU 
                                          & vlSelfRef.inst)) 
                               | ((0x6fU == (0x0000007fU 
                                             & vlSelfRef.inst)) 
                                  | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en) 
                                     | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en) 
                                        | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en) 
                                           | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en) 
                                              | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en) 
                                                 | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en) 
                                                    | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__andi_en) 
                                                       | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sll_en) 
                                                          | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__and_en) 
                                                             | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xori_en) 
                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srli_en) 
                                                                   | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slli_en) 
                                                                      | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sra_en) 
                                                                         | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slt_en)))))))))))))))))));
    bufp->fullIData(oldp+88,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                             [(0x0000000fU & (vlSelfRef.inst 
                                              >> 0x0000000fU))]),32);
    bufp->fullIData(oldp+89,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                             [(0x0000000fU & (vlSelfRef.inst 
                                              >> 0x00000014U))]),32);
    bufp->fullIData(oldp+90,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__wdata),32);
    bufp->fullIData(oldp+91,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_PC__DOT__next_PC),32);
    bufp->fullIData(oldp+92,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[10U]),32);
    bufp->fullIData(oldp+93,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                             [(0x0000000fU & (vlSelfRef.inst 
                                              >> 0x0000000fU))]),32);
    bufp->fullIData(oldp+94,(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR
                             [(0x0000000fU & (vlSelfRef.inst 
                                              >> 0x00000014U))]),32);
    bufp->fullCData(oldp+95,((0x0000007fU & vlSelfRef.inst)),7);
    bufp->fullCData(oldp+96,((7U & (vlSelfRef.inst 
                                    >> 0x0000000cU))),3);
    bufp->fullCData(oldp+97,((vlSelfRef.inst >> 0x00000019U)),7);
    bufp->fullCData(oldp+98,((0x0000001fU & (vlSelfRef.inst 
                                             >> 7U))),5);
    bufp->fullCData(oldp+99,((0x0000001fU & (vlSelfRef.inst 
                                             >> 0x0000000fU))),5);
    bufp->fullCData(oldp+100,((0x0000001fU & (vlSelfRef.inst 
                                              >> 0x00000014U))),5);
    bufp->fullBit(oldp+101,(((0x00100073U == vlSelfRef.inst) 
                             | ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_15) 
                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sw_en) 
                                   | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sb_en) 
                                      | ((0x17U == 
                                          (0x0000007fU 
                                           & vlSelfRef.inst)) 
                                         | ((0x6fU 
                                             == (0x0000007fU 
                                                 & vlSelfRef.inst)) 
                                            | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltiu_en) 
                                               | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bne_en) 
                                                  | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sub_en) 
                                                     | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sltu_en) 
                                                        | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xor_en) 
                                                           | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__or_en) 
                                                              | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__beq_en) 
                                                                 | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srai_en) 
                                                                    | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sh_en) 
                                                                       | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__andi_en) 
                                                                          | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sll_en) 
                                                                             | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__and_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__xori_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bge_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__srli_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bgeu_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slli_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__blt_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__bltu_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__slt_en) 
                                                                                | ((IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__lh_en) 
                                                                                | (IData)(vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_DECODE__DOT__sra_en))))))))))))))))))))))))))))));
    bufp->fullBit(oldp+102,((0x13U == (0x0000007fU 
                                       & vlSelfRef.inst))));
    bufp->fullBit(oldp+103,((0U == (7U & (vlSelfRef.inst 
                                          >> 0x0000000cU)))));
    bufp->fullBit(oldp+104,((0x67U == (0x0000007fU 
                                       & vlSelfRef.inst))));
    bufp->fullBit(oldp+105,((0x33U == (0x0000007fU 
                                       & vlSelfRef.inst))));
    bufp->fullBit(oldp+106,((0U == (vlSelfRef.inst 
                                    >> 0x00000019U))));
    bufp->fullBit(oldp+107,((3U == (0x0000007fU & vlSelfRef.inst))));
    bufp->fullBit(oldp+108,((2U == (7U & (vlSelfRef.inst 
                                          >> 0x0000000cU)))));
    bufp->fullBit(oldp+109,((4U == (7U & (vlSelfRef.inst 
                                          >> 0x0000000cU)))));
    bufp->fullBit(oldp+110,((0x23U == (0x0000007fU 
                                       & vlSelfRef.inst))));
    bufp->fullBit(oldp+111,((3U == (7U & (vlSelfRef.inst 
                                          >> 0x0000000cU)))));
    bufp->fullBit(oldp+112,((0x63U == (0x0000007fU 
                                       & vlSelfRef.inst))));
    bufp->fullBit(oldp+113,((1U == (7U & (vlSelfRef.inst 
                                          >> 0x0000000cU)))));
    bufp->fullBit(oldp+114,((0x20U == (vlSelfRef.inst 
                                       >> 0x00000019U))));
    bufp->fullBit(oldp+115,((6U == (7U & (vlSelfRef.inst 
                                          >> 0x0000000cU)))));
    bufp->fullBit(oldp+116,((5U == (7U & (vlSelfRef.inst 
                                          >> 0x0000000cU)))));
    bufp->fullBit(oldp+117,((7U == (7U & (vlSelfRef.inst 
                                          >> 0x0000000cU)))));
    Vtop___024root__trace_full_dtype____0(vlSelf, bufp, 118, vlSelfRef.top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR);
}

VL_ATTR_COLD void Vtop___024root__trace_full_dtype____0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 16>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_dtype____0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[15]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[14]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[13]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[12]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[11]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[10]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[9]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[8]),32);
    bufp->fullIData(oldp+8,(__VdtypeVar[7]),32);
    bufp->fullIData(oldp+9,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+10,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+11,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+12,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+13,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+14,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+15,(__VdtypeVar[0]),32);
}
