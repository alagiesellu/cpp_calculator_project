# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

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
CMAKE_SOURCE_DIR = /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build

# Include any dependencies generated for this target.
include extern/gtest/googlemock/CMakeFiles/gmock.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include extern/gtest/googlemock/CMakeFiles/gmock.dir/compiler_depend.make

# Include the progress variables for this target.
include extern/gtest/googlemock/CMakeFiles/gmock.dir/progress.make

# Include the compile flags for this target's objects.
include extern/gtest/googlemock/CMakeFiles/gmock.dir/flags.make

extern/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: extern/gtest/googlemock/CMakeFiles/gmock.dir/flags.make
extern/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/extern/gtest/googlemock/src/gmock-all.cc
extern/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o: extern/gtest/googlemock/CMakeFiles/gmock.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object extern/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT extern/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o -MF CMakeFiles/gmock.dir/src/gmock-all.cc.o.d -o CMakeFiles/gmock.dir/src/gmock-all.cc.o -c /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/extern/gtest/googlemock/src/gmock-all.cc

extern/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock.dir/src/gmock-all.cc.i"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/extern/gtest/googlemock/src/gmock-all.cc > CMakeFiles/gmock.dir/src/gmock-all.cc.i

extern/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock.dir/src/gmock-all.cc.s"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/extern/gtest/googlemock/src/gmock-all.cc -o CMakeFiles/gmock.dir/src/gmock-all.cc.s

# Object files for target gmock
gmock_OBJECTS = \
"CMakeFiles/gmock.dir/src/gmock-all.cc.o"

# External object files for target gmock
gmock_EXTERNAL_OBJECTS =

extern/gtest/googlemock/libgmock.a: extern/gtest/googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
extern/gtest/googlemock/libgmock.a: extern/gtest/googlemock/CMakeFiles/gmock.dir/build.make
extern/gtest/googlemock/libgmock.a: extern/gtest/googlemock/CMakeFiles/gmock.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libgmock.a"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean_target.cmake
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
extern/gtest/googlemock/CMakeFiles/gmock.dir/build: extern/gtest/googlemock/libgmock.a
.PHONY : extern/gtest/googlemock/CMakeFiles/gmock.dir/build

extern/gtest/googlemock/CMakeFiles/gmock.dir/clean:
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock.dir/cmake_clean.cmake
.PHONY : extern/gtest/googlemock/CMakeFiles/gmock.dir/clean

extern/gtest/googlemock/CMakeFiles/gmock.dir/depend:
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/extern/gtest/googlemock /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build/extern/gtest/googlemock/CMakeFiles/gmock.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : extern/gtest/googlemock/CMakeFiles/gmock.dir/depend

