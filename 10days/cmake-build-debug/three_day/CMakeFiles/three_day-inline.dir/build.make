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
CMAKE_COMMAND = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\course\C++base\10days

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\course\C++base\10days\cmake-build-debug

# Include any dependencies generated for this target.
include three_day\CMakeFiles\three_day-inline.dir\depend.make

# Include the progress variables for this target.
include three_day\CMakeFiles\three_day-inline.dir\progress.make

# Include the compile flags for this target's objects.
include three_day\CMakeFiles\three_day-inline.dir\flags.make

three_day\CMakeFiles\three_day-inline.dir\inline.cpp.obj: three_day\CMakeFiles\three_day-inline.dir\flags.make
three_day\CMakeFiles\three_day-inline.dir\inline.cpp.obj: ..\three_day\inline.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\course\C++base\10days\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object three_day/CMakeFiles/three_day-inline.dir/inline.cpp.obj"
	cd F:\course\C++base\10days\cmake-build-debug\three_day
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\three_day-inline.dir\inline.cpp.obj /FdCMakeFiles\three_day-inline.dir\ /FS -c F:\course\C++base\10days\three_day\inline.cpp
<<
	cd F:\course\C++base\10days\cmake-build-debug

three_day\CMakeFiles\three_day-inline.dir\inline.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/three_day-inline.dir/inline.cpp.i"
	cd F:\course\C++base\10days\cmake-build-debug\three_day
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\three_day-inline.dir\inline.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\course\C++base\10days\three_day\inline.cpp
<<
	cd F:\course\C++base\10days\cmake-build-debug

three_day\CMakeFiles\three_day-inline.dir\inline.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/three_day-inline.dir/inline.cpp.s"
	cd F:\course\C++base\10days\cmake-build-debug\three_day
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\three_day-inline.dir\inline.cpp.s /c F:\course\C++base\10days\three_day\inline.cpp
<<
	cd F:\course\C++base\10days\cmake-build-debug

# Object files for target three_day-inline
three_day__inline_OBJECTS = \
"CMakeFiles\three_day-inline.dir\inline.cpp.obj"

# External object files for target three_day-inline
three_day__inline_EXTERNAL_OBJECTS =

three_day\three_day-inline.exe: three_day\CMakeFiles\three_day-inline.dir\inline.cpp.obj
three_day\three_day-inline.exe: three_day\CMakeFiles\three_day-inline.dir\build.make
three_day\three_day-inline.exe: three_day\CMakeFiles\three_day-inline.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\course\C++base\10days\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable three_day-inline.exe"
	cd F:\course\C++base\10days\cmake-build-debug\three_day
	"D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\three_day-inline.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\three_day-inline.dir\objects1.rsp @<<
 /out:three_day-inline.exe /implib:three_day-inline.lib /pdb:F:\course\C++base\10days\cmake-build-debug\three_day\three_day-inline.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<
	cd F:\course\C++base\10days\cmake-build-debug

# Rule to build all files generated by this target.
three_day\CMakeFiles\three_day-inline.dir\build: three_day\three_day-inline.exe

.PHONY : three_day\CMakeFiles\three_day-inline.dir\build

three_day\CMakeFiles\three_day-inline.dir\clean:
	cd F:\course\C++base\10days\cmake-build-debug\three_day
	$(CMAKE_COMMAND) -P CMakeFiles\three_day-inline.dir\cmake_clean.cmake
	cd F:\course\C++base\10days\cmake-build-debug
.PHONY : three_day\CMakeFiles\three_day-inline.dir\clean

three_day\CMakeFiles\three_day-inline.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" F:\course\C++base\10days F:\course\C++base\10days\three_day F:\course\C++base\10days\cmake-build-debug F:\course\C++base\10days\cmake-build-debug\three_day F:\course\C++base\10days\cmake-build-debug\three_day\CMakeFiles\three_day-inline.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : three_day\CMakeFiles\three_day-inline.dir\depend
