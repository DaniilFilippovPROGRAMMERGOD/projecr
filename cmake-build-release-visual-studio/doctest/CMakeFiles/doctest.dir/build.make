# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\dan\CLionProjects\untitled

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio

# Include any dependencies generated for this target.
include doctest\CMakeFiles\doctest.dir\depend.make

# Include the progress variables for this target.
include doctest\CMakeFiles\doctest.dir\progress.make

# Include the compile flags for this target's objects.
include doctest\CMakeFiles\doctest.dir\flags.make

doctest\CMakeFiles\doctest.dir\doctest.cpp.obj: doctest\CMakeFiles\doctest.dir\flags.make
doctest\CMakeFiles\doctest.dir\doctest.cpp.obj: ..\doctest\doctest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object doctest/CMakeFiles/doctest.dir/doctest.cpp.obj"
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\doctest
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\doctest.dir\doctest.cpp.obj /FdCMakeFiles\doctest.dir\doctest.pdb /FS -c C:\Users\dan\CLionProjects\untitled\doctest\doctest.cpp
<<
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio

doctest\CMakeFiles\doctest.dir\doctest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/doctest.dir/doctest.cpp.i"
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\doctest
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe > CMakeFiles\doctest.dir\doctest.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dan\CLionProjects\untitled\doctest\doctest.cpp
<<
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio

doctest\CMakeFiles\doctest.dir\doctest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/doctest.dir/doctest.cpp.s"
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\doctest
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\doctest.dir\doctest.cpp.s /c C:\Users\dan\CLionProjects\untitled\doctest\doctest.cpp
<<
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio

# Object files for target doctest
doctest_OBJECTS = \
"CMakeFiles\doctest.dir\doctest.cpp.obj"

# External object files for target doctest
doctest_EXTERNAL_OBJECTS =

doctest\doctest.lib: doctest\CMakeFiles\doctest.dir\doctest.cpp.obj
doctest\doctest.lib: doctest\CMakeFiles\doctest.dir\build.make
doctest\doctest.lib: doctest\CMakeFiles\doctest.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library doctest.lib"
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\doctest
	$(CMAKE_COMMAND) -P CMakeFiles\doctest.dir\cmake_clean_target.cmake
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\doctest
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1429~1.300\bin\Hostx64\x64\lib.exe /nologo /machine:x64 /out:doctest.lib @CMakeFiles\doctest.dir\objects1.rsp 
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio

# Rule to build all files generated by this target.
doctest\CMakeFiles\doctest.dir\build: doctest\doctest.lib

.PHONY : doctest\CMakeFiles\doctest.dir\build

doctest\CMakeFiles\doctest.dir\clean:
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\doctest
	$(CMAKE_COMMAND) -P CMakeFiles\doctest.dir\cmake_clean.cmake
	cd C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio
.PHONY : doctest\CMakeFiles\doctest.dir\clean

doctest\CMakeFiles\doctest.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\dan\CLionProjects\untitled C:\Users\dan\CLionProjects\untitled\doctest C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\doctest C:\Users\dan\CLionProjects\untitled\cmake-build-release-visual-studio\doctest\CMakeFiles\doctest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : doctest\CMakeFiles\doctest.dir\depend
