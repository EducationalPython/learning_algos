cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SRC_DIR "src")
set(INCLUDE_DIR "include")

add_executable(main.o
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/solution.cpp
)

target_include_directories(main.o PRIVATE ${INCLUDE_DIR})