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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/f/Desktop/C艹

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/f/Desktop/C艹/build

# Include any dependencies generated for this target.
include CMakeFiles/TRIE_STRUCT_word_prefix.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TRIE_STRUCT_word_prefix.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TRIE_STRUCT_word_prefix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TRIE_STRUCT_word_prefix.dir/flags.make

CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o: CMakeFiles/TRIE_STRUCT_word_prefix.dir/flags.make
CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o: /mnt/f/Desktop/C艹/csps/TRIE_STRUCT_word_prefix.cpp
CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o: CMakeFiles/TRIE_STRUCT_word_prefix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/f/Desktop/C艹/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o -MF CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o.d -o CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o -c /mnt/f/Desktop/C艹/csps/TRIE_STRUCT_word_prefix.cpp

CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/f/Desktop/C艹/csps/TRIE_STRUCT_word_prefix.cpp > CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.i

CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/f/Desktop/C艹/csps/TRIE_STRUCT_word_prefix.cpp -o CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.s

# Object files for target TRIE_STRUCT_word_prefix
TRIE_STRUCT_word_prefix_OBJECTS = \
"CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o"

# External object files for target TRIE_STRUCT_word_prefix
TRIE_STRUCT_word_prefix_EXTERNAL_OBJECTS =

TRIE_STRUCT_word_prefix: CMakeFiles/TRIE_STRUCT_word_prefix.dir/csps/TRIE_STRUCT_word_prefix.cpp.o
TRIE_STRUCT_word_prefix: CMakeFiles/TRIE_STRUCT_word_prefix.dir/build.make
TRIE_STRUCT_word_prefix: CMakeFiles/TRIE_STRUCT_word_prefix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/f/Desktop/C艹/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TRIE_STRUCT_word_prefix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TRIE_STRUCT_word_prefix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TRIE_STRUCT_word_prefix.dir/build: TRIE_STRUCT_word_prefix
.PHONY : CMakeFiles/TRIE_STRUCT_word_prefix.dir/build

CMakeFiles/TRIE_STRUCT_word_prefix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TRIE_STRUCT_word_prefix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TRIE_STRUCT_word_prefix.dir/clean

CMakeFiles/TRIE_STRUCT_word_prefix.dir/depend:
	cd /mnt/f/Desktop/C艹/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/f/Desktop/C艹 /mnt/f/Desktop/C艹 /mnt/f/Desktop/C艹/build /mnt/f/Desktop/C艹/build /mnt/f/Desktop/C艹/build/CMakeFiles/TRIE_STRUCT_word_prefix.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TRIE_STRUCT_word_prefix.dir/depend
