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
CMAKE_SOURCE_DIR = F:\course\C++base\type

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\course\C++base\type\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\type.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\type.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\type.dir\flags.make

CMakeFiles\type.dir\main.cpp.obj: CMakeFiles\type.dir\flags.make
CMakeFiles\type.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\course\C++base\type\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/type.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\type.dir\main.cpp.obj /FdCMakeFiles\type.dir\ /FS -c F:\course\C++base\type\main.cpp
<<

CMakeFiles\type.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/type.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe > CMakeFiles\type.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\course\C++base\type\main.cpp
<<

CMakeFiles\type.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/type.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\type.dir\main.cpp.s /c F:\course\C++base\type\main.cpp
<<

# Object files for target type
type_OBJECTS = \
"CMakeFiles\type.dir\main.cpp.obj"

# External object files for target type
type_EXTERNAL_OBJECTS =

type.exe: CMakeFiles\type.dir\main.cpp.obj
type.exe: CMakeFiles\type.dir\build.make
type.exe: CMakeFiles\type.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\course\C++base\type\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable type.exe"
	"D:\CLion 2021.1.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\type.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~4\2019\BUILDT~1\VC\Tools\MSVC\1427~1.291\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\type.dir\objects1.rsp @<<
 /out:type.exe /implib:type.lib /pdb:F:\course\C++base\type\cmake-build-debug\type.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\type.dir\build: type.exe

.PHONY : CMakeFiles\type.dir\build

CMakeFiles\type.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\type.dir\cmake_clean.cmake
.PHONY : CMakeFiles\type.dir\clean

CMakeFiles\type.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" F:\course\C++base\type F:\course\C++base\type F:\course\C++base\type\cmake-build-debug F:\course\C++base\type\cmake-build-debug F:\course\C++base\type\cmake-build-debug\CMakeFiles\type.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\type.dir\depend

