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
CMAKE_SOURCE_DIR = D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/functions_ex_08.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/functions_ex_08.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/functions_ex_08.dir/flags.make

CMakeFiles/functions_ex_08.dir/main.cpp.obj: CMakeFiles/functions_ex_08.dir/flags.make
CMakeFiles/functions_ex_08.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/functions_ex_08.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\functions_ex_08.dir\main.cpp.obj -c D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\main.cpp

CMakeFiles/functions_ex_08.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/functions_ex_08.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\main.cpp > CMakeFiles\functions_ex_08.dir\main.cpp.i

CMakeFiles/functions_ex_08.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/functions_ex_08.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\main.cpp -o CMakeFiles\functions_ex_08.dir\main.cpp.s

# Object files for target functions_ex_08
functions_ex_08_OBJECTS = \
"CMakeFiles/functions_ex_08.dir/main.cpp.obj"

# External object files for target functions_ex_08
functions_ex_08_EXTERNAL_OBJECTS =

functions_ex_08.exe: CMakeFiles/functions_ex_08.dir/main.cpp.obj
functions_ex_08.exe: CMakeFiles/functions_ex_08.dir/build.make
functions_ex_08.exe: CMakeFiles/functions_ex_08.dir/linklibs.rsp
functions_ex_08.exe: CMakeFiles/functions_ex_08.dir/objects1.rsp
functions_ex_08.exe: CMakeFiles/functions_ex_08.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable functions_ex_08.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\functions_ex_08.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/functions_ex_08.dir/build: functions_ex_08.exe

.PHONY : CMakeFiles/functions_ex_08.dir/build

CMakeFiles/functions_ex_08.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\functions_ex_08.dir\cmake_clean.cmake
.PHONY : CMakeFiles/functions_ex_08.dir/clean

CMakeFiles/functions_ex_08.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08 D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08 D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\cmake-build-debug D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\cmake-build-debug D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-01\day-5\functions_ex_08\cmake-build-debug\CMakeFiles\functions_ex_08.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/functions_ex_08.dir/depend
