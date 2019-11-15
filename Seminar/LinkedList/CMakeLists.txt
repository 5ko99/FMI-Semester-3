cmake_minimum_required(VERSION 3.14)
project(LinkedList)

set(CMAKE_CXX_STANDARD 17)

add_executable(LinkedList main.cpp LL/LinkedList.h LL/LinkedListIterator.h LL/Node.h)