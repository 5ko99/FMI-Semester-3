cmake_minimum_required(VERSION 3.15)
project(CycledLinkedList)

set(CMAKE_CXX_STANDARD 17)

add_library(CycledLinkedList library.cpp library.h LinkedListIterator.cpp LinkedListIterator.h)