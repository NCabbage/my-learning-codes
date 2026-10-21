/////////////////////////////////////////////mtrace

#include <stdio.h>
#include "trace.h"

static FILE *mtrace_log = NULL;

void mtrace_init(){
	mtrace_log = fopen("../build/npc-memory-log.txt", "w");

	if(!mtrace_log){
		mtrace_log = stderr;
	}
}

void mtrace_write(char WR, uint32_t addr, uint32_t val, uint32_t pc){
	if(addr >= START && addr <= END)
	MTRACE_LOG("%c addr: 0x%08x data: 0x%08x PC: 0x%08x\n", WR, addr, val, pc);
}

////////////////////////////////////////////itrace

iringbuf b;

bool buf_init(){
	b.head = 0;
	b.tail = 0;
	for(int i=0;i<BUF_SIZE;i++) b.pc[i] = 0;
	
	return true;
}

bool buf_read(){
	if(isEmpty()){
		printf("the trace buf is empty\n");
		return false;
	}

	for(int i=0;i<BUF_SIZE;i++){
		int num = (b.head + i) % BUF_SIZE;
		if((b.head + i) % BUF_SIZE != b.tail) printf("   %08x: %08x    ", b.pc[num], b.inst[num]);
		else printf("——>%08x: %08x    ", b.pc[num], b.inst[num]);
		char *p = b.p[num];
		void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);		//反汇编函数
  		disassemble(p, 128, (uint64_t)b.pc[num],  (uint8_t *)&b.inst[num], 4);
  		printf("%s\n", p);
	}
	
	return true;
}

bool buf_write(uint32_t pc, uint32_t i){
	if(isEmpty()){
		
	}
	if(isFull()){
		b.head = (b.head + 1) % BUF_SIZE;
		b.tail = (b.tail + 1) % BUF_SIZE;
	}else{
		b.tail ++;
	}
//	printf("pc: %x, i: %x, tail: %d head: %d\n", pc, i, b.tail, b.head);
	b.pc[b.tail] = pc;
	b.inst[b.tail] = i;
	
	return true;
}

bool isEmpty(){
	if(b.head == b.tail) return true;
	return false;
}

bool isFull(){
	if(b.head == (b.tail + 1) % BUF_SIZE) return true;
	return false;
}


///////////////////////////////////////ftrace

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
	
//	for (int i = 0; i < func_count; i++) {
//    	printf("0x%08x: %s\n", func[i].addr, func[i].name);
//	}
	
	fclose(fp);
}

bool load_elf(char *elf_file) {
  
  	if (elf_file == NULL) {
    	printf("No elf is given. Use the default build-in elf.\n");
    	return false;
  	}

  	FILE *fp = fopen(elf_file, "rb");
  	fclose(fp);
  	return true;
}

void output_ftrace(uint32_t pc){
	for(int i=0;i<func_count;i++){
		if(pc == func[i].addr){printf("\nthe program has jump to %s addr: %x\n", func[i].name, func[i].addr);
			return;
		}
	}
}
