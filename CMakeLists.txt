cmake_minimum_required(VERSION 3.22)
project(GRBModels)

find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
find_package(pybind11 REQUIRED)

include_directories(${Python3_INCLUDE_DIRS})
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# Include directories
include_directories(include)

# Add the C++ library (Static Library)
add_library(grb_models STATIC
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
        src/weibull.cpp)

# Add the Python module (Dynamic Library)
pybind11_add_module(GRBModels src/bindings.cpp)

# Link the library to the Python module
target_link_libraries(GRBModels PRIVATE grb_models)
