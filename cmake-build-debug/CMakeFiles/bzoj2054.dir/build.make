# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.25.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.25.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yuchengfan/Desktop/C艹

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yuchengfan/Desktop/C艹/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bzoj2054.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bzoj2054.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bzoj2054.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bzoj2054.dir/flags.make

CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o: CMakeFiles/bzoj2054.dir/flags.make
CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o: /Users/yuchengfan/Desktop/C艹/csps/疯狂的馒头bzoj2054.cpp
CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o: CMakeFiles/bzoj2054.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yuchengfan/Desktop/C艹/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o"
	/opt/homebrew/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o -MF CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o.d -o CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o -c /Users/yuchengfan/Desktop/C艹/csps/疯狂的馒头bzoj2054.cpp

CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.i"
	/opt/homebrew/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/yuchengfan/Desktop/C艹/csps/疯狂的馒头bzoj2054.cpp > CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.i

CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.s"
	/opt/homebrew/bin/g++-12 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/yuchengfan/Desktop/C艹/csps/疯狂的馒头bzoj2054.cpp -o CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.s

# Object files for target bzoj2054
bzoj2054_OBJECTS = \
"CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o"

# External object files for target bzoj2054
bzoj2054_EXTERNAL_OBJECTS =

bzoj2054: CMakeFiles/bzoj2054.dir/csps/疯狂的馒头bzoj2054.cpp.o
bzoj2054: CMakeFiles/bzoj2054.dir/build.make
bzoj2054: CMakeFiles/bzoj2054.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yuchengfan/Desktop/C艹/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bzoj2054"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bzoj2054.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bzoj2054.dir/build: bzoj2054
.PHONY : CMakeFiles/bzoj2054.dir/build

CMakeFiles/bzoj2054.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bzoj2054.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bzoj2054.dir/clean

CMakeFiles/bzoj2054.dir/depend:
	cd /Users/yuchengfan/Desktop/C艹/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yuchengfan/Desktop/C艹 /Users/yuchengfan/Desktop/C艹 /Users/yuchengfan/Desktop/C艹/cmake-build-debug /Users/yuchengfan/Desktop/C艹/cmake-build-debug /Users/yuchengfan/Desktop/C艹/cmake-build-debug/CMakeFiles/bzoj2054.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bzoj2054.dir/depend
