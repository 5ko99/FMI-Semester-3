cmake_minimum_required(VERSION 3.15)
project(BinOrdTree3)

set(CMAKE_CXX_STANDARD 20)

add_executable(BinOrdTree3 main.cpp BinOrdTree/TNode.h BinOrdTree/BinOrdTree.cpp BinOrdTree/BinOrdTree.h Pair.h)