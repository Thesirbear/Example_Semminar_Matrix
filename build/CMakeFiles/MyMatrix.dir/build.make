# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/student/Downloads/code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/student/Downloads/code/build

# Include any dependencies generated for this target.
include CMakeFiles/MyMatrix.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MyMatrix.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MyMatrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyMatrix.dir/flags.make

CMakeFiles/MyMatrix.dir/main.cpp.o: CMakeFiles/MyMatrix.dir/flags.make
CMakeFiles/MyMatrix.dir/main.cpp.o: /Users/student/Downloads/code/main.cpp
CMakeFiles/MyMatrix.dir/main.cpp.o: CMakeFiles/MyMatrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/student/Downloads/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyMatrix.dir/main.cpp.o"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyMatrix.dir/main.cpp.o -MF CMakeFiles/MyMatrix.dir/main.cpp.o.d -o CMakeFiles/MyMatrix.dir/main.cpp.o -c /Users/student/Downloads/code/main.cpp

CMakeFiles/MyMatrix.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyMatrix.dir/main.cpp.i"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/student/Downloads/code/main.cpp > CMakeFiles/MyMatrix.dir/main.cpp.i

CMakeFiles/MyMatrix.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyMatrix.dir/main.cpp.s"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/student/Downloads/code/main.cpp -o CMakeFiles/MyMatrix.dir/main.cpp.s

CMakeFiles/MyMatrix.dir/matrix.cpp.o: CMakeFiles/MyMatrix.dir/flags.make
CMakeFiles/MyMatrix.dir/matrix.cpp.o: /Users/student/Downloads/code/matrix.cpp
CMakeFiles/MyMatrix.dir/matrix.cpp.o: CMakeFiles/MyMatrix.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/student/Downloads/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyMatrix.dir/matrix.cpp.o"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MyMatrix.dir/matrix.cpp.o -MF CMakeFiles/MyMatrix.dir/matrix.cpp.o.d -o CMakeFiles/MyMatrix.dir/matrix.cpp.o -c /Users/student/Downloads/code/matrix.cpp

CMakeFiles/MyMatrix.dir/matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MyMatrix.dir/matrix.cpp.i"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/student/Downloads/code/matrix.cpp > CMakeFiles/MyMatrix.dir/matrix.cpp.i

CMakeFiles/MyMatrix.dir/matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MyMatrix.dir/matrix.cpp.s"
	/opt/homebrew/opt/llvm/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/student/Downloads/code/matrix.cpp -o CMakeFiles/MyMatrix.dir/matrix.cpp.s

# Object files for target MyMatrix
MyMatrix_OBJECTS = \
"CMakeFiles/MyMatrix.dir/main.cpp.o" \
"CMakeFiles/MyMatrix.dir/matrix.cpp.o"

# External object files for target MyMatrix
MyMatrix_EXTERNAL_OBJECTS =

MyMatrix: CMakeFiles/MyMatrix.dir/main.cpp.o
MyMatrix: CMakeFiles/MyMatrix.dir/matrix.cpp.o
MyMatrix: CMakeFiles/MyMatrix.dir/build.make
MyMatrix: CMakeFiles/MyMatrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/student/Downloads/code/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MyMatrix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyMatrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyMatrix.dir/build: MyMatrix
.PHONY : CMakeFiles/MyMatrix.dir/build

CMakeFiles/MyMatrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyMatrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyMatrix.dir/clean

CMakeFiles/MyMatrix.dir/depend:
	cd /Users/student/Downloads/code/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/student/Downloads/code /Users/student/Downloads/code /Users/student/Downloads/code/build /Users/student/Downloads/code/build /Users/student/Downloads/code/build/CMakeFiles/MyMatrix.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/MyMatrix.dir/depend

