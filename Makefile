# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/askou/AYAYA/Perso/Wai-

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/askou/AYAYA/Perso/Wai-

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/askou/AYAYA/Perso/Wai-/CMakeFiles /home/askou/AYAYA/Perso/Wai-//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/askou/AYAYA/Perso/Wai-/CMakeFiles 0
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
# Target rules for targets named WAI-

# Build rule for target.
WAI-: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 WAI-
.PHONY : WAI-

# fast build rule for target.
WAI-/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/build
.PHONY : WAI-/fast

# target to build an object file
cmake_pch.hxx.gch:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/cmake_pch.hxx.gch
.PHONY : cmake_pch.hxx.gch

# target to preprocess a source file
cmake_pch.hxx.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/cmake_pch.hxx.i
.PHONY : cmake_pch.hxx.i

# target to generate assembly for a file
cmake_pch.hxx.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/cmake_pch.hxx.s
.PHONY : cmake_pch.hxx.s

src/Logger/Logger.o: src/Logger/Logger.cpp.o
.PHONY : src/Logger/Logger.o

# target to build an object file
src/Logger/Logger.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Logger/Logger.cpp.o
.PHONY : src/Logger/Logger.cpp.o

src/Logger/Logger.i: src/Logger/Logger.cpp.i
.PHONY : src/Logger/Logger.i

# target to preprocess a source file
src/Logger/Logger.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Logger/Logger.cpp.i
.PHONY : src/Logger/Logger.cpp.i

src/Logger/Logger.s: src/Logger/Logger.cpp.s
.PHONY : src/Logger/Logger.s

# target to generate assembly for a file
src/Logger/Logger.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Logger/Logger.cpp.s
.PHONY : src/Logger/Logger.cpp.s

src/Parser/Parser.o: src/Parser/Parser.cpp.o
.PHONY : src/Parser/Parser.o

# target to build an object file
src/Parser/Parser.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Parser/Parser.cpp.o
.PHONY : src/Parser/Parser.cpp.o

src/Parser/Parser.i: src/Parser/Parser.cpp.i
.PHONY : src/Parser/Parser.i

# target to preprocess a source file
src/Parser/Parser.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Parser/Parser.cpp.i
.PHONY : src/Parser/Parser.cpp.i

src/Parser/Parser.s: src/Parser/Parser.cpp.s
.PHONY : src/Parser/Parser.s

# target to generate assembly for a file
src/Parser/Parser.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Parser/Parser.cpp.s
.PHONY : src/Parser/Parser.cpp.s

src/Token/Token.o: src/Token/Token.cpp.o
.PHONY : src/Token/Token.o

# target to build an object file
src/Token/Token.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Token/Token.cpp.o
.PHONY : src/Token/Token.cpp.o

src/Token/Token.i: src/Token/Token.cpp.i
.PHONY : src/Token/Token.i

# target to preprocess a source file
src/Token/Token.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Token/Token.cpp.i
.PHONY : src/Token/Token.cpp.i

src/Token/Token.s: src/Token/Token.cpp.s
.PHONY : src/Token/Token.s

# target to generate assembly for a file
src/Token/Token.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Token/Token.cpp.s
.PHONY : src/Token/Token.cpp.s

src/Utils/Utils.o: src/Utils/Utils.cpp.o
.PHONY : src/Utils/Utils.o

# target to build an object file
src/Utils/Utils.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Utils/Utils.cpp.o
.PHONY : src/Utils/Utils.cpp.o

src/Utils/Utils.i: src/Utils/Utils.cpp.i
.PHONY : src/Utils/Utils.i

# target to preprocess a source file
src/Utils/Utils.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Utils/Utils.cpp.i
.PHONY : src/Utils/Utils.cpp.i

src/Utils/Utils.s: src/Utils/Utils.cpp.s
.PHONY : src/Utils/Utils.s

# target to generate assembly for a file
src/Utils/Utils.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/Utils/Utils.cpp.s
.PHONY : src/Utils/Utils.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/WAI-.dir/build.make CMakeFiles/WAI-.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... WAI-"
	@echo "... cmake_pch.hxx.gch"
	@echo "... cmake_pch.hxx.i"
	@echo "... cmake_pch.hxx.s"
	@echo "... src/Logger/Logger.o"
	@echo "... src/Logger/Logger.i"
	@echo "... src/Logger/Logger.s"
	@echo "... src/Parser/Parser.o"
	@echo "... src/Parser/Parser.i"
	@echo "... src/Parser/Parser.s"
	@echo "... src/Token/Token.o"
	@echo "... src/Token/Token.i"
	@echo "... src/Token/Token.s"
	@echo "... src/Utils/Utils.o"
	@echo "... src/Utils/Utils.i"
	@echo "... src/Utils/Utils.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

