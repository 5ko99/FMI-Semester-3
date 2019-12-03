cmake_minimum_required(VERSION 3.14)
project(CyclicList)

set(CMAKE_CXX_STANDARD 17)

add_executable(CyclicList main.cpp CyclicList.cpp CyclicList.h Node.h)