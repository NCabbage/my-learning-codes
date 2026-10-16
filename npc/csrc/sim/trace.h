#include <stdint.h>

#define CONFIG_MTRACE 1

#define START	0x80000000
#define END		0xffffffff

#if CONFIG_MTRACE
#define MTRACE_LOG(fmt, ...) fprintf(mtrace_log, fmt, ##__VA_ARGS__)
#else
#define MTRACE_LOG(fmt, ...) ((void)0)
#endif

typedef struct _trace_buf{

	char WR;
	uint32_t addr;
	uint32_t val;
	
}trace_buf;

void mtrace_init();
void mtrace_write(char WR, uint32_t addr, uint32_t val, uint32_t pc);
