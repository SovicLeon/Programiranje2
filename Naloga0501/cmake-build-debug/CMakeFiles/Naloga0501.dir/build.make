# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /cygdrive/c/Users/Leon/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Leon/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Naloga0501.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Naloga0501.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Naloga0501.dir/flags.make

CMakeFiles/Naloga0501.dir/main.cpp.o: CMakeFiles/Naloga0501.dir/flags.make
CMakeFiles/Naloga0501.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Naloga0501.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Naloga0501.dir/main.cpp.o -c /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/main.cpp

CMakeFiles/Naloga0501.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Naloga0501.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/main.cpp > CMakeFiles/Naloga0501.dir/main.cpp.i

CMakeFiles/Naloga0501.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Naloga0501.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/main.cpp -o CMakeFiles/Naloga0501.dir/main.cpp.s

# Object files for target Naloga0501
Naloga0501_OBJECTS = \
"CMakeFiles/Naloga0501.dir/main.cpp.o"

# External object files for target Naloga0501
Naloga0501_EXTERNAL_OBJECTS =

Naloga0501.exe: CMakeFiles/Naloga0501.dir/main.cpp.o
Naloga0501.exe: CMakeFiles/Naloga0501.dir/build.make
Naloga0501.exe: CMakeFiles/Naloga0501.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Naloga0501.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Naloga0501.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Naloga0501.dir/build: Naloga0501.exe
.PHONY : CMakeFiles/Naloga0501.dir/build

CMakeFiles/Naloga0501.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Naloga0501.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Naloga0501.dir/clean

CMakeFiles/Naloga0501.dir/depend:
	cd /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501 /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501 /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/cmake-build-debug /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/cmake-build-debug /cygdrive/d/Faks/2semester/Programiranje2/Naloga0501/cmake-build-debug/CMakeFiles/Naloga0501.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Naloga0501.dir/depend
