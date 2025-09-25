TOPMODULE       ?= SS_detect_start
INC_DIR         ?= ./
LIB_DIR         ?=

TOOL            := verilator
VERILATOR_FLAGS := --binary --timing --trace --build
WARNING_IGNORE  := -Wno-fatal -Wno-lint -Wno-style -Wno-width
INC_FLAGS       := $(addprefix -I,$(INC_DIR) $(LIB_DIR))

COVERAGE_DIR    := $(INC_DIR)/coverage
COVERAGE_FLAGS  := --coverage
COVERAGE_OUT    := $(COVERAGE_DIR)/coverage.dat
COVERAGE_REPORT := $(COVERAGE_DIR)/summary_report.txt
COVERAGE_INFO   := $(COVERAGE_DIR)/detail_report.txt
COVERAGE_ANNOT  := $(COVERAGE_DIR)/annotated_src

all: clean compile run

all_wave: clean compile run sim

all_cover: clean_cover compile_cover run_cover report_cover

compile:
	@echo "-> mkdir..."
	@mkdir -p $(INC_DIR) && echo "<Pass> mkdir $(INC_DIR)" || echo "<False> mkdir $(INC_DIR)"
	@echo "-> compile..."
	@$(TOOL) $(VERILATOR_FLAGS) -f $(INC_DIR)/flist.f $(INC_FLAGS) $(WARNING_IGNORE) --Mdir $(INC_DIR)/obj_dir --trace --o Vtb_$(TOPMODULE) \
		&& echo "<Pass> compile $(TOPMODULE)" || echo "<False> compile $(TOPMODULE)"

run:
	@echo "-> run..."
	@$(INC_DIR)/obj_dir/Vtb_$(TOPMODULE) | tee $(INC_DIR)/simulation.log \
		&& echo "<Pass> run $(TOPMODULE)" || echo "<False> run $(TOPMODULE)"
	@echo "-> mv file vcd"
	@if [ -f ./tb_$(TOPMODULE).vcd ]; then \
	    mv ./tb_$(TOPMODULE).vcd $(INC_DIR) && echo "<Pass> mv file tb_$(TOPMODULE).vcd to $(INC_DIR)"; \
	else \
	    echo "<False> mv file tb_$(TOPMODULE).vcd to $(INC_DIR)"; \
	fi

sim:
	@echo "-> sim..."
	@gtkwave $(INC_DIR)/tb_$(TOPMODULE).vcd &> /dev/null \
		&& echo "<Pass> sim $(TOPMODULE)" || echo "<False> sim $(TOPMODULE)"

clean:
	@echo "-> clean..."
	@rm -rf $(INC_DIR)/obj_dir && echo "<Pass> clean $(TOPMODULE)" || echo "<False> clean $(TOPMODULE)"

compile_cover:
	@echo "-> mkdir..."
	@mkdir -p $(INC_DIR) && echo "<Pass> mkdir $(INC_DIR)" || echo "<False> mkdir $(INC_DIR)"
	@mkdir -p $(COVERAGE_DIR) && echo "<Pass> mkdir $(COVERAGE_DIR)" || echo "<False> mkdir $(COVERAGE_DIR)"
	@echo "-> compile_cover..."
	@$(TOOL) $(VERILATOR_FLAGS) $(COVERAGE_FLAGS) -f $(INC_DIR)/flist.f $(INC_FLAGS) $(WARNING_IGNORE) --Mdir $(INC_DIR)/obj_dir --trace --o Vtb_$(TOPMODULE) \
		&& echo "<Pass> compile_cover $(TOPMODULE)" || echo "<False> compile_cover $(TOPMODULE)"

run_cover:
	@echo "-> run_cover..."
	@$(INC_DIR)/obj_dir/Vtb_$(TOPMODULE) | tee $(INC_DIR)/simulation.log \
		&& echo "<Pass> run_cover $(TOPMODULE)" || echo "<False> run_cover $(TOPMODULE)"
	@echo "-> mv file vcd"
	@if [ -f ./tb_$(TOPMODULE).vcd ]; then \
	    mv ./tb_$(TOPMODULE).vcd $(INC_DIR) && echo "<Pass> mv file tb_$(TOPMODULE).vcd to $(INC_DIR)"; \
	else \
	    echo "<False> mv file tb_$(TOPMODULE).vcd to $(INC_DIR)"; \
	fi
	@echo "-> mv file dat"
	@if [ -f coverage.dat ]; then \
	    mv coverage.dat $(COVERAGE_OUT) && echo "<Pass> mv file coverage.dat to $(COVERAGE_OUT)"; \
	else \
	    echo "<False> mv file coverage.dat to $(COVERAGE_OUT)"; \
	fi

report_cover:
	@echo "-> report_cover..."
	@verilator_coverage --write-info $(COVERAGE_REPORT) $(COVERAGE_OUT) \
		&& echo "<Pass> write summary report" || echo "<False> write summary report"
	@verilator_coverage --annotate $(COVERAGE_ANNOT) $(COVERAGE_OUT) > $(COVERAGE_INFO) \
		&& echo "<Pass> write detail report" || echo "<False> write detail report"
	@echo "Coverage report generated:"
	@echo "  Info file   : $(COVERAGE_INFO)"
	@echo "  Summary     : $(COVERAGE_REPORT)"
	@echo "  Annotated   : $(COVERAGE_ANNOT)"

clean_cover:
	@echo "-> clean_cover..."
	@rm -rf $(INC_DIR)/obj_dir $(COVERAGE_DIR) \
		&& echo "<Pass> clean_cover $(TOPMODULE)" || echo "<False> clean_cover $(TOPMODULE)"

help:
	@echo "Makefile targets:"
	@echo "  all       		: Clean, compile, and run (default)"
	@echo "  all_wave  		: Clean, compile, run, and open waveform viewer"
	@echo "  all_cover 		: Clean, compile with coverage, run, and generate coverage report"
	@echo "  compile   		: Compile the design with Verilator"
	@echo "  run       		: Run the simulation"
	@echo "  sim       		: Open waveform viewer"
	@echo "  clean     		: Remove generated files"
	@echo "  compile_cover 	: Compile the design with coverage enabled"
	@echo "  run_cover 		: Run the simulation with coverage"
	@echo "  report_cover 	: Generate coverage report"
	@echo "  help      		: Show this help message"

.PHONY: all all_wave compile run sim clean help
