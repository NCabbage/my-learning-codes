#include <am.h>
#include <nemu.h>
#include <stdio.h>


void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
    uint32_t lo = *(volatile uint32_t *)0xa0000048;
    uint32_t hi = *(volatile uint32_t *)0xa000004c;
	uptime -> us = ((uint64_t)hi << 32) | lo;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {

}
