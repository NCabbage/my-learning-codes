#include <am.h>
#include <nemu.h>
#include <stdio.h>


void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	printf("RTC_ADDR: %d", RTC_ADDR);
	uint32_t lo = inl(0xa0000048);
	uint32_t hi = inl(0xa000004c);
	uptime -> us = ((uint64_t)hi << 32) | lo;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  	rtc->second = 0;
  	rtc->minute = 0;
  	rtc->hour   = 0;
  	rtc->day    = 0;
  	rtc->month  = 0;
  	rtc->year   = 1900;
}
