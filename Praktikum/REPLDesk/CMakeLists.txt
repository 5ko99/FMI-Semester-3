cmake_minimum_required(VERSION 3.14)
project(REPLDesk)

set(CMAKE_CXX_STANDARD 17)

add_executable(REPLDesk main.cpp Desk.cpp Desk.h Commands/ICommand.h Commands/Put.h Commands/Delete.h Commands/Undo.h Commands/Print.h)