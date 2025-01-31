cmake_minimum_required(VERSION 3.10)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Define source and include directories
set(SRC_DIR "src")
set(INCLUDE_DIR "include")

# Add executable target
add_executable(main.o
    ${SRC_DIR}/main.cpp
    ${SRC_DIR}/solution.cpp
)

# Include header files
target_include_directories(main.o PRIVATE ${INCLUDE_DIR})
