cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED true)

set(INCLUDE "include")
set(SRC "src")

add_executable(main.o
    ${SRC}/main.cpp
    ${SRC}/solution.cpp
    ${SRC}/utils.cpp
)

target_include_directories(main.o PRIVATE ${INCLUDE})