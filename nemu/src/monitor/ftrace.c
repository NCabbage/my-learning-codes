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
	
	int ret = fread(&ehdr, 1, sizeof(ehdr), fp);
	if(ret == 0) printf("there is no elf file\n");
	
	Elf32_Shdr shdr[ehdr.e_shnum];	
	fseek(fp, ehdr.e_shoff, SEEK_SET);
	ret = fread(&shdr, 1, sizeof(shdr), fp);
	if(ret == 0) printf("shdr read error\n");
	
//	for(int i=0;i<ehdr.e_shnum;i++)
//		printf("sh_name=%u sh_size=%u sh_offset=%x sh_type=%u\n", shdr[i].sh_name, shdr[i].sh_size, shdr[i].sh_offset, shdr[i].sh_type);
	
	char shstrtab[shdr[ehdr.e_shstrndx].sh_size + 1];
	
	fseek(fp, shdr[ehdr.e_shstrndx].sh_offset, SEEK_SET);
	ret = fread(shstrtab, 1, sizeof(shstrtab), fp);
	
	for(int i=0;i<ehdr.e_shnum;i++)
		printf("sh_name=%s, sh_size=%u, sh_offset=%x, sh_type=%u sh_flags= %u\n", &shstrtab[shdr[i].sh_name], shdr[i].sh_size, shdr[i].sh_offset, shdr[i].sh_type, shdr[i].sh_flags);
	
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

