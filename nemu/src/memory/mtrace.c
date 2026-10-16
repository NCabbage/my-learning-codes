#include <mtrace.h>

#define START	0x80000000
#define END		0xffffffff

static FILE *mtrace_log = NULL;

void mtrace_init(){
	mtrace_log = fopen("/build/mtrace-log.txt", "w");
	
	if(!mtrace_log){
		mtrace_log = stderr;
	}
}

void mtrace_write(char WR, vaddr_t addr, uint32_t val, vaddr_t pc){
	if(addr >= START && addr <= END)
	MTRACE_LOG("%c addr: 0x%08x data: 0x%08x PC: 0x%08x\n", WR, addr, val, pc);
}
