#include<trace.h>

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
		printf("PC:%x\n", b.pc[num]);
	}
	
	return true;
}

bool buf_write(vaddr_t pc){
	if(isEmpty()) b.pc[b.tail] = pc;

	printf("debug:%x\n", pc);
	if(isFull()){
		b.head = (b.head + 1) % BUF_SIZE;
		b.tail = (b.tail + 1) % BUF_SIZE;
		b.pc[b.tail] = pc;
	}else{
		b.tail ++;
		b.pc[b.tail] = pc;
	}
	
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
