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
CMAKE_SOURCE_DIR = /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Naloga0201.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Naloga0201.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Naloga0201.dir/flags.make

CMakeFiles/Naloga0201.dir/naloga0201.cpp.o: CMakeFiles/Naloga0201.dir/flags.make
CMakeFiles/Naloga0201.dir/naloga0201.cpp.o: ../naloga0201.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Naloga0201.dir/naloga0201.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Naloga0201.dir/naloga0201.cpp.o -c /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/naloga0201.cpp

CMakeFiles/Naloga0201.dir/naloga0201.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Naloga0201.dir/naloga0201.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/naloga0201.cpp > CMakeFiles/Naloga0201.dir/naloga0201.cpp.i

CMakeFiles/Naloga0201.dir/naloga0201.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Naloga0201.dir/naloga0201.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/naloga0201.cpp -o CMakeFiles/Naloga0201.dir/naloga0201.cpp.s

CMakeFiles/Naloga0201.dir/Artwork.cpp.o: CMakeFiles/Naloga0201.dir/flags.make
CMakeFiles/Naloga0201.dir/Artwork.cpp.o: ../Artwork.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Naloga0201.dir/Artwork.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Naloga0201.dir/Artwork.cpp.o -c /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/Artwork.cpp

CMakeFiles/Naloga0201.dir/Artwork.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Naloga0201.dir/Artwork.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/Artwork.cpp > CMakeFiles/Naloga0201.dir/Artwork.cpp.i

CMakeFiles/Naloga0201.dir/Artwork.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Naloga0201.dir/Artwork.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/Artwork.cpp -o CMakeFiles/Naloga0201.dir/Artwork.cpp.s

# Object files for target Naloga0201
Naloga0201_OBJECTS = \
"CMakeFiles/Naloga0201.dir/naloga0201.cpp.o" \
"CMakeFiles/Naloga0201.dir/Artwork.cpp.o"

# External object files for target Naloga0201
Naloga0201_EXTERNAL_OBJECTS =

Naloga0201.exe: CMakeFiles/Naloga0201.dir/naloga0201.cpp.o
Naloga0201.exe: CMakeFiles/Naloga0201.dir/Artwork.cpp.o
Naloga0201.exe: CMakeFiles/Naloga0201.dir/build.make
Naloga0201.exe: CMakeFiles/Naloga0201.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Naloga0201.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Naloga0201.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Naloga0201.dir/build: Naloga0201.exe
.PHONY : CMakeFiles/Naloga0201.dir/build

CMakeFiles/Naloga0201.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Naloga0201.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Naloga0201.dir/clean

CMakeFiles/Naloga0201.dir/depend:
	cd /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201 /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201 /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/cmake-build-debug /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/cmake-build-debug /cygdrive/d/Faks/2semester/Programiranje2/Naloga0201/cmake-build-debug/CMakeFiles/Naloga0201.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Naloga0201.dir/depend

