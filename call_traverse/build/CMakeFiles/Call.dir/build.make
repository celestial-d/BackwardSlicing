# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/duo/sda/backwardslicing/call_traverse

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/duo/sda/backwardslicing/call_traverse/build

# Include any dependencies generated for this target.
include CMakeFiles/Call.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Call.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Call.dir/flags.make

CMakeFiles/Call.dir/subcallgraph.cpp.o: CMakeFiles/Call.dir/flags.make
CMakeFiles/Call.dir/subcallgraph.cpp.o: ../subcallgraph.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duo/sda/backwardslicing/call_traverse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Call.dir/subcallgraph.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Call.dir/subcallgraph.cpp.o -c /home/duo/sda/backwardslicing/call_traverse/subcallgraph.cpp

CMakeFiles/Call.dir/subcallgraph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Call.dir/subcallgraph.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duo/sda/backwardslicing/call_traverse/subcallgraph.cpp > CMakeFiles/Call.dir/subcallgraph.cpp.i

CMakeFiles/Call.dir/subcallgraph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Call.dir/subcallgraph.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duo/sda/backwardslicing/call_traverse/subcallgraph.cpp -o CMakeFiles/Call.dir/subcallgraph.cpp.s

# Object files for target Call
Call_OBJECTS = \
"CMakeFiles/Call.dir/subcallgraph.cpp.o"

# External object files for target Call
Call_EXTERNAL_OBJECTS =

libCall.so: CMakeFiles/Call.dir/subcallgraph.cpp.o
libCall.so: CMakeFiles/Call.dir/build.make
libCall.so: CMakeFiles/Call.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/duo/sda/backwardslicing/call_traverse/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libCall.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Call.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Call.dir/build: libCall.so

.PHONY : CMakeFiles/Call.dir/build

CMakeFiles/Call.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Call.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Call.dir/clean

CMakeFiles/Call.dir/depend:
	cd /home/duo/sda/backwardslicing/call_traverse/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/duo/sda/backwardslicing/call_traverse /home/duo/sda/backwardslicing/call_traverse /home/duo/sda/backwardslicing/call_traverse/build /home/duo/sda/backwardslicing/call_traverse/build /home/duo/sda/backwardslicing/call_traverse/build/CMakeFiles/Call.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Call.dir/depend

