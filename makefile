# Default values for variables (can be overridden via CLI arguments)
ENV_NAME ?= multifit
PYTHON_VERSION = 3.9.19
PYBIND_VERSION = 2.13.5
BUILD_DIR ?= build
INIT_FILE = __init__.py
EXT_BUILD ?= $(BUILD_DIR)# The exterior build path should be provided by the user

# Check if conda environment exists, if not create it, otherwise just activate and install pybind11
create_env:
	@echo "Checking if conda environment '$(ENV_NAME)' exists..."
	@if conda env list | grep -q "^$(ENV_NAME) "; then \
		echo "Environment '$(ENV_NAME)' already exists. Activating..."; \
		conda activate $(ENV_NAME) && conda install pybind11=$(PYBIND_VERSION) -c conda-forge -y; \
	else \
		echo "Environment '$(ENV_NAME)' does not exist. Creating it..."; \
		conda create --name $(ENV_NAME) python=$(PYTHON_VERSION) -y; \
		conda activate $(ENV_NAME) && conda install pybind11=$(PYBIND_VERSION) -c conda-forge -y; \
	fi

# Target to build the project using CMake and make
build: $(BUILD_DIR)/$(INIT_FILE) check_EXT_BUILD
	@echo "Building the project in $(BUILD_DIR)"
	@cd $(BUILD_DIR) && make clean || true
	@cd $(BUILD_DIR) && cmake ..
	@cd $(BUILD_DIR) && make -j$$(nproc)
	@if [ "$(EXT_BUILD)" != "$(BUILD_DIR)" ]; then \
		$(MAKE) move_so; \
	else \
		echo "EXT_BUILD is the same as BUILD_DIR. Skipping move_so."; \
	fi

# Create build directory if it doesn't exist and create an empty __init__.py
$(BUILD_DIR)/$(INIT_FILE):
	@echo "Setting up build directory and init file"
	@if [ ! -d "$(BUILD_DIR)" ]; then mkdir $(BUILD_DIR); fi
	@echo "" > $(BUILD_DIR)/$(INIT_FILE)

# Check if EXT_BUILD is provided and if it exists
check_EXT_BUILD:
	@if [ -z "$(EXT_BUILD)" ]; then \
		echo "EXT_BUILD path not specified. Defaulting to $(BUILD_DIR)"; \
		EXT_BUILD=$(BUILD_DIR); \
	fi
	@if [ ! -d "$(EXT_BUILD)" ]; then \
		echo "EXT_BUILD directory does not exist. Creating it..."; \
		mkdir -p $(EXT_BUILD); \
	fi

# Move the .so file to the specified EXT_BUILD path
move_so:
	@echo "Looking for .so file in $(BUILD_DIR)"
	@so_file=$$(find $(BUILD_DIR) -name '*.so'); \
	if [ -n "$$so_file" ]; then \
		echo "Moving $$so_file to $(EXT_BUILD)"; \
		mv $$so_file $(EXT_BUILD); \
	else \
		echo "Error: No .so file found in $(BUILD_DIR)"; \
		exit 1; \
	fi

# Target to clean the build directory
clean:
	@echo "Cleaning build directory"
	@rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: create_env build clean check_EXT_BUILD move_so
