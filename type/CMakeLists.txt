cmake_minimum_required(VERSION 3.19)
project(type)

set(CMAKE_CXX_STANDARD 14)

add_executable(type main.cpp)
ADD_SUBDIRECTORY(const)
ADD_SUBDIRECTORY(static)