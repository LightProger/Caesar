cmake_minimum_required(VERSION 3.7)
project(Caesar)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES Caesar.c)
add_executable(Caesar ${SOURCE_FILES})