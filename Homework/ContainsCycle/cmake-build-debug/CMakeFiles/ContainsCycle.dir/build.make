# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/98/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/98/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ContainsCycle.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ContainsCycle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ContainsCycle.dir/flags.make

CMakeFiles/ContainsCycle.dir/main.cpp.o: CMakeFiles/ContainsCycle.dir/flags.make
CMakeFiles/ContainsCycle.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ContainsCycle.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ContainsCycle.dir/main.cpp.o -c /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/main.cpp

CMakeFiles/ContainsCycle.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ContainsCycle.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/main.cpp > CMakeFiles/ContainsCycle.dir/main.cpp.i

CMakeFiles/ContainsCycle.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ContainsCycle.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/main.cpp -o CMakeFiles/ContainsCycle.dir/main.cpp.s

# Object files for target ContainsCycle
ContainsCycle_OBJECTS = \
"CMakeFiles/ContainsCycle.dir/main.cpp.o"

# External object files for target ContainsCycle
ContainsCycle_EXTERNAL_OBJECTS =

ContainsCycle: CMakeFiles/ContainsCycle.dir/main.cpp.o
ContainsCycle: CMakeFiles/ContainsCycle.dir/build.make
ContainsCycle: CMakeFiles/ContainsCycle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ContainsCycle"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ContainsCycle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ContainsCycle.dir/build: ContainsCycle

.PHONY : CMakeFiles/ContainsCycle.dir/build

CMakeFiles/ContainsCycle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ContainsCycle.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ContainsCycle.dir/clean

CMakeFiles/ContainsCycle.dir/depend:
	cd /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/cmake-build-debug /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/cmake-build-debug /home/petko/Workspace/FMI-Semester-3/Homework/ContainsCycle/cmake-build-debug/CMakeFiles/ContainsCycle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ContainsCycle.dir/depend
