cmake_minimum_required(VERSION 3.20)
project(c_primer_plus C)

set(CMAKE_C_STANDARD 11)

add_library(c_primer_plus library.c)

add_executable(4.1 chap4/4.1.c)
add_executable(4.2 chap4/4.2.c)
add_executable(4.3 chap4/4.3.c)