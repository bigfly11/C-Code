cmake_minimum_required(VERSION 3.24)
project(A2023_1_30tongxunlu C)

set(CMAKE_C_STANDARD 11)

add_executable(A2023_1_30tongxunlu main.c contact.h)

add_executable(test test.c contact.h contact.c)


