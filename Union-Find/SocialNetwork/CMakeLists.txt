cmake_minimum_required(VERSION 3.15)
project(SocialNetwork)

set(CMAKE_CXX_STANDARD 17)

add_executable(SocialNetwork main.cpp DisjointSet.cpp DisjointSet.h ReadFromFile.cpp ReadFromFile.h)