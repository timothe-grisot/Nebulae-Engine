cmake_minimum_required(VERSION 3.25)

project(
    nebulae-engine
    VERSION 0.1.0
    DESCRIPTION "An attempt at creating a simple C++ physics engine"
    LANGUAGES CXX
)



add_subdirectory(apps)
add_subdirectory(libs)
