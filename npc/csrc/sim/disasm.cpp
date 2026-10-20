/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <capstone/capstone.h>
#include <assert.h>

#if defined(__APPLE__)
#define CS_LIB_SUFFIX "5.dylib"
#elif defined(__linux__)
#define CS_LIB_SUFFIX "so.5"
#else
#error "Unsupported platform"
#endif

static csh handle;

void init_disasm() {
  cs_arch arch = CS_ARCH_RISCV;
  cs_mode mode = CS_MODE_RISCV32;
	int ret = cs_open(arch, mode, &handle);
  assert(ret == CS_ERR_OK);
}

void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte) {
	cs_insn *insn;
	size_t count = cs_disasm(handle, code, nbyte, pc, 0, &insn);
  assert(count == 1);
  int ret = snprintf(str, size, "%s", insn->mnemonic);
  if (insn->op_str[0] != '\0') {
    snprintf(str + ret, size - ret, "\t%s", insn->op_str);
  }
  cs_free(insn, count);
}
