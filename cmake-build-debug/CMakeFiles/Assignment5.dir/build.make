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
CMAKE_COMMAND = "/cygdrive/c/Users/Raiymbek Nurtay/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe"

# The command to remove a file.
RM = "/cygdrive/c/Users/Raiymbek Nurtay/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment5.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Assignment5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment5.dir/flags.make

CMakeFiles/Assignment5.dir/main.cpp.o: CMakeFiles/Assignment5.dir/flags.make
CMakeFiles/Assignment5.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment5.dir/main.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment5.dir/main.cpp.o -c "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/main.cpp"

CMakeFiles/Assignment5.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment5.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/main.cpp" > CMakeFiles/Assignment5.dir/main.cpp.i

CMakeFiles/Assignment5.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment5.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/main.cpp" -o CMakeFiles/Assignment5.dir/main.cpp.s

CMakeFiles/Assignment5.dir/Board.cpp.o: CMakeFiles/Assignment5.dir/flags.make
CMakeFiles/Assignment5.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment5.dir/Board.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment5.dir/Board.cpp.o -c "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/Board.cpp"

CMakeFiles/Assignment5.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment5.dir/Board.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/Board.cpp" > CMakeFiles/Assignment5.dir/Board.cpp.i

CMakeFiles/Assignment5.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment5.dir/Board.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/Board.cpp" -o CMakeFiles/Assignment5.dir/Board.cpp.s

CMakeFiles/Assignment5.dir/Player.cpp.o: CMakeFiles/Assignment5.dir/flags.make
CMakeFiles/Assignment5.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Assignment5.dir/Player.cpp.o"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment5.dir/Player.cpp.o -c "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/Player.cpp"

CMakeFiles/Assignment5.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment5.dir/Player.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/Player.cpp" > CMakeFiles/Assignment5.dir/Player.cpp.i

CMakeFiles/Assignment5.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment5.dir/Player.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/Player.cpp" -o CMakeFiles/Assignment5.dir/Player.cpp.s

# Object files for target Assignment5
Assignment5_OBJECTS = \
"CMakeFiles/Assignment5.dir/main.cpp.o" \
"CMakeFiles/Assignment5.dir/Board.cpp.o" \
"CMakeFiles/Assignment5.dir/Player.cpp.o"

# External object files for target Assignment5
Assignment5_EXTERNAL_OBJECTS =

Assignment5.exe: CMakeFiles/Assignment5.dir/main.cpp.o
Assignment5.exe: CMakeFiles/Assignment5.dir/Board.cpp.o
Assignment5.exe: CMakeFiles/Assignment5.dir/Player.cpp.o
Assignment5.exe: CMakeFiles/Assignment5.dir/build.make
Assignment5.exe: CMakeFiles/Assignment5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Assignment5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment5.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment5.dir/build: Assignment5.exe
.PHONY : CMakeFiles/Assignment5.dir/build

CMakeFiles/Assignment5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment5.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment5.dir/clean

CMakeFiles/Assignment5.dir/depend:
	cd "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5" "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5" "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug" "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug" "/cygdrive/c/Users/Raiymbek Nurtay/CLionProjects/Assignment5/cmake-build-debug/CMakeFiles/Assignment5.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment5.dir/depend

