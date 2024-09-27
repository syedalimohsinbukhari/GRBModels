cmake_minimum_required(VERSION 3.22)
project(AstroCppModels)

find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
include_directories(${Python3_INCLUDE_DIRS})
find_package(pybind11 REQUIRED)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# Include directories
include_directories(include)

# Add the C++ library (Static Library)
add_library(cpp_models STATIC
        src/powerLaw.cpp
        src/brokenPowerLaw.cpp
        src/smoothlyBrokenPowerLaw.cpp
        src/bandGRB.cpp
        src/cutOffPowerLaw.cpp
        src/blackBody.cpp
        src/logNormal.cpp
        src/normal.cpp
        src/bremsstrahlung.cpp
        src/cutOffs.cpp
        src/norris.cpp
        src/utilities.cpp
        src/maxwellBoltzmann.cpp
        src/weibull.cpp
        src/rayleigh.cpp
        include/constants.hpp
        src/rayleighJeans.cpp
        src/planckLaw.cpp)

# Add the Python module (Dynamic Library)
pybind11_add_module(cppModels binder/bindings.cpp binder/bindings_formulae.cpp binder/bindings_constants.cpp)

# Link the library to the Python module
target_link_libraries(cppModels PRIVATE cpp_models)

## Set properties for the Python module
set_target_properties(cppModels PROPERTIES
        OUTPUT_NAME "cppModels"        # Name of the output file without extension
        PREFIX ""                      # Remove the 'lib' prefix (e.g., libAstroCppModels.so)
        SUFFIX ".so"                   # Ensure the extension is .so
)