#include <common.h>
#include <elf.h>

typedef struct {
    uint32_t addr;
    char name[64];
} elf_func;

void elf_action(char *elf_file);
bool load_elf(char *elf_file);
