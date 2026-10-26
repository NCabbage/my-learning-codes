#include <assert.h>
#include <dlfcn.h>
#include "common.h"
#include "debug.h"
#include <stddef.h>
#include "trace.h"
#include "color.h"
#include "paddr.h"
#include "difftest_def.h"
#include "Vtop.h"
#include "Vtop___024root.h"

extern Vtop* top;

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, uint32_t *pc, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#if CONFIG_DIFFTEST

static bool is_skip_ref = false;
static int skip_dut_nr_inst = 0;

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = reinterpret_cast<decltype(ref_difftest_memcpy)>(dlsym(handle, "difftest_memcpy"));
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = reinterpret_cast<decltype(ref_difftest_regcpy)>(dlsym(handle, "difftest_regcpy"));
  assert(ref_difftest_regcpy);

  ref_difftest_exec = reinterpret_cast<decltype(ref_difftest_exec)>(dlsym(handle, "difftest_exec"));
  assert(ref_difftest_exec);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&top->rootp->top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[0], &top->PC, DIFFTEST_TO_REF);
}//注意top->rootp->top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR在不同设计中会变

void difftest_step(uint64_t n){
	ref_difftest_exec(n);
}

bool difftest_check(){
	uint32_t ref_gpr[16];
	uint32_t ref_pc		;
	
	ref_difftest_regcpy(ref_gpr, &ref_pc, DIFFTEST_TO_DUT);

	for(int i=0;i<16;i++){
		if(ref_gpr[i] != top->rootp->top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[i]){
			Log("%s", ANSI_FMT("Difftest is wrong!!!!", ANSI_FG_RED));
			printf("npc PC : %x			ref PC : %x\n", top->PC, ref_pc);
			for(int i=0;i<16;i++){
				printf("dut gpr[%d]:0x%08x		ref gpr[%d]:0x%08x %s\n", i\
					, top->rootp->top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[i], i, ref_gpr[i]\
					, (top->rootp->top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[i] != ref_gpr[i]) ? "<-- MISMATCH" : "");
			}
			return false;	
		}
	}

	if(ref_pc != top->PC){
			Log("%s", ANSI_FMT("Difftest is wrong!!!!", ANSI_FG_RED));
			printf("npc PC : %x			ref PC : %x\n", top->PC, ref_pc);
			for(int i=0;i<32;i++){
				printf("dut gpr[%d]:0x%08x		ref gpr[%d]:0x%08x %s\n", i\
					, top->rootp->top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[i], i, ref_gpr[i]\
					, (top->rootp->top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[i] != ref_gpr[i]) ? "<-- MISMATCH" : "");
			}
			return false;
	}
	return true;
}

#else
//void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif

