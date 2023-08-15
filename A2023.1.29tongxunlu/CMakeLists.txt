cmake_minimum_required(VERSION 3.24)
project(A2023_1_29tongxunlu C)

set(CMAKE_C_STANDARD 11)

add_executable(A2023_1_29tongxunlu main.c contact.h)

add_executable(test test.c)
add_executable(contract contact.c contact.c)