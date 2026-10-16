#include <stdio.h>
#include "trace.h"
#include <unistd.h>

static FILE *mtrace_log = NULL;

void mtrace_init(){
	mtrace_log = fopen("build/npc-memory-log.txt", "w");

	char cwd[1024];
getcwd(cwd, sizeof(cwd));
fprintf(stderr, "cwd = %s\n", cwd);

	if(!mtrace_log){
		mtrace_log = stderr;
	}
}

void mtrace_write(char WR, uint32_t addr, uint32_t val, uint32_t pc){
	if(addr >= START && addr <= END)
	MTRACE_LOG("%c addr: 0x%08x data: 0x%08x PC: 0x%08x\n", WR, addr, val, pc);
}