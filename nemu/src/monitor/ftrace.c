#include <ftrace.h>
#include <elf.h>

bool load_elf(char *elf_file) {
  
  printf("elf_file:%s\n", elf_file);
  if (elf_file == NULL) {
    Log("No elf is given. Use the default build-in elf.");
    return false;
  }

  FILE *fp = fopen(elf_file, "rb");
  Assert(fp, "Can not open '%s'", elf_file);
  fclose(fp);
  return true;
}
