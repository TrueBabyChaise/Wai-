cmake_minimum_required(VERSION 3.20)
project(WAI- CXX)

set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")

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
add_executable(WAI- "${SRC_MAIN}")

# Set properties
set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_property(TARGET WAI- PROPERTY CXX_STANDARD 23) # Use C++23

target_include_directories(WAI- PRIVATE "${SRC_DIR}") # Include the source directory

# Precompiled header
target_precompile_headers(WAI- PRIVATE "${SRC_DIR}/common.hpp")
