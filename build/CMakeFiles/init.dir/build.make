﻿# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\alist\OneDrive\Documents\Github\fifo_buffer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build

# Include any dependencies generated for this target.
include CMakeFiles\init.dir\depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles\init.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\init.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\init.dir\flags.make

CMakeFiles\init.dir\tests\init_test.c.obj: CMakeFiles\init.dir\flags.make
CMakeFiles\init.dir\tests\init_test.c.obj: C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\tests\init_test.c
CMakeFiles\init.dir\tests\init_test.c.obj: CMakeFiles\init.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/init.dir/tests/init_test.c.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\init.dir\tests\init_test.c.obj.d --working-dir=C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build --filter-prefix="Note: including file: " -- C:\PROGRA~2\MICROS~2\2022\BUILDT~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /showIncludes /FoCMakeFiles\init.dir\tests\init_test.c.obj /FdCMakeFiles\init.dir\ /FS -c C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\tests\init_test.c
<<

CMakeFiles\init.dir\tests\init_test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/init.dir/tests/init_test.c.i"
	C:\PROGRA~2\MICROS~2\2022\BUILDT~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe > CMakeFiles\init.dir\tests\init_test.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\tests\init_test.c
<<

CMakeFiles\init.dir\tests\init_test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/init.dir/tests/init_test.c.s"
	C:\PROGRA~2\MICROS~2\2022\BUILDT~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\init.dir\tests\init_test.c.s /c C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\tests\init_test.c
<<

CMakeFiles\init.dir\fifo.c.obj: CMakeFiles\init.dir\flags.make
CMakeFiles\init.dir\fifo.c.obj: C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\fifo.c
CMakeFiles\init.dir\fifo.c.obj: CMakeFiles\init.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/init.dir/fifo.c.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\init.dir\fifo.c.obj.d --working-dir=C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build --filter-prefix="Note: including file: " -- C:\PROGRA~2\MICROS~2\2022\BUILDT~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /showIncludes /FoCMakeFiles\init.dir\fifo.c.obj /FdCMakeFiles\init.dir\ /FS -c C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\fifo.c
<<

CMakeFiles\init.dir\fifo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/init.dir/fifo.c.i"
	C:\PROGRA~2\MICROS~2\2022\BUILDT~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe > CMakeFiles\init.dir\fifo.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\fifo.c
<<

CMakeFiles\init.dir\fifo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/init.dir/fifo.c.s"
	C:\PROGRA~2\MICROS~2\2022\BUILDT~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\init.dir\fifo.c.s /c C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\fifo.c
<<

# Object files for target init
init_OBJECTS = \
"CMakeFiles\init.dir\tests\init_test.c.obj" \
"CMakeFiles\init.dir\fifo.c.obj"

# External object files for target init
init_EXTERNAL_OBJECTS =

init.exe: CMakeFiles\init.dir\tests\init_test.c.obj
init.exe: CMakeFiles\init.dir\fifo.c.obj
init.exe: CMakeFiles\init.dir\build.make
init.exe: CMakeFiles\init.dir\objects1
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable init.exe"
	"C:\Program Files\CMake\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\init.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100220~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100220~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2022\BUILDT~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\init.dir\objects1 @<<
 /out:init.exe /implib:init.lib /pdb:C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build\init.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\init.dir\build: init.exe
.PHONY : CMakeFiles\init.dir\build

CMakeFiles\init.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\init.dir\cmake_clean.cmake
.PHONY : CMakeFiles\init.dir\clean

CMakeFiles\init.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\alist\OneDrive\Documents\Github\fifo_buffer C:\Users\alist\OneDrive\Documents\Github\fifo_buffer C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build C:\Users\alist\OneDrive\Documents\Github\fifo_buffer\build\CMakeFiles\init.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\init.dir\depend

