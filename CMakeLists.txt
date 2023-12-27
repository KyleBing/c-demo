cmake_minimum_required(VERSION 3.27)
project(c_demo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(c_demo
        main.c
        Bill.c
        Bill.h
)
