# 引入上级 Makefile，获得 git_commit 等定义
include ../Makefile

# 定义编译相关的变量
VFLAGS = --cc --exe --build -j 0 -Wall --trace --trace-fst
SOURCES = sim_t1.cpp t1.v
TARGET = sim_t1

# 默认目标：编译并运行
all: sim run

# 编译目标
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VFLAGS) $(SOURCES)

# 运行目标
run:
	./obj_dir/Vt1

# 清理目标
clean:
	rm -rf obj_dir
	rm -f wave.fst

.PHONY: all sim run clean
