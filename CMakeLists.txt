cmake_minimum_required(VERSION 3.10)
project(TestInit VERSION 0.1)

add_executable(testinit)

target_sources(testinit PRIVATE main.c)
target_sources(testinit PRIVATE file1.c)
target_sources(testinit PRIVATE file2.c)
target_sources(testinit PRIVATE file3.c)
