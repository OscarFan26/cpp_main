# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/fzr_o/Desktop/C艹

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/fzr_o/Desktop/C艹/cmake-build-debug-wsl

# Include any dependencies generated for this target.
include CMakeFiles/bdcf.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bdcf.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bdcf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bdcf.dir/flags.make

CMakeFiles/bdcf.dir/csps/边的查分.cpp.o: CMakeFiles/bdcf.dir/flags.make
CMakeFiles/bdcf.dir/csps/边的查分.cpp.o: /mnt/c/Users/fzr_o/Desktop/C艹/csps/边的查分.cpp
CMakeFiles/bdcf.dir/csps/边的查分.cpp.o: CMakeFiles/bdcf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/fzr_o/Desktop/C艹/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bdcf.dir/csps/边的查分.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bdcf.dir/csps/边的查分.cpp.o -MF CMakeFiles/bdcf.dir/csps/边的查分.cpp.o.d -o CMakeFiles/bdcf.dir/csps/边的查分.cpp.o -c /mnt/c/Users/fzr_o/Desktop/C艹/csps/边的查分.cpp

CMakeFiles/bdcf.dir/csps/边的查分.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bdcf.dir/csps/边的查分.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/fzr_o/Desktop/C艹/csps/边的查分.cpp > CMakeFiles/bdcf.dir/csps/边的查分.cpp.i

CMakeFiles/bdcf.dir/csps/边的查分.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bdcf.dir/csps/边的查分.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/fzr_o/Desktop/C艹/csps/边的查分.cpp -o CMakeFiles/bdcf.dir/csps/边的查分.cpp.s

# Object files for target bdcf
bdcf_OBJECTS = \
"CMakeFiles/bdcf.dir/csps/边的查分.cpp.o"

# External object files for target bdcf
bdcf_EXTERNAL_OBJECTS =

bdcf: CMakeFiles/bdcf.dir/csps/边的查分.cpp.o
bdcf: CMakeFiles/bdcf.dir/build.make
bdcf: CMakeFiles/bdcf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/fzr_o/Desktop/C艹/cmake-build-debug-wsl/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bdcf"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bdcf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bdcf.dir/build: bdcf
.PHONY : CMakeFiles/bdcf.dir/build

CMakeFiles/bdcf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bdcf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bdcf.dir/clean

CMakeFiles/bdcf.dir/depend:
	cd /mnt/c/Users/fzr_o/Desktop/C艹/cmake-build-debug-wsl && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/fzr_o/Desktop/C艹 /mnt/c/Users/fzr_o/Desktop/C艹 /mnt/c/Users/fzr_o/Desktop/C艹/cmake-build-debug-wsl /mnt/c/Users/fzr_o/Desktop/C艹/cmake-build-debug-wsl /mnt/c/Users/fzr_o/Desktop/C艹/cmake-build-debug-wsl/CMakeFiles/bdcf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bdcf.dir/depend

