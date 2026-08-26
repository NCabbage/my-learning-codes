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
	if(ret != 1) printf("there is no elf file\n");
	
	fseek(fp, ehdr.e_shoff, SEEK_SET);
	
	Elf32_Shdr shdr[ehdr.e_shnum];	

	ret = fread(&shdr, sizeof(shdr), 1, fp);
	if(ret != 1) printf("shdr read error\n");
	for(int i=0;i<9;i++)
		printf("sh_name=%u\n", shdr[i].sh_name);
	
	fclose(fp);
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

