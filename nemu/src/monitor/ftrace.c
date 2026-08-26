#include <ftrace.h>

static char *elf_file = NULL;

bool load_elf() {

  if (elf_file == NULL) {
    Log("No elf is given. Use the default build-in elf.");
    return false;
  }

  FILE *fp = fopen(elf_file, "rb");
  Assert(fp, "Can not open '%s'", elf_file);
  fclose(fp);
  return true;
}
