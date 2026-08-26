#include <ftrace.h>
#include <elf.h>
#include <stdio.h>

Elf32_Ehdr ehdr;

typedef struct {
    uint32_t addr;
    char name[64];
} elf_func;


void elf_action(char *elf_file){
	load_elf(elf_file);
	FILE *fp = fopen(elf_file, "rb");
	int ret = fread(&ehdr, sizeof(ehdr), 1, fp);
	if(ret != 1) ;
	
//	printf("e_shoff = %u\n", ehdr.e_shoff);
//	printf("e_shnum = %u\n", ehdr.e_shnum);
//	printf("e_shstrndx = %u\n", ehdr.e_shstrndx);
}

bool load_elf(char *elf_file) {
  
  	if (elf_file == NULL) {
    	Log("No elf is given. Use the default build-in elf.");
    	return false;
  	}

  	FILE *fp = fopen(elf_file, "rb");
  	Assert(fp, "Can not open '%s'", elf_file);
  	fclose(fp);
  	return true;
}

