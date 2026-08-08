typedef struct watchpoint {
	uint32_t NO;
	uint32_t addr;
	int old_val;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

WP* new_wp(uint32_t addr);
void free_wp(uint32_t addr);
void watchpoint_display();
int watchpoint_check();

