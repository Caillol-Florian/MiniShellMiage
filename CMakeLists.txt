cmake_minimum_required(VERSION 3.14)
project(MiniShell C)

set(CMAKE_C_STANDARD 99)

add_executable(MiniShell main.c builtin_func.h)