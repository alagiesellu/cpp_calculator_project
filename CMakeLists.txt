cmake_minimum_required(VERSION 3.20)
project(cpp_calculator_project)

set(CMAKE_CXX_STANDARD 14)


add_executable(cpp_calculator_project main.cpp)

target_include_directories(cpp_calculator_project PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/gen)

set(ANTLR4_RUNTIME_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libs/antlr4/runtime/Cpp/run/usr/local/include/antlr4-runtime)
target_include_directories(cpp_calculator_project PUBLIC ${ANTLR4_RUNTIME_DIR})