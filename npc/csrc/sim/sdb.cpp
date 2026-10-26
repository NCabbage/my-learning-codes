#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "Vtop.h"
#include "Vtop___024root.h"
#include "trace.h"
#include "difftest_def.h"
#include "color.h"
#include "debug.h"

extern Vtop* top;
extern uint32_t *RAM;

void execute(long long n);

static char* rl_gets(){
	static char* line_read = NULL;

	if(line_read){
		free(line_read);
		line_read = NULL;
	}

	line_read = readline("sdb > ");

	if(line_read && *line_read){
		add_history(line_read);
	}

	return line_read;
}

static struct{
	const char *name;
	const char *description;
	int (* handler)(char *);
}  cmd_table [] = {
	{"help", "Display information about all supported commands", cmd_help},
	{"c", "Continue the execution of the program", cmd_c},
	{"q", "get out the pragram", cmd_q},
	{"info", "look reg", cmd_info},
	{"s", "execute n steps", cmd_s},
	{"x", "watch the memery", cmd_x}
};

#define NR_CMD ARRLEN(cmd_table)

void sdb_mainloop(){
	for(char *str; (str = rl_gets()) != NULL; ){
		char *str_end = str + strlen(str);

		char *cmd = strtok(str, " ");

		char *args = cmd + strlen(cmd) + 1;
		if(args >= str_end){
			args = NULL;
		}
	
		int i;

		for(i=0;i<NR_CMD;i++){
			if(strcmp(cmd, cmd_table[i].name) == 0){
				if(cmd_table[i].handler(args) < 0){ return;}
				break;
			}
		}
		
		if(i == NR_CMD) printf("no this command\n");
	}
}

int cmd_c(char *args){
	for(int i=0;i<2000000;i++){
		execute(1);
#if CONFIG_DIFFTEST
		difftest_step(1);
		difftest_check();
#endif
	}
	return 0;
}

int cmd_help(char *args){
	for(int i=0;i<NR_CMD;i++)
		printf("%s %s\n", cmd_table[i].name, cmd_table[i].description);

	return 0;
}

int cmd_q(char *args){
	return -1;
}

int cmd_info(char *args){
	if(args == NULL){
		printf("need a character\n");
		return 0;
	}

	if(strcmp(args, "r") == 0){
		for(int i=0;i<32;i++)
			printf("GPR[%d]: %x\n", i, top->rootp->top__DOT__u_ysyx_100022863_TOP__DOT__inst_ysyx_100022863_GPR__DOT__GPR[i]);
	}

	return 0;
}

int cmd_s(char *args){
	if(args == NULL){
		printf("[DUT] before: PC=0x%08x\n", top->PC);
		execute(1);
		printf("[DUT] after : PC=0x%08x\n", top->PC);


#if CONFIG_DIFFTEST
			difftest_step(1);
//			difftest_check();
#endif
		return 0;
	}

	int n = 1;

	if(sscanf(args, "%d", &n) != 1){
		printf("need a number\n");
	}

	if(n < 0){
		printf("the number should be postive\n");
	}

	for(int i=0;i<n;i++){
		execute(1);
#if CONFIG_DIFFTEST
		difftest_step(1);
// 		difftest_check();
#endif
	}

	return 0;
}

int cmd_x(char *args){
	if(args == NULL){
		printf("need two parameter\n");
		return 0;
	}

	int n;
	unsigned int addr;

	if(sscanf(args, "%d %x", &n, &addr) != 2){
		printf("need two parameter\n");
		return 0;
	}

	for(int i=0;i<n;i++){
		printf("addr: %x  val: %x\n", addr+i, RAM[addr+i-0x80000000]);
	}

	return 0;
}