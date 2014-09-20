# Project name is not mandatory, but you should use it
project(carrier)

# States that CMake required version must be greater than 2.6
cmake_minimum_required(VERSION 2.6)

include_directories(include lib)

# Appends the cmake/modules path inside the MAKE_MODULE_PATH variable which stores the
# directories of additional CMake modules (ie. MacroOutOfSourceBuild.cmake):
set(CMAKE_MODULE_PATH ${carrier_SOURCE_DIR}/cmake/modules ${CMAKE_MODULE_PATH})

add_subdirectory(src)
