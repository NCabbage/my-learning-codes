enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

#define CONFIG_DIFFTEST 1

void init_difftest(char *ref_so_file, long img_size, int port);