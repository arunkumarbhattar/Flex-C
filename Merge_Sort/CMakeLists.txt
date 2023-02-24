cmake_minimum_required(VERSION 3.5)

# Set the compiler and its flags
set(CMAKE_C_COMPILER /home/supercharger/CheckCBox_Compiler/llvm/cmake-build-debug/bin/clang)
#set(CMAKE_C_COMPILER /home/supercharger/extraspace/macro/checkedc-llvm-project/llvm/build/bin/clang)
set(CMAKE_C_FLAGS "-Wall -Wextra -g")

# Set the name of the target executable
set(PROGRAM mergeSort)

# Add the executable targets
add_executable(original ${PROGRAM}.c)
add_executable(checked ${PROGRAM}.checked.c)
add_executable(just3c ${PROGRAM}.just3c.c)
add_executable(manual ${PROGRAM}.mChecked.c)