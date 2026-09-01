#include <common.h>
#include <elf.h>

void elf_action(char *elf_file);
bool load_elf(char *elf_file);
void output_ftrace(uint32_t pc);
