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

#include "sdb.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

WP* new_wp();
void free_wp(int NO);
void watchpoint_display();

WP* new_wp(){

	if(free_ == NULL){
		printf("the number of wp is too much!!!");
		assert(0);
	}

	WP* cnt;
	cnt = head;
	head = free_;
	free_ = free_ -> next;
	head -> next = cnt;

	return head;
}

void free_wp(int NO){

	WP *cnt, *curr;
	curr = head;
	
	while(curr != NULL){
		if((curr->next)->NO == NO) break;
		else curr = curr -> next;
	}	

	cnt = free_;
	free_ = curr -> next;
	curr -> next = free_ -> next;
	free_ ->  next = cnt;
	
	return ;
}

void watchpoint_display(){
	WP* cnt;
	cnt = head;
	while(cnt != NULL){
		printf("NO:%d\n", cnt->NO);
		cnt = cnt -> next;
	}
	printf("------------------\n");
	WP* cnt_f;
	cnt_f = free_;
	while(cnt_f != NULL){
		printf("NO:%d\n", cnt_f->NO);
		cnt_f = cnt_f -> next;
	}

}

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

