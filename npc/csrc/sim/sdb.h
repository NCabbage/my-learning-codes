#ifndef SDB_H
#define SDB_H

#include <string.h>

static int cmd_c(char *args);

static int cmd_help(char *args);

static int cmd_q(char *args);

static int cmd_info(char *args);

static int cmd_s(char *args);

void test();

void sdb_mainloop();

#define ARRLEN(arr) (int)(sizeof(arr)/sizeof(arr[0]))

#endif
