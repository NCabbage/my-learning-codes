typedef struct watchpoint {
  int NO;
	uint32_t addr;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;

WP* new_wp(uint32_t addr);
void free_wp(int NO);
void watchpoint_display();

