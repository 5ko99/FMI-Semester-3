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
CMAKE_SOURCE_DIR = /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SocialNetwork.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SocialNetwork.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SocialNetwork.dir/flags.make

CMakeFiles/SocialNetwork.dir/main.cpp.o: CMakeFiles/SocialNetwork.dir/flags.make
CMakeFiles/SocialNetwork.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SocialNetwork.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SocialNetwork.dir/main.cpp.o -c /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/main.cpp

CMakeFiles/SocialNetwork.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SocialNetwork.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/main.cpp > CMakeFiles/SocialNetwork.dir/main.cpp.i

CMakeFiles/SocialNetwork.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SocialNetwork.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/main.cpp -o CMakeFiles/SocialNetwork.dir/main.cpp.s

# Object files for target SocialNetwork
SocialNetwork_OBJECTS = \
"CMakeFiles/SocialNetwork.dir/main.cpp.o"

# External object files for target SocialNetwork
SocialNetwork_EXTERNAL_OBJECTS =

SocialNetwork: CMakeFiles/SocialNetwork.dir/main.cpp.o
SocialNetwork: CMakeFiles/SocialNetwork.dir/build.make
SocialNetwork: CMakeFiles/SocialNetwork.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SocialNetwork"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SocialNetwork.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SocialNetwork.dir/build: SocialNetwork

.PHONY : CMakeFiles/SocialNetwork.dir/build

CMakeFiles/SocialNetwork.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SocialNetwork.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SocialNetwork.dir/clean

CMakeFiles/SocialNetwork.dir/depend:
	cd /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/cmake-build-debug /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/cmake-build-debug /home/petko/Workspace/FMI-Semester-3/Homework/SocialNetwork/cmake-build-debug/CMakeFiles/SocialNetwork.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SocialNetwork.dir/depend

