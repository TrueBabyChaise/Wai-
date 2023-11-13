cmake_minimum_required(VERSION 3.20)
project(WAI_ CXX)

set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")
set(CMAKE_CXX_COMPILER "C:/TDM-GCC-32/bin/g++.exe")

# Collect source files
file(GLOB_RECURSE SRC_MAIN
    "${SRC_DIR}/main.cpp"
    "${SRC_DIR}/**/*.hpp"
    "${SRC_DIR}/**/*.h"
    "${SRC_DIR}/**/*.cpp"
    "${SRC_DIR}/**/*.cc"
    "${SRC_DIR}/**/*.cxx"
)

# Create the executable
add_executable(WAI_ "${SRC_MAIN}")
# Set properties
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(TARGET WAI_ PROPERTY CXX_STANDARD 23) # Use C++23

target_include_directories(WAI_ PRIVATE "${SRC_DIR}") # Include the source directory

# Precompiled header
target_precompile_headers(WAI_ PRIVATE "${SRC_DIR}/common.hpp")
