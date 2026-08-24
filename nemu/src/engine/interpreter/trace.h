#include <common.h>

#define BUF_SIZE 32

typedef struct _iringbuf{

	int head;
	int tail;
	vaddr_t pc[BUF_SIZE];
	

}iringbuf;

bool buf_init();
bool isEmpty();
bool isFull();
bool buf_read();
bool buf_write();
