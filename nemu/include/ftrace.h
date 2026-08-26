#include <common.h>
#include <elf.h>

typedef struct {
    uint32_t addr;
    char name[64];
} elf_func;

bool load_elf(char *elf_file);
