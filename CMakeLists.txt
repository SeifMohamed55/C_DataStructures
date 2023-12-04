cmake_minimum_required(VERSION 3.22)
project(C C)

set(CMAKE_C_STANDARD 17)

add_executable(C main.c stack.h stack.c queue.h queue.c global.h list.h list.c linkedlist.h linkedlist.c)
