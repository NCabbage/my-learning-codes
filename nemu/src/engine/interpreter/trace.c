#include<trace.h>

iringbuf b;

bool buf_init(){
	b.head = 0;
	b.tail = 0;
	for(int i=0;i<BUF_SIZE;i++) b.pc[i] = 0;
	
	return true;
}

bool buf_read(){
	for(int i=0;i<BUF_SIZE;i++){
		int num = (b.head + i) % BUF_SIZE;
		printf("PC:%u\n", b.pc[num]);
	}
	return true;
}
