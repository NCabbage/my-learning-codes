/////////////////////////////////////////////mtrace

#include <stdio.h>
#include "trace.h"

static FILE *mtrace_log = NULL;

void mtrace_init(){
	mtrace_log = fopen("../build/npc-memory-log.txt", "w");

	if(!mtrace_log){
		mtrace_log = stderr;
	}
}

void mtrace_write(char WR, uint32_t addr, uint32_t val, uint32_t pc){
	if(addr >= START && addr <= END)
	MTRACE_LOG("%c addr: 0x%08x data: 0x%08x PC: 0x%08x\n", WR, addr, val, pc);
}

////////////////////////////////////////////itrace

iringbuf b;

bool buf_init(){
	b.head = 0;
	b.tail = 0;
	for(int i=0;i<BUF_SIZE;i++) b.pc[i] = 0;
	
	return true;
}

bool buf_read(){
	if(isEmpty()){
		printf("the trace buf is empty\n");
		return false;
	}
	
	for(int i=0;i<BUF_SIZE;i++){
		int num = (b.head + i) % BUF_SIZE;
		if((b.head + i) % BUF_SIZE != b.tail) printf("   %08x: %08x    ", b.pc[num], b.inst[num]);
		else printf("——>%08x: %08x    ", b.pc[num], b.inst[num]);
		
		char *p = b.p[num];
		void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  		disassemble(p, 128, (uint64_t)b.pc[num],  (uint8_t *)&b.inst[num], 4);
  		printf("%s\n", p);
	}
	
	return true;
}

bool buf_write(uint32_t pc, uint32_t i){
	if(isEmpty()){
		
	}
	if(isFull()){
		b.head = (b.head + 1) % BUF_SIZE;
		b.tail = (b.tail + 1) % BUF_SIZE;
	}else{
		b.tail ++;
	}
	
	b.pc[b.tail] = pc;
	b.inst[b.tail] = i;
	
	return true;
}

bool isEmpty(){
	if(b.head == b.tail) return true;
	return false;
}

bool isFull(){
	if(b.head == (b.tail + 1) % BUF_SIZE) return true;
	return false;
}