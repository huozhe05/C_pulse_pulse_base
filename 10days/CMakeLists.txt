cmake_minimum_required(VERSION 3.19)
project(10days)

set(CMAKE_CXX_STANDARD 14)

add_executable(10days main.cpp)

ADD_SUBDIRECTORY(one_day)
ADD_SUBDIRECTORY(two_day)
ADD_SUBDIRECTORY(three_day)