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

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <memory/paddr.h>

#define CONFIG_TEST 1

__EXPORT void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
	uint32_t *p = (uint32_t *)buf;
	
	if(direction == DIFFTEST_TO_REF){
  		for(int i=0;i<n/4;i++){
			paddr_write(addr+i*4, 4, p[i]);  		
		}
	}else{
		for(int i=0;i<n;i++){
			p[i] = paddr_read(addr+i*4, 4);
		}
	}
	
}

__EXPORT void difftest_regcpy(void *dut, uint32_t *pc, bool direction) {
	uint32_t *p = (uint32_t *)dut;

	cpu.pc = *pc;
	if(direction == DIFFTEST_TO_REF){
		for(int i=0;i<RISCV_GPR_NUM;i++){
			cpu.gpr[i] = p[i];
		}
	}else{
		*pc = cpu.pc;
		for(int i=0;i<RISCV_GPR_NUM;i++){
			p[i] = cpu.gpr[i];
		}
	}
}

__EXPORT void difftest_exec(uint64_t n) {
	cpu_exec(n);
}

__EXPORT void difftest_raise_intr(word_t NO) {
  assert(0);
}

__EXPORT void difftest_init(int port) {
  void init_mem();
  init_mem();
  /* Perform ISA dependent initialization. */
  init_isa();
}
