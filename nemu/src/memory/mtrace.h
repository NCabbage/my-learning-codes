#include <common.h>

typedef struct _trace_buf{

	char WR;
	vaddr_t addr;
	uint32_t val;
	
}trace_buf;

#ifdef CONFIG_MTRACE
#define MTRACE_LOG(fmt, ...) fprintf(mtrace_log, fmt, ##__VA_ARGS__)
#else
#define MTRACE_LOG(fmt, ...) ((void)0)
#endif

void mtrace_init();
void mtrace_write(char WR, vaddr_t addr, uint32_t val, vaddr_t pc);

