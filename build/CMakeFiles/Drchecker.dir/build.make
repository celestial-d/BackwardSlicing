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
CMAKE_SOURCE_DIR = /home/duo/sda/backwardslicing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/duo/sda/backwardslicing/build

# Include any dependencies generated for this target.
include CMakeFiles/Drchecker.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Drchecker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Drchecker.dir/flags.make

CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.o: CMakeFiles/Drchecker.dir/flags.make
CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.o: ../BackwardSlicing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/duo/sda/backwardslicing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.o -c /home/duo/sda/backwardslicing/BackwardSlicing.cpp

CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/duo/sda/backwardslicing/BackwardSlicing.cpp > CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.i

CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/duo/sda/backwardslicing/BackwardSlicing.cpp -o CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.s

# Object files for target Drchecker
Drchecker_OBJECTS = \
"CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.o"

# External object files for target Drchecker
Drchecker_EXTERNAL_OBJECTS =

libDrchecker.so: CMakeFiles/Drchecker.dir/BackwardSlicing.cpp.o
libDrchecker.so: CMakeFiles/Drchecker.dir/build.make
libDrchecker.so: CMakeFiles/Drchecker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/duo/sda/backwardslicing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libDrchecker.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Drchecker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Drchecker.dir/build: libDrchecker.so

.PHONY : CMakeFiles/Drchecker.dir/build

CMakeFiles/Drchecker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Drchecker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Drchecker.dir/clean

CMakeFiles/Drchecker.dir/depend:
	cd /home/duo/sda/backwardslicing/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/duo/sda/backwardslicing /home/duo/sda/backwardslicing /home/duo/sda/backwardslicing/build /home/duo/sda/backwardslicing/build /home/duo/sda/backwardslicing/build/CMakeFiles/Drchecker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Drchecker.dir/depend

