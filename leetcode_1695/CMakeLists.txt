cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(SRC "src")
set(INCLUDE "include")

add_executable(main.o
    ${SRC}/main.cpp
    ${SRC}/solution.cpp
)

target_include_directories(main.o PRIVATE ${INCLUDE})