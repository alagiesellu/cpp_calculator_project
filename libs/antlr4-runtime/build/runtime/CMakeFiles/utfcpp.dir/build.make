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
CMAKE_SOURCE_DIR = /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build

# Utility rule file for utfcpp.

# Include any custom commands dependencies for this target.
include runtime/CMakeFiles/utfcpp.dir/compiler_depend.make

# Include the progress variables for this target.
include runtime/CMakeFiles/utfcpp.dir/progress.make

runtime/CMakeFiles/utfcpp: runtime/CMakeFiles/utfcpp-complete

runtime/CMakeFiles/utfcpp-complete: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-install
runtime/CMakeFiles/utfcpp-complete: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-mkdir
runtime/CMakeFiles/utfcpp-complete: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-download
runtime/CMakeFiles/utfcpp-complete: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-patch
runtime/CMakeFiles/utfcpp-complete: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-configure
runtime/CMakeFiles/utfcpp-complete: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-build
runtime/CMakeFiles/utfcpp-complete: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-install
runtime/CMakeFiles/utfcpp-complete: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'utfcpp'"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E make_directory /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/CMakeFiles
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/CMakeFiles/utfcpp-complete
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-done

runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-build: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing build step for 'utfcpp'"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && $(MAKE)
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-build

runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-configure: runtime/utfcpp-prefix/tmp/utfcpp-cfgcmd.txt
runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-configure: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Performing configure step for 'utfcpp'"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && /usr/bin/cmake -DCMAKE_INSTALL_PREFIX=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp/install -Dgtest_force_shared_crt=ON "-GUnix Makefiles" /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-configure

runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-download: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-gitinfo.txt
runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-download: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'utfcpp'"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty && /usr/bin/cmake -P /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/tmp/utfcpp-gitclone.cmake
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-download

runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-install: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing install step for 'utfcpp'"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && $(MAKE) install
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-install

runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'utfcpp'"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E make_directory /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/thirdparty/utfcpp
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E make_directory /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E make_directory /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E make_directory /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/tmp
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E make_directory /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E make_directory /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E make_directory /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-mkdir

runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-patch: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'utfcpp'"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E echo_append
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-patch

runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-test: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing test step for 'utfcpp'"
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && $(MAKE) test
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-build && /usr/bin/cmake -E touch /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-test

utfcpp: runtime/CMakeFiles/utfcpp
utfcpp: runtime/CMakeFiles/utfcpp-complete
utfcpp: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-build
utfcpp: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-configure
utfcpp: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-download
utfcpp: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-install
utfcpp: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-mkdir
utfcpp: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-patch
utfcpp: runtime/utfcpp-prefix/src/utfcpp-stamp/utfcpp-test
utfcpp: runtime/CMakeFiles/utfcpp.dir/build.make
.PHONY : utfcpp

# Rule to build all files generated by this target.
runtime/CMakeFiles/utfcpp.dir/build: utfcpp
.PHONY : runtime/CMakeFiles/utfcpp.dir/build

runtime/CMakeFiles/utfcpp.dir/clean:
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime && $(CMAKE_COMMAND) -P CMakeFiles/utfcpp.dir/cmake_clean.cmake
.PHONY : runtime/CMakeFiles/utfcpp.dir/clean

runtime/CMakeFiles/utfcpp.dir/depend:
	cd /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/runtime /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime /home/leber/CLionProjects/cpp_calculator_project/libs/antlr4-runtime/build/runtime/CMakeFiles/utfcpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : runtime/CMakeFiles/utfcpp.dir/depend

