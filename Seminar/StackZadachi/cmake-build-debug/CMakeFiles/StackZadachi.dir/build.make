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
CMAKE_SOURCE_DIR = /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StackZadachi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StackZadachi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StackZadachi.dir/flags.make

CMakeFiles/StackZadachi.dir/main.cpp.o: CMakeFiles/StackZadachi.dir/flags.make
CMakeFiles/StackZadachi.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StackZadachi.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StackZadachi.dir/main.cpp.o -c /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/main.cpp

CMakeFiles/StackZadachi.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackZadachi.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/main.cpp > CMakeFiles/StackZadachi.dir/main.cpp.i

CMakeFiles/StackZadachi.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackZadachi.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/main.cpp -o CMakeFiles/StackZadachi.dir/main.cpp.s

CMakeFiles/StackZadachi.dir/Stack.cpp.o: CMakeFiles/StackZadachi.dir/flags.make
CMakeFiles/StackZadachi.dir/Stack.cpp.o: ../Stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/StackZadachi.dir/Stack.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/StackZadachi.dir/Stack.cpp.o -c /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/Stack.cpp

CMakeFiles/StackZadachi.dir/Stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StackZadachi.dir/Stack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/Stack.cpp > CMakeFiles/StackZadachi.dir/Stack.cpp.i

CMakeFiles/StackZadachi.dir/Stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StackZadachi.dir/Stack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/Stack.cpp -o CMakeFiles/StackZadachi.dir/Stack.cpp.s

# Object files for target StackZadachi
StackZadachi_OBJECTS = \
"CMakeFiles/StackZadachi.dir/main.cpp.o" \
"CMakeFiles/StackZadachi.dir/Stack.cpp.o"

# External object files for target StackZadachi
StackZadachi_EXTERNAL_OBJECTS =

StackZadachi: CMakeFiles/StackZadachi.dir/main.cpp.o
StackZadachi: CMakeFiles/StackZadachi.dir/Stack.cpp.o
StackZadachi: CMakeFiles/StackZadachi.dir/build.make
StackZadachi: CMakeFiles/StackZadachi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable StackZadachi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/StackZadachi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StackZadachi.dir/build: StackZadachi

.PHONY : CMakeFiles/StackZadachi.dir/build

CMakeFiles/StackZadachi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/StackZadachi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/StackZadachi.dir/clean

CMakeFiles/StackZadachi.dir/depend:
	cd /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/cmake-build-debug /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/cmake-build-debug /home/petko/Workspace/FMI-Semester-3/Seminar/StackZadachi/cmake-build-debug/CMakeFiles/StackZadachi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StackZadachi.dir/depend

