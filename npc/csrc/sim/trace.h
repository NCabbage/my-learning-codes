/////////////////////////////////////////////////////mtrace
#include <stdint.h>

#define CONFIG_MTRACE 0
#define CONFIG_ITRACE 0

#define START	0x80000000
#define END		0xffffffff

#if CONFIG_MTRACE
#define MTRACE_LOG(fmt, ...) fprintf(mtrace_log, fmt, ##__VA_ARGS__)
#else
#define MTRACE_LOG(fmt, ...) ((void)0)
#endif



void mtrace_init();
void mtrace_write(char WR, uint32_t addr, uint32_t val, uint32_t pc);

/////////////////////////////////////////////////////itrace

#define BUF_SIZE 32

typedef struct _iringbuf{
	int head;
	int tail;
	uint32_t pc[BUF_SIZE];
	uint32_t inst[BUF_SIZE];
	char p[BUF_SIZE][128];
	
}iringbuf;

bool buf_init();
bool isEmpty();
bool isFull();
bool buf_read();
bool buf_write(uint32_t pc, uint32_t i);