# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\grade\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6603.37\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\grade\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\192.6603.37\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Petko\26.11.19\WithList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Petko\26.11.19\WithList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/WithList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/WithList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/WithList.dir/flags.make

CMakeFiles/WithList.dir/main.cpp.obj: CMakeFiles/WithList.dir/flags.make
CMakeFiles/WithList.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Petko\26.11.19\WithList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/WithList.dir/main.cpp.obj"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\WithList.dir\main.cpp.obj -c D:\Petko\26.11.19\WithList\main.cpp

CMakeFiles/WithList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/WithList.dir/main.cpp.i"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Petko\26.11.19\WithList\main.cpp > CMakeFiles\WithList.dir\main.cpp.i

CMakeFiles/WithList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/WithList.dir/main.cpp.s"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Petko\26.11.19\WithList\main.cpp -o CMakeFiles\WithList.dir\main.cpp.s

# Object files for target WithList
WithList_OBJECTS = \
"CMakeFiles/WithList.dir/main.cpp.obj"

# External object files for target WithList
WithList_EXTERNAL_OBJECTS =

WithList.exe: CMakeFiles/WithList.dir/main.cpp.obj
WithList.exe: CMakeFiles/WithList.dir/build.make
WithList.exe: CMakeFiles/WithList.dir/linklibs.rsp
WithList.exe: CMakeFiles/WithList.dir/objects1.rsp
WithList.exe: CMakeFiles/WithList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Petko\26.11.19\WithList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable WithList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\WithList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/WithList.dir/build: WithList.exe

.PHONY : CMakeFiles/WithList.dir/build

CMakeFiles/WithList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\WithList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/WithList.dir/clean

CMakeFiles/WithList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Petko\26.11.19\WithList D:\Petko\26.11.19\WithList D:\Petko\26.11.19\WithList\cmake-build-debug D:\Petko\26.11.19\WithList\cmake-build-debug D:\Petko\26.11.19\WithList\cmake-build-debug\CMakeFiles\WithList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/WithList.dir/depend

