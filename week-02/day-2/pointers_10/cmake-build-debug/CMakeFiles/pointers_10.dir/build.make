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
CMAKE_SOURCE_DIR = D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pointers_10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointers_10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointers_10.dir/flags.make

CMakeFiles/pointers_10.dir/main.cpp.obj: CMakeFiles/pointers_10.dir/flags.make
CMakeFiles/pointers_10.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointers_10.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pointers_10.dir\main.cpp.obj -c D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\main.cpp

CMakeFiles/pointers_10.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointers_10.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\main.cpp > CMakeFiles\pointers_10.dir\main.cpp.i

CMakeFiles/pointers_10.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointers_10.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\main.cpp -o CMakeFiles\pointers_10.dir\main.cpp.s

# Object files for target pointers_10
pointers_10_OBJECTS = \
"CMakeFiles/pointers_10.dir/main.cpp.obj"

# External object files for target pointers_10
pointers_10_EXTERNAL_OBJECTS =

pointers_10.exe: CMakeFiles/pointers_10.dir/main.cpp.obj
pointers_10.exe: CMakeFiles/pointers_10.dir/build.make
pointers_10.exe: CMakeFiles/pointers_10.dir/linklibs.rsp
pointers_10.exe: CMakeFiles/pointers_10.dir/objects1.rsp
pointers_10.exe: CMakeFiles/pointers_10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pointers_10.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pointers_10.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointers_10.dir/build: pointers_10.exe

.PHONY : CMakeFiles/pointers_10.dir/build

CMakeFiles/pointers_10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pointers_10.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pointers_10.dir/clean

CMakeFiles/pointers_10.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10 D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10 D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\cmake-build-debug D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\cmake-build-debug D:\GreenFoxAcademy\greenfox\chama-balintkemeny\week-02\day-2\pointers_10\cmake-build-debug\CMakeFiles\pointers_10.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointers_10.dir/depend

