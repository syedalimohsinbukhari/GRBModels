cmake_minimum_required(VERSION 3.22)
project(GRBModels)

# Specify the path to the pybind11Config.cmake file
set(pybind11_DIR "/home/syedalimohsinbukhari/miniconda3/envs/multifit/lib/python3.9/site-packages/pybind11/share/cmake/pybind11")

include_directories("/home/syedalimohsinbukhari/miniconda3/envs/multifit/include/python3.9/")

# Find pybind11
find_package(pybind11 REQUIRED)

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
        include/logNormal.hpp)

# Add the Python module (Dynamic Library)
pybind11_add_module(GRBModels src/bindings.cpp)

# Link the library to the Python module
target_link_libraries(GRBModels PRIVATE grb_models)
