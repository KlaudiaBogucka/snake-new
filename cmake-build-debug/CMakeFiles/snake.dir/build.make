# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.6\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.6\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\aduuc\CLionProjects\snake

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\aduuc\CLionProjects\snake\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\snake.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\snake.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\snake.dir\flags.make

CMakeFiles\snake.dir\Plansza.cpp.obj: CMakeFiles\snake.dir\flags.make
CMakeFiles\snake.dir\Plansza.cpp.obj: ..\Plansza.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\aduuc\CLionProjects\snake\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snake.dir/Plansza.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\snake.dir\Plansza.cpp.obj /FdCMakeFiles\snake.dir\ /FS -c C:\Users\aduuc\CLionProjects\snake\Plansza.cpp
<<

CMakeFiles\snake.dir\Plansza.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snake.dir/Plansza.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe > CMakeFiles\snake.dir\Plansza.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\aduuc\CLionProjects\snake\Plansza.cpp
<<

CMakeFiles\snake.dir\Plansza.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snake.dir/Plansza.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\snake.dir\Plansza.cpp.s /c C:\Users\aduuc\CLionProjects\snake\Plansza.cpp
<<

CMakeFiles\snake.dir\Plansza.cpp.obj.requires:

.PHONY : CMakeFiles\snake.dir\Plansza.cpp.obj.requires

CMakeFiles\snake.dir\Plansza.cpp.obj.provides: CMakeFiles\snake.dir\Plansza.cpp.obj.requires
	$(MAKE) -f CMakeFiles\snake.dir\build.make /nologo -$(MAKEFLAGS) CMakeFiles\snake.dir\Plansza.cpp.obj.provides.build
.PHONY : CMakeFiles\snake.dir\Plansza.cpp.obj.provides

CMakeFiles\snake.dir\Plansza.cpp.obj.provides.build: CMakeFiles\snake.dir\Plansza.cpp.obj


# Object files for target snake
snake_OBJECTS = \
"CMakeFiles\snake.dir\Plansza.cpp.obj"

# External object files for target snake
snake_EXTERNAL_OBJECTS =

snake.exe: CMakeFiles\snake.dir\Plansza.cpp.obj
snake.exe: CMakeFiles\snake.dir\build.make
snake.exe: CMakeFiles\snake.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\aduuc\CLionProjects\snake\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable snake.exe"
	"C:\Program Files\JetBrains\CLion 2018.1.6\bin\cmake\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\snake.dir --manifests  -- C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1411~1.255\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\snake.dir\objects1.rsp @<<
 /out:snake.exe /implib:snake.lib /pdb:C:\Users\aduuc\CLionProjects\snake\cmake-build-debug\snake.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\snake.dir\build: snake.exe

.PHONY : CMakeFiles\snake.dir\build

CMakeFiles\snake.dir\requires: CMakeFiles\snake.dir\Plansza.cpp.obj.requires

.PHONY : CMakeFiles\snake.dir\requires

CMakeFiles\snake.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\snake.dir\cmake_clean.cmake
.PHONY : CMakeFiles\snake.dir\clean

CMakeFiles\snake.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\aduuc\CLionProjects\snake C:\Users\aduuc\CLionProjects\snake C:\Users\aduuc\CLionProjects\snake\cmake-build-debug C:\Users\aduuc\CLionProjects\snake\cmake-build-debug C:\Users\aduuc\CLionProjects\snake\cmake-build-debug\CMakeFiles\snake.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\snake.dir\depend

