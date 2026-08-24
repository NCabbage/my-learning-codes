#include <mtrace.h>

static FILE *mtrace_log = NULL;

void mtrace_init(){
	mtrace_log = fopen("build/mtrace-log.txt", "w");
	
	if(!mtrace_log){
		mtrace_log = stderr;
	}
}

void mtrace_write(char WR, vaddr_t addr, uint32_t val, vaddr_t pc){
	MTRACE_LOG(mtrace_log, "%c 0x%08x 0x%08x PC=0x%08x\n", WR, addr, data, pc);
}
