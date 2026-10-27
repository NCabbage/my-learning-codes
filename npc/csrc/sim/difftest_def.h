enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

#define CONFIG_DIFFTEST 0

#define NR_GPR_NUM	16

void init_difftest(char *ref_so_file, long img_size, int port);
void difftest_step(uint64_t n);
bool difftest_check();