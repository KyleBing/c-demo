# c 语言学习记录

## 一、Clion 中 `CMakeLists.txt` 的格式
```
cmake_minimum_required(VERSION 3.27)
project(c_demo C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(c_demo
        main.c
        Bill.c
        Bill.h
)
```