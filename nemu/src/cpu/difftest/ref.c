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
#if CONFIG_TEST
  printf("[REF] memcpy: addr=0x%08x n=%zu dir=%d\n", addr, n, (int)direction);
  printf("[REF] buf first 4 bytes: %02x %02x %02x %02x\n",
         ((uint8_t*)buf)[0], ((uint8_t*)buf)[1],
         ((uint8_t*)buf)[2], ((uint8_t*)buf)[3]);
  printf("[REF] buf as word[0] = 0x%08x\n", ((uint32_t*)buf)[0]);
#endif

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
	
#if CONFIG_TEST
  printf("[REF] after copy, NEMU mem @0x%08x = 0x%08x\n",
         addr, paddr_read(addr, 4));
#endif	
}

__EXPORT void difftest_regcpy(void *dut, bool direction) {
	uint32_t *p = (uint32_t *)dut;

	if(direction == DIFFTEST_TO_REF){
		for(int i=0;i<RISCV_GPR_NUM;i++){
			printf("old!!!cpu.gpr[%d] : %x   p[%d] : %x\n", i, cpu.gpr[i], i, p[i]);
			cpu.gpr[i] = p[i];
			printf("new!!!cpu.gpr[%d] : %x   p[%d] : %x\n", i, cpu.gpr[i], i, p[i]);
		}
	}else{
		for(int i=0;i<RISCV_GPR_NUM;i++){
			p[i] = cpu.gpr[i];
		}
	}
}

__EXPORT void difftest_exec(uint64_t n) {
  	printf("[REF] before exec: pc=0x%08x\n", cpu->pc);
	execute(n);
	printf("[REF] after  exec: pc=0x%08x\n", cpu->pc);
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
