cmake_minimum_required(VERSION 3.15)
project(simplenn C)

set(CMAKE_C_STANDARD 99)

add_executable(simplenn main.c lib/include/math_functions.h lib/math_functions.c lib/include/neuron.h lib/neuron.c)