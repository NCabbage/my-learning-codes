#ifndef NPC_H__
#define NPC_H__

#include <riscv.h>

#define DEVICE_BASE 0x10000000

#define SERIAL_PORT		(DEVICE_BASE)
#define RTC_ADDR			(DEVICE_BASE + 0x00000004)

#endif
