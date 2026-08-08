/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <memory/paddr.h>
#include "memory/host.h"
/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
enum{
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_AND, TK_NOEQ, DEREF, TK_ADDR
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
	//位置和优先级有关
	{"0x[0-9a-fA-F]+", TK_ADDR},	
  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
	{"\\*", '*'},
	{"\\/", '/'},
	{"\[0-9]+", TK_NUM},
	{"\\-", '-'},
	{"\\(", '('},
	{"\\)", ')'},
	{"\\&&", TK_AND},
	{"\\!=", TK_NOEQ},

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED); //REG_EXTENDED is used to select mode//re be used to store the complied regular expression
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[6553600] __attribute__((used)) = {};							//告诉编译器，暂时不用不发警告，不要优化掉
static int nr_token __attribute__((used))  = 0;
bool dv = 1;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {			//pmatch.rm_so == 0 强制每个字符都扫，都得检测出来
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;									//从0开始，结束的位置就是长度

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        switch (rules[i].token_type) {
					case 256	: continue;
					case '+'	: break;
					case 257	: break;
					case 258  : break;
					case '*'	: break;
					case '/'	: break;
					case '-'	: break;
					case '('	: break;
					case ')'	: break;
					case 259	: break;
					case 260	: break;
					case 261	: break;
					case 262	: break;
					default : printf("no this type");
										break;
        }

				if(substr_len > 32){
					printf("too long!!!!");
					return 0;
				}
				tokens[nr_token].type = rules[i].token_type;
				memcpy(tokens[nr_token].str, substr_start, substr_len);
				tokens[nr_token].str[substr_len] = '\0';
				nr_token ++;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

uint32_t val(int x, int y){
	if(dv == 0) return 0;
	int pos = 0;
	int type = 0;
	int k = 0;						//bracket tag
	int flag = 1;

	if(y < 0) return 1;
	if(tokens[x].type == TK_ADDR){
	 	if(x == y){
	 		printf("str = %s, len = %lu\n", tokens[x].str, strlen(tokens[x].str));
	 		printf("here\n");
	 		return (uint32_t)strtol(tokens[x].str, NULL, 16);
		}else{
			switch(tokens[x+1].type){
			case '+' : return val(x, x) + val(x+2, y);break;
			case '-' : return val(x, x) - val(x+2, y);break;
			case '*' : return val(x, x) * val(x+2, y);break;
			case '/' : return val(x, x) / val(x+2, y);break;
			default:	return 0;break;
			}
		}
	}

	if(tokens[x].type == DEREF){
		uint32_t addr = val(x+1, y);
		printf("%x\n", addr);
		return (uint64_t)host_read((guest_to_host(addr)), 4);
	}

	for(int i=x;i<=y;i++){
		if(tokens[i].type == '(') k++;
		else if(tokens[i].type == ')') k--;
		if((tokens[i].type == '+' || tokens[i].type == '-') && k == 0){
			pos = i;
		}

		if(k == 0 && i != y) flag = 0;
	}

	if(!pos)
		for(int i=x;i<=y;i++){
		if(tokens[i].type == '(') k++;
		else if(tokens[i].type == ')') k--;
		if((tokens[i].type == '*' || tokens[i].type == '/') && k == 0){
				pos  = i;
			}
		}

	type = pos ? tokens[pos].type : 0;

	if(x == y){
		return (uint32_t) atoi(tokens[x].str);
	}else if(flag){
		return val(x+1, y-1);
	}else{
		switch(type){
			case '+' : return val(x, pos-1) + val(pos+1, y);
								 break;
			case '-' : return val(x, pos-1) - val(pos+1, y);
								 break;
			case '*' : return val(x, pos-1) * val(pos+1, y);
								 break;
			case '/' : uint32_t a = val(x, pos-1);
					   uint32_t b = val(pos+1, y);
					   if(b == 0){printf("divisor == 0\n");
							dv = 1;
							return 0;
						}else{
							return a / b;
						}
							break;
			default :
								printf("budui type = %d\n", type);	
								TODO();
								break;
		}

	}
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
  }

	
	for (int i = 0; i < nr_token; i ++) {
		if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type == DEREF || '(')) {
			tokens[i].type = DEREF;
		}
	}
	printf("%d %d\n", nr_token, tokens[0].type);
  /* TODO: Insert codes to evaluate the expression. */
	word_t ans = val(0, nr_token-1);
	*success = true;

  return ans;
}
