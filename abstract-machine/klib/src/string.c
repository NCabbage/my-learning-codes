#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  panic("Not implemented strlen");
}

char *strcpy(char *dst, const char *src) {
  char *p = dst;			//keep old address

  while(*src){
  	*p = *src;
  	src ++;
  	p ++;
  }
  
  *p = '\0';
  
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented strncpy");
}

char *strcat(char *dst, const char *src) {
  char *p = dst;
  
  while(*p){
  	p ++;
  }

  while(*src){
  	*p = *src;
  	p ++;
  	src ++;
  }
  
  *p = '\0';
  
  char *debug = dst;
  
  while(*debug){
  	putch(*debug);
  	debug ++;
  }
  
  putch('\n');
  
  return dst;
}

int strcmp(const char *s1, const char *s2) {
	while(*s1 && *s2 && *s1 == *s2){
		s1 ++;
		s2 ++;
	}
	
	return *s1 - *s2;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  panic("Not implemented strncmp");
}

void *memset(void *s, int c, size_t n) {
  unsigned char *p = (unsigned char *)s;			//void* is a generic pointer
  unsigned char val = (unsigned char)c;
  
  for(size_t i=0;i<n;i++)							//size_t is the value of sizeof();
  	p[i] = val;
  	
  	
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented memmove");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented memcpy");
}

int memcmp(const void *s1, const void *s2, size_t n) {
  unsigned char *p1 = (unsigned char*) s1;
  unsigned char *p2 = (unsigned char*) s2;
  
  while(n){
  	if(*p1 != *p2) return 1;
  	n --;
  }
  
  return 0;
}

#endif
