# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = "/Users/markbarbaric/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-2/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/markbarbaric/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-2/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/markbarbaric/Documents/Developer/C++/GrabYoTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/markbarbaric/Documents/Developer/C++/GrabYoTest

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"/Users/markbarbaric/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-2/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake" --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	"/Users/markbarbaric/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-2/211.7628.27/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/markbarbaric/Documents/Developer/C++/GrabYoTest/CMakeFiles /Users/markbarbaric/Documents/Developer/C++/GrabYoTest//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/markbarbaric/Documents/Developer/C++/GrabYoTest/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named PokerLib

# Build rule for target.
PokerLib: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 PokerLib
.PHONY : PokerLib

# fast build rule for target.
PokerLib/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerLib.dir/build.make CMakeFiles/PokerLib.dir/build
.PHONY : PokerLib/fast

#=============================================================================
# Target rules for targets named PokerTestRunner

# Build rule for target.
PokerTestRunner: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 PokerTestRunner
.PHONY : PokerTestRunner

# fast build rule for target.
PokerTestRunner/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/build
.PHONY : PokerTestRunner/fast

Lib/PokerHand.o: Lib/PokerHand.cpp.o

.PHONY : Lib/PokerHand.o

# target to build an object file
Lib/PokerHand.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerLib.dir/build.make CMakeFiles/PokerLib.dir/Lib/PokerHand.cpp.o
.PHONY : Lib/PokerHand.cpp.o

Lib/PokerHand.i: Lib/PokerHand.cpp.i

.PHONY : Lib/PokerHand.i

# target to preprocess a source file
Lib/PokerHand.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerLib.dir/build.make CMakeFiles/PokerLib.dir/Lib/PokerHand.cpp.i
.PHONY : Lib/PokerHand.cpp.i

Lib/PokerHand.s: Lib/PokerHand.cpp.s

.PHONY : Lib/PokerHand.s

# target to generate assembly for a file
Lib/PokerHand.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerLib.dir/build.make CMakeFiles/PokerLib.dir/Lib/PokerHand.cpp.s
.PHONY : Lib/PokerHand.cpp.s

PokerHandTestRunner.o: PokerHandTestRunner.cpp.o

.PHONY : PokerHandTestRunner.o

# target to build an object file
PokerHandTestRunner.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/PokerHandTestRunner.cpp.o
.PHONY : PokerHandTestRunner.cpp.o

PokerHandTestRunner.i: PokerHandTestRunner.cpp.i

.PHONY : PokerHandTestRunner.i

# target to preprocess a source file
PokerHandTestRunner.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/PokerHandTestRunner.cpp.i
.PHONY : PokerHandTestRunner.cpp.i

PokerHandTestRunner.s: PokerHandTestRunner.cpp.s

.PHONY : PokerHandTestRunner.s

# target to generate assembly for a file
PokerHandTestRunner.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/PokerHandTestRunner.cpp.s
.PHONY : PokerHandTestRunner.cpp.s

Tests/PokerHandComparisonTests.o: Tests/PokerHandComparisonTests.cpp.o

.PHONY : Tests/PokerHandComparisonTests.o

# target to build an object file
Tests/PokerHandComparisonTests.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandComparisonTests.cpp.o
.PHONY : Tests/PokerHandComparisonTests.cpp.o

Tests/PokerHandComparisonTests.i: Tests/PokerHandComparisonTests.cpp.i

.PHONY : Tests/PokerHandComparisonTests.i

# target to preprocess a source file
Tests/PokerHandComparisonTests.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandComparisonTests.cpp.i
.PHONY : Tests/PokerHandComparisonTests.cpp.i

Tests/PokerHandComparisonTests.s: Tests/PokerHandComparisonTests.cpp.s

.PHONY : Tests/PokerHandComparisonTests.s

# target to generate assembly for a file
Tests/PokerHandComparisonTests.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandComparisonTests.cpp.s
.PHONY : Tests/PokerHandComparisonTests.cpp.s

Tests/PokerHandRankTests.o: Tests/PokerHandRankTests.cpp.o

.PHONY : Tests/PokerHandRankTests.o

# target to build an object file
Tests/PokerHandRankTests.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandRankTests.cpp.o
.PHONY : Tests/PokerHandRankTests.cpp.o

Tests/PokerHandRankTests.i: Tests/PokerHandRankTests.cpp.i

.PHONY : Tests/PokerHandRankTests.i

# target to preprocess a source file
Tests/PokerHandRankTests.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandRankTests.cpp.i
.PHONY : Tests/PokerHandRankTests.cpp.i

Tests/PokerHandRankTests.s: Tests/PokerHandRankTests.cpp.s

.PHONY : Tests/PokerHandRankTests.s

# target to generate assembly for a file
Tests/PokerHandRankTests.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandRankTests.cpp.s
.PHONY : Tests/PokerHandRankTests.cpp.s

Tests/PokerHandScoreTests.o: Tests/PokerHandScoreTests.cpp.o

.PHONY : Tests/PokerHandScoreTests.o

# target to build an object file
Tests/PokerHandScoreTests.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandScoreTests.cpp.o
.PHONY : Tests/PokerHandScoreTests.cpp.o

Tests/PokerHandScoreTests.i: Tests/PokerHandScoreTests.cpp.i

.PHONY : Tests/PokerHandScoreTests.i

# target to preprocess a source file
Tests/PokerHandScoreTests.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandScoreTests.cpp.i
.PHONY : Tests/PokerHandScoreTests.cpp.i

Tests/PokerHandScoreTests.s: Tests/PokerHandScoreTests.cpp.s

.PHONY : Tests/PokerHandScoreTests.s

# target to generate assembly for a file
Tests/PokerHandScoreTests.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/PokerHandScoreTests.cpp.s
.PHONY : Tests/PokerHandScoreTests.cpp.s

Tests/StringHelperTests.o: Tests/StringHelperTests.cpp.o

.PHONY : Tests/StringHelperTests.o

# target to build an object file
Tests/StringHelperTests.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/StringHelperTests.cpp.o
.PHONY : Tests/StringHelperTests.cpp.o

Tests/StringHelperTests.i: Tests/StringHelperTests.cpp.i

.PHONY : Tests/StringHelperTests.i

# target to preprocess a source file
Tests/StringHelperTests.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/StringHelperTests.cpp.i
.PHONY : Tests/StringHelperTests.cpp.i

Tests/StringHelperTests.s: Tests/StringHelperTests.cpp.s

.PHONY : Tests/StringHelperTests.s

# target to generate assembly for a file
Tests/StringHelperTests.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/PokerTestRunner.dir/build.make CMakeFiles/PokerTestRunner.dir/Tests/StringHelperTests.cpp.s
.PHONY : Tests/StringHelperTests.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... PokerLib"
	@echo "... PokerTestRunner"
	@echo "... Lib/PokerHand.o"
	@echo "... Lib/PokerHand.i"
	@echo "... Lib/PokerHand.s"
	@echo "... PokerHandTestRunner.o"
	@echo "... PokerHandTestRunner.i"
	@echo "... PokerHandTestRunner.s"
	@echo "... Tests/PokerHandComparisonTests.o"
	@echo "... Tests/PokerHandComparisonTests.i"
	@echo "... Tests/PokerHandComparisonTests.s"
	@echo "... Tests/PokerHandRankTests.o"
	@echo "... Tests/PokerHandRankTests.i"
	@echo "... Tests/PokerHandRankTests.s"
	@echo "... Tests/PokerHandScoreTests.o"
	@echo "... Tests/PokerHandScoreTests.i"
	@echo "... Tests/PokerHandScoreTests.s"
	@echo "... Tests/StringHelperTests.o"
	@echo "... Tests/StringHelperTests.i"
	@echo "... Tests/StringHelperTests.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

