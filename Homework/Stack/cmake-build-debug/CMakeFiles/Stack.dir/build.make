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
CMAKE_COMMAND = /snap/clion/88/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/88/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Stack.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Stack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Stack.dir/flags.make

CMakeFiles/Stack.dir/library.cpp.o: CMakeFiles/Stack.dir/flags.make
CMakeFiles/Stack.dir/library.cpp.o: ../library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Stack.dir/library.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Stack.dir/library.cpp.o -c /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/library.cpp

CMakeFiles/Stack.dir/library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Stack.dir/library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/library.cpp > CMakeFiles/Stack.dir/library.cpp.i

CMakeFiles/Stack.dir/library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Stack.dir/library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/library.cpp -o CMakeFiles/Stack.dir/library.cpp.s

# Object files for target Stack
Stack_OBJECTS = \
"CMakeFiles/Stack.dir/library.cpp.o"

# External object files for target Stack
Stack_EXTERNAL_OBJECTS =

libStack.a: CMakeFiles/Stack.dir/library.cpp.o
libStack.a: CMakeFiles/Stack.dir/build.make
libStack.a: CMakeFiles/Stack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libStack.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Stack.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Stack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Stack.dir/build: libStack.a

.PHONY : CMakeFiles/Stack.dir/build

CMakeFiles/Stack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Stack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Stack.dir/clean

CMakeFiles/Stack.dir/depend:
	cd /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/cmake-build-debug /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/cmake-build-debug /home/petko/WorkSpace/FMI-Semester-3/Seminar/Stack/cmake-build-debug/CMakeFiles/Stack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Stack.dir/depend
