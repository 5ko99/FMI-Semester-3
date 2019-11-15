cmake_minimum_required(VERSION 3.15)
project(Expressions)

set(CMAKE_CXX_STANDARD 17)

add_executable(Expressions main.cpp functions.cpp Parser.cpp Parser.h Functions/IFunction.h Functions/f.h Functions/g.h Functions/m.h)