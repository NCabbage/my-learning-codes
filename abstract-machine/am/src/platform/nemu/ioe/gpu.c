#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

void __am_gpu_init() {
	int i;
	int val = inl(VGACTL_ADDR);
	int w = (val & 0xffff0000) >> 16;  // TODO: get the correct width
	int h = (val & 0xffff);  // TODO: get the correct height
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	
	for (i = 0; i < w * h; i ++) fb[i] = i;
	
	outl(SYNC_ADDR, 1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {
	int val;
	
	val = inl(VGACTL_ADDR);
	
  	*cfg = (AM_GPU_CONFIG_T) {
    	.present = true, .has_accel = false,
    	.width = (val & 0xffff0000) >> 16, .height = (val & 0xffff),
    	.vmemsz = 0
  	};
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
	int val = inl(VGACTL_ADDR);
	int x = ctl -> x;
	int y = ctl -> y;
	uint32_t *pixels = (uint32_t *)ctl -> pixels;
	int w = ctl -> w;
	int h = ctl -> h;
	int sw = (val & 0xffff0000) >> 16;
	
	for(int i=0;i<w*h;i++)
		fb[sw * (y+i/w) + x + i%h] = pixels[i];
	
  	if (ctl->sync) {
  		outl(SYNC_ADDR, 1);
  	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
