#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define STR(x) #x
#pragma message "RTC_ADDR is " STR(RTC_ADDR)

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	uint32_t lo = inl(0xa0000048);
	uint32_t hi = inl(0xa0000048 + 4);
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
