# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/TPINFO.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TPINFO.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TPINFO.dir/flags.make

CMakeFiles/TPINFO.dir/main.c.o: CMakeFiles/TPINFO.dir/flags.make
CMakeFiles/TPINFO.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TPINFO.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/TPINFO.dir/main.c.o   -c "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/main.c"

CMakeFiles/TPINFO.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TPINFO.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/main.c" > CMakeFiles/TPINFO.dir/main.c.i

CMakeFiles/TPINFO.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TPINFO.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/main.c" -o CMakeFiles/TPINFO.dir/main.c.s

# Object files for target TPINFO
TPINFO_OBJECTS = \
"CMakeFiles/TPINFO.dir/main.c.o"

# External object files for target TPINFO
TPINFO_EXTERNAL_OBJECTS =

TPINFO: CMakeFiles/TPINFO.dir/main.c.o
TPINFO: CMakeFiles/TPINFO.dir/build.make
TPINFO: CMakeFiles/TPINFO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TPINFO"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TPINFO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TPINFO.dir/build: TPINFO

.PHONY : CMakeFiles/TPINFO.dir/build

CMakeFiles/TPINFO.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TPINFO.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TPINFO.dir/clean

CMakeFiles/TPINFO.dir/depend:
	cd "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO" "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO" "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/cmake-build-debug" "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/cmake-build-debug" "/Users/arthur/Documents/Documents - MacBook Air de Arthur/GitHub/dut_rt/RTAM1207/TPINFO/cmake-build-debug/CMakeFiles/TPINFO.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/TPINFO.dir/depend

