#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

void execute(long long n);

#define NR_CMD 2

static int cmd_c(char *args);

static int cmd_help(char *args);

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
	{"c", "Continue the execution of the program", cmd_c}
};

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
	execute(-1);
	return 0;
}

int cmd_help(char *args){
	for(int i=0;i<NR_CMD;i++)
		printf("%s\n", cmd_table[i].description);

	return 0;
}