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
CMAKE_COMMAND = "D:\Programs\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programs\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex09_ReversedLines.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex09_ReversedLines.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex09_ReversedLines.dir/flags.make

CMakeFiles/ex09_ReversedLines.dir/main.cpp.obj: CMakeFiles/ex09_ReversedLines.dir/flags.make
CMakeFiles/ex09_ReversedLines.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex09_ReversedLines.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\ex09_ReversedLines.dir\main.cpp.obj -c D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\main.cpp

CMakeFiles/ex09_ReversedLines.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex09_ReversedLines.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\main.cpp > CMakeFiles\ex09_ReversedLines.dir\main.cpp.i

CMakeFiles/ex09_ReversedLines.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex09_ReversedLines.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\main.cpp -o CMakeFiles\ex09_ReversedLines.dir\main.cpp.s

# Object files for target ex09_ReversedLines
ex09_ReversedLines_OBJECTS = \
"CMakeFiles/ex09_ReversedLines.dir/main.cpp.obj"

# External object files for target ex09_ReversedLines
ex09_ReversedLines_EXTERNAL_OBJECTS =

ex09_ReversedLines.exe: CMakeFiles/ex09_ReversedLines.dir/main.cpp.obj
ex09_ReversedLines.exe: CMakeFiles/ex09_ReversedLines.dir/build.make
ex09_ReversedLines.exe: CMakeFiles/ex09_ReversedLines.dir/linklibs.rsp
ex09_ReversedLines.exe: CMakeFiles/ex09_ReversedLines.dir/objects1.rsp
ex09_ReversedLines.exe: CMakeFiles/ex09_ReversedLines.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex09_ReversedLines.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ex09_ReversedLines.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex09_ReversedLines.dir/build: ex09_ReversedLines.exe

.PHONY : CMakeFiles/ex09_ReversedLines.dir/build

CMakeFiles/ex09_ReversedLines.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ex09_ReversedLines.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ex09_ReversedLines.dir/clean

CMakeFiles/ex09_ReversedLines.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\cmake-build-debug D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\cmake-build-debug D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-03\day-2\ex09_ReversedLines\cmake-build-debug\CMakeFiles\ex09_ReversedLines.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex09_ReversedLines.dir/depend
