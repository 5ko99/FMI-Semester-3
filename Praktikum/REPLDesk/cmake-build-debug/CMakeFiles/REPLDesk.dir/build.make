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
CMAKE_SOURCE_DIR = C:\5ko\REPLDesk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\5ko\REPLDesk\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/REPLDesk.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/REPLDesk.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/REPLDesk.dir/flags.make

CMakeFiles/REPLDesk.dir/main.cpp.obj: CMakeFiles/REPLDesk.dir/flags.make
CMakeFiles/REPLDesk.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\5ko\REPLDesk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/REPLDesk.dir/main.cpp.obj"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\REPLDesk.dir\main.cpp.obj -c C:\5ko\REPLDesk\main.cpp

CMakeFiles/REPLDesk.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/REPLDesk.dir/main.cpp.i"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\5ko\REPLDesk\main.cpp > CMakeFiles\REPLDesk.dir\main.cpp.i

CMakeFiles/REPLDesk.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/REPLDesk.dir/main.cpp.s"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\5ko\REPLDesk\main.cpp -o CMakeFiles\REPLDesk.dir\main.cpp.s

CMakeFiles/REPLDesk.dir/Desk.cpp.obj: CMakeFiles/REPLDesk.dir/flags.make
CMakeFiles/REPLDesk.dir/Desk.cpp.obj: ../Desk.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\5ko\REPLDesk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/REPLDesk.dir/Desk.cpp.obj"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\REPLDesk.dir\Desk.cpp.obj -c C:\5ko\REPLDesk\Desk.cpp

CMakeFiles/REPLDesk.dir/Desk.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/REPLDesk.dir/Desk.cpp.i"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\5ko\REPLDesk\Desk.cpp > CMakeFiles\REPLDesk.dir\Desk.cpp.i

CMakeFiles/REPLDesk.dir/Desk.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/REPLDesk.dir/Desk.cpp.s"
	C:\PROGRA~1\HASKEL~1\86E4AC~1.5\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\5ko\REPLDesk\Desk.cpp -o CMakeFiles\REPLDesk.dir\Desk.cpp.s

# Object files for target REPLDesk
REPLDesk_OBJECTS = \
"CMakeFiles/REPLDesk.dir/main.cpp.obj" \
"CMakeFiles/REPLDesk.dir/Desk.cpp.obj"

# External object files for target REPLDesk
REPLDesk_EXTERNAL_OBJECTS =

REPLDesk.exe: CMakeFiles/REPLDesk.dir/main.cpp.obj
REPLDesk.exe: CMakeFiles/REPLDesk.dir/Desk.cpp.obj
REPLDesk.exe: CMakeFiles/REPLDesk.dir/build.make
REPLDesk.exe: CMakeFiles/REPLDesk.dir/linklibs.rsp
REPLDesk.exe: CMakeFiles/REPLDesk.dir/objects1.rsp
REPLDesk.exe: CMakeFiles/REPLDesk.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\5ko\REPLDesk\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable REPLDesk.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\REPLDesk.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/REPLDesk.dir/build: REPLDesk.exe

.PHONY : CMakeFiles/REPLDesk.dir/build

CMakeFiles/REPLDesk.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\REPLDesk.dir\cmake_clean.cmake
.PHONY : CMakeFiles/REPLDesk.dir/clean

CMakeFiles/REPLDesk.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\5ko\REPLDesk C:\5ko\REPLDesk C:\5ko\REPLDesk\cmake-build-debug C:\5ko\REPLDesk\cmake-build-debug C:\5ko\REPLDesk\cmake-build-debug\CMakeFiles\REPLDesk.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/REPLDesk.dir/depend

