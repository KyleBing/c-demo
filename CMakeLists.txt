cmake_minimum_required(VERSION 3.27)
set(CMAKE_C_STANDARD 11)

include_directories(.)


project(c_bill C)
add_executable(c_bill
        bill/main.c
        bill/Bill.c
        bill/Bill.h
)


project(c_struct C)
add_executable(c_struct
        struct/main.c
        struct/WubiWord.h
        struct/WubiWord.c
        struct/main.c
)


project(c_time C)
add_executable(c_time
        time/time.c
        time/time.c
)
