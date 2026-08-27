#include <ftrace.h>
#include <elf.h>
#include <stdio.h>

Elf32_Ehdr ehdr;

typedef struct {
    uint32_t addr;
    char name[128];
} elf_func;

elf_func func[64];
int func_count = 0;

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
	
	uint32_t symtab_idx = 0, strtab_idx = 0;
	
	
	for(int i=0;i<ehdr.e_shnum;i++){
		char *shdr_name = &shstrtab[ shdr[i].sh_name ];
		if(strcmp(shdr_name, ".symtab") == 0) symtab_idx = i;
		if(strcmp(shdr_name, ".strtab") == 0) strtab_idx = i;
//		printf("sh_name=%s, sh_size=%u, sh_offset=%x, sh_type=%u sh_flags= %u\n", &shstrtab[shdr[i].sh_name], shdr[i].sh_size, shdr[i].sh_offset, shdr[i].sh_type, shdr[i].sh_flags);
	}	
//	printf("%d, %d\n", symtab_idx, strtab_idx);
	
	int sym_count = shdr[symtab_idx].sh_size / shdr[symtab_idx].sh_entsize;
	Elf32_Sym symtab[sym_count];
	fseek(fp, shdr[symtab_idx].sh_offset, SEEK_SET);
	ret = fread(symtab, shdr[symtab_idx].sh_entsize, sym_count, fp);
	char strtab[shdr[strtab_idx].sh_size + 1];
	
	fseek(fp, shdr[strtab_idx].sh_offset, SEEK_SET);
	ret = fread(strtab, 1, shdr[strtab_idx].sh_size, fp);
	
	
	for(int i=0;i<sym_count;i++){
		int type = ELF32_ST_TYPE(symtab[i].st_info);
		if (type == STT_FUNC && symtab[i].st_shndx != SHN_UNDEF){
			func[func_count].addr = symtab[i].st_value;
			strcpy(func[func_count].name, &strtab[symtab[i].st_name]);
			func_count++;
		}
	}
	
	for (int i = 0; i < func_count; i++) {
    	printf("0x%08x: %s\n", func[i].addr, func[i].name);
	}
	
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

void output_ftrace(uint32_t pc){
	for(int i=0;i<func_count;i++){
		if(pc == func[i].addr){printf("the program has jump to %s addr: %x\n", func[i].name, func[i].addr);
			return;
		}
	}
}

