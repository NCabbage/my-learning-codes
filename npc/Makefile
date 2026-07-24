# 引入上级 Makefile，获得 git_commit 等定义
include ../Makefile

# 定义编译相关的变量
VFLAGS = --cc --exe --build -j 0 -Wall --trace --trace-fst
SOURCES = csrc/sim/sim_top.cpp $(shell find $(abspath ./vsrc) -name "*.v")
TARGET = sim_top
WAVE = /wave.fst
TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)			#是一个nvboard的程序

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)			

$(SRC_AUTO_BIND): $(NXDC_FILES)						
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@		
	#确定文件依赖关系，没有就用py生成一个

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp" ! -name "sim_top.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""		#把TOP_NAME换成V$(TOPNAME)->Vtop

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
		$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
		#$^是找到生成$(BIN)所需的全部文件
# 默认目标：编译并运行
all: default

nv: $(BIN)
	@$^

# 编译目标
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VFLAGS) --top-module top $(SOURCES)

# 运行目标
run:
	cd obj_dir; \
	./Vtop \

watch:
	gtkwave obj_dir/wave.fst

# 清理目标
clean:
	rm -rf obj_dir
	rm -f wave.fst
	rm -rf $(BUILD_DIR)
	
#记得修改地址	
clean_yosys:
	-rm -rf /home/cappage/ysyx-workbench/npc/result/ysyx_1000863_encoder

yosys:
	make -C /home/cappage/yosys-sta sta \
    	DESIGN=top SDC_FILE=/home/cappage/ysyx-workbench/npc/sdc/default.sdc \
    	CLK_FREQ_MHZ=200 CLK_PORT_NAME=clk O=/home/cappage/ysyx-workbench/npc/result/ysyx_1000863_encoder\
    	RTL_FILES="/home/cappage/ysyx-workbench/npc/vsrc/top/top.v \
    	/home/cappage/ysyx-workbench/npc/vsrc/ysyx_100022863_encoder/ysyx_100022863_encoder.v"

.PHONY: all sim run clean default
