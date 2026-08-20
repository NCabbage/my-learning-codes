#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  putch('A');
  return 0;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented vsprintf");
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  
  char *p = out;				//save original output address -- out 
  const char *f = fmt;
  
  while(*f){
  	if(*f == '%'){
  		f ++;
  		
  		if(*f == 's'){
			char *str = va_arg(args, char*);
  			while(*str){
  				*p = *str;
  				p ++;
  				str ++;		//copy one by one
  			}
  			f ++;
  			
  		}else if(*f == 'd'){
  			int num = va_arg(args, int);
  			char cnt[32];
  			int i=0;
  			if(num ==  0){
  				*p = '0';
  				p ++;
  			}
  			
  			while(num){
  				cnt[i] = (num % 10) + '0';
//  				putch(cnt[i]);
//  				putch('\n');
  				i ++;
  				num = num / 10;
  			}
 			
  			while(i){
  				*p = cnt[i];
  				putch(cnt[i]);
   				putch('\n');
  				i --;
  				p ++;
  			}
  		f ++;
  		}
  		
  	}else{
  		*p = *f;
  		p ++;
  		f ++;
  	}
  }
  
  
  *p = '\0';
  va_end(args);
  return p - out;				//return the number of written characters

}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented snprintf");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented vsnprintf");
}

#endif
