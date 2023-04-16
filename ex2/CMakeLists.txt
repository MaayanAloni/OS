cmake_minimum_required(VERSION 3.17)
project(ex2)

set(CMAKE_CXX_STANDARD 14)

include_directories(resources)

add_executable(ex2
        resources/demo_itimer.c
        resources/demo_jmp.c
        resources/demo_singInt_handler.c
        resources/uthreads.cpp
        resources/uthreads.h)
