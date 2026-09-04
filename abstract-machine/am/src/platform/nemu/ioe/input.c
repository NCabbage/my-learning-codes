#include <am.h>
#include <nemu.h>
#include <stdio.h>
#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
	uint32_t status = inl(0x00000060);
	if(status == AM_KEY_NONE){
		kbd->keydown = 0;
		kbd->keycode = AM_KEY_NONE;
	}
	else{
	printf("yes\n");
		kbd->keydown = 1;
		kbd->keycode = status;
	}
}
