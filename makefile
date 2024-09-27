# Default values for variables (can be overridden via CLI arguments)
ENV_NAME ?= multifit
PYTHON_VERSION = 3.9.19
PYBIND_VERSION = 2.13.5
BUILD_DIR = build
INIT_FILE = __init__.py

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
build: $(BUILD_DIR)/$(INIT_FILE)
	@echo "Building the project"
	@cd $(BUILD_DIR) && make clean || true
	@cd $(BUILD_DIR) && cmake ..
	@cd $(BUILD_DIR) && make -j$$(nproc)

# Create build directory if it doesn't exist and create an empty __init__.py
$(BUILD_DIR)/$(INIT_FILE):
	@echo "Setting up build directory and init file"
	@if [ ! -d "$(BUILD_DIR)" ]; then mkdir $(BUILD_DIR); fi
	@echo "" > $(BUILD_DIR)/$(INIT_FILE)

# Target to clean the build directory
clean:
	@echo "Cleaning build directory"
	@rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: create_env build clean
