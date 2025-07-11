cmake_minimum_required(VERSION 3.25)

project(
    nebulae-engine
    VERSION 0.1.0
    DESCRIPTION "An attempt at creating a simple C++ physics engine"
    LANGUAGES CXX
)


# Options
option(BUILD_SHARED_LIBS "Build shared libraries"                     ON)


# C++ compile options
add_compile_options(-Wall -Wextra -pedantic -Werror)

# Targets names
set(LIB_CORE "nebulae-engine-core")
set(EXE_TEST "test")

# Subdirectories
add_subdirectory(apps)
add_subdirectory(libs)
