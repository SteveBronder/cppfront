# Makefile for cppfront development
#
# Bootstrap problem: To generate .h from .h2, we need cppfront.
# But cppfront depends on the .h files.
#
# Solution:
#   - The repo contains pre-generated .h files
#   - `make build` uses existing .h files to build cppfront
#   - `make bootstrap` regenerates .h from .h2, then rebuilds cppfront
#
# Development workflow:
#   1. Edit reflect.h2
#   2. Run `make bootstrap` to regenerate .h and rebuild cppfront
#   3. Run `make test` to test your changes

CXX := g++
CXXFLAGS := -std=c++20 -O2
DEBUG_FLAGS := -std=c++20 -g -O0

BUILD_DIR := _build
SRC_DIR := source
EXPERIMENTAL_DIR := experimental
# The cppfront binary
CPPFRONT := $(BUILD_DIR)/cppfront

# Source files that cppfront.cpp includes
CPPFRONT_SRC := $(SRC_DIR)/cppfront.cpp
CPPFRONT_DEPS := $(SRC_DIR)/reflect.h $(SRC_DIR)/parse.h $(SRC_DIR)/sema.h $(SRC_DIR)/to_cpp1.h

# H2 -> H file mappings
H2_FILES := $(SRC_DIR)/reflect.h2
H_FILES := $(SRC_DIR)/reflect.h

.PHONY: all clean test debug help parse compile run run-exec bootstrap refresh

help:
	@echo "Makefile targets:"
	@echo "  make build      - Build cppfront (uses existing .h files)"
	@echo "  make bootstrap  - Regenerate .h from .h2, then rebuild cppfront"
	@echo "  make debug      - Build cppfront with debug flags"
	@echo "  make test       - Run cppfront on test_ad_stages.cpp2"
	@echo "  make clean      - Remove build artifacts"
	@echo ""
	@echo "Development workflow:"
	@echo "  1. Edit reflect.h2"
	@echo "  2. make bootstrap   (regenerate .h, rebuild cppfront)"
	@echo "  3. make test        (test your changes)"
	@echo ""
	@echo "To work with .cpp2 files:"
	@echo "  make parse FILE=path/to/file.cpp2      - Transpile .cpp2 to .cpp"
	@echo "  make compile FILE=path/to/file.cpp    - Compile .cpp to executable"
	@echo "  make run FILE=path/to/file.cpp2       - Parse + compile"
	@echo "  make run-exec FILE=path/to/file.cpp2  - Parse + compile + execute"

all: build

# Create build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Build cppfront using existing .h files
# This is the simple case - no circular dependencies
$(CPPFRONT): $(CPPFRONT_SRC) $(CPPFRONT_DEPS) | $(BUILD_DIR)
	@echo "Building cppfront..."
	$(CXX) $(CXXFLAGS) $(CPPFRONT_SRC) -o $(CPPFRONT)
	@echo "Built: $(CPPFRONT)"

build: $(CPPFRONT)

# Build cppfront with debug flags
debug: $(CPPFRONT_SRC) $(CPPFRONT_DEPS) | $(BUILD_DIR)
	@echo "Building cppfront (debug)..."
	$(CXX) $(DEBUG_FLAGS) $(CPPFRONT_SRC) -o $(CPPFRONT)
	@echo "Built: $(CPPFRONT) (debug)"

# Regenerate .h files from .h2 files
# Requires cppfront to already exist
refresh: $(CPPFRONT)
	@echo "Regenerating .h files from .h2..."
	$(CPPFRONT) $(H2_FILES) -o $(H_FILES)
	@echo "Done. Run 'make build' to rebuild cppfront with new .h files."

# Bootstrap: regenerate .h from .h2, then rebuild cppfront
# This is the main development command after editing .h2 files
bootstrap: $(CPPFRONT)
	@echo "=== Bootstrap: regenerating .h from .h2 ==="
	$(CPPFRONT) $(H2_FILES) -o $(H_FILES)
	@echo "=== Rebuilding cppfront with new .h files ==="
	$(CXX) $(CXXFLAGS) $(CPPFRONT_SRC) -o $(CPPFRONT)
	@echo "=== Bootstrap complete ==="

# Run the AD test (transpile only - check for errors)
test: $(CPPFRONT)
	@echo "=== Testing test_ad_stages.cpp2 ==="
	$(CPPFRONT) $(EXPERIMENTAL_DIR)/test_ad_stages.cpp2

# Parse a .cpp2 file to .cpp (set FILE=path/to/file.cpp2)
# Output goes to same directory as input file
parse: $(CPPFRONT)
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make parse FILE=path/to/file.cpp2"; \
		exit 1; \
	fi
	@if ! echo "$(FILE)" | grep -q '\.cpp2$$'; then \
		echo "Error: FILE must end with .cpp2"; \
		exit 1; \
	fi
	@CPP_FILE=$$(echo "$(FILE)" | sed 's/\.cpp2$$/.cpp/'); \
	echo "Transpiling $(FILE) -> $$CPP_FILE"; \
	$(CPPFRONT) $(FILE) -o $$CPP_FILE
	@echo "Generated: $$(echo "$(FILE)" | sed 's/\.cpp2$$/.cpp/')"

# Compile a .cpp file to executable (set FILE=path/to/file.cpp)
# Output goes to _build directory
compile: | $(BUILD_DIR)
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make compile FILE=path/to/file.cpp"; \
		exit 1; \
	fi
	@if ! echo "$(FILE)" | grep -q '\.cpp$$'; then \
		echo "Error: FILE must end with .cpp"; \
		exit 1; \
	fi
	@echo "Compiling $(FILE)..."
	$(CXX) $(CXXFLAGS) -I$(SRC_DIR) -I. $(FILE) -o $(BUILD_DIR)/$$(basename $(FILE) .cpp)
	@echo "Built: $(BUILD_DIR)/$$(basename $(FILE) .cpp)"

# Parse and compile a .cpp2 file (set FILE=path/to/file.cpp2)
run: $(CPPFRONT) | $(BUILD_DIR)
	@if [ -z "$(FILE)" ]; then \
		echo "Usage: make run FILE=path/to/file.cpp2"; \
		exit 1; \
	fi
	@if ! echo "$(FILE)" | grep -q '\.cpp2$$'; then \
		echo "Error: FILE must end with .cpp2"; \
		exit 1; \
	fi
	@CPP_FILE=$$(echo "$(FILE)" | sed 's/\.cpp2$$/.cpp/'); \
	echo "Transpiling $(FILE) -> $$CPP_FILE"; \
	$(CPPFRONT) $(FILE) -o $$CPP_FILE; \
	echo "Compiling $$CPP_FILE..."; \
	$(CXX) $(CXXFLAGS) -I$(SRC_DIR) -I. $$CPP_FILE -o $(BUILD_DIR)/$$(basename $$CPP_FILE .cpp); \
	echo "Built: $(BUILD_DIR)/$$(basename $$CPP_FILE .cpp)"

# Parse, compile, and execute a .cpp2 file
run-exec: run
	@CPP_FILE=$$(echo "$(FILE)" | sed 's/\.cpp2$$/.cpp/'); \
	EXEC=$(BUILD_DIR)/$$(basename $$CPP_FILE .cpp); \
	echo "Running $$EXEC..."; \
	$$EXEC

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)
	@echo "Cleaned build directory"
