# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.25

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\clion-project\uwbtest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\clion-project\uwbtest\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/uwbtest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/uwbtest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/uwbtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uwbtest.dir/flags.make

CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.obj: uwbtest_autogen/mocs_compilation.cpp
CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.obj -MF CMakeFiles\uwbtest.dir\uwbtest_autogen\mocs_compilation.cpp.obj.d -o CMakeFiles\uwbtest.dir\uwbtest_autogen\mocs_compilation.cpp.obj -c D:\clion-project\uwbtest\cmake-build-debug\uwbtest_autogen\mocs_compilation.cpp

CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\cmake-build-debug\uwbtest_autogen\mocs_compilation.cpp > CMakeFiles\uwbtest.dir\uwbtest_autogen\mocs_compilation.cpp.i

CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\cmake-build-debug\uwbtest_autogen\mocs_compilation.cpp -o CMakeFiles\uwbtest.dir\uwbtest_autogen\mocs_compilation.cpp.s

CMakeFiles/uwbtest.dir/main.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/main.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/main.cpp.obj: D:/clion-project/uwbtest/main.cpp
CMakeFiles/uwbtest.dir/main.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/uwbtest.dir/main.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/main.cpp.obj -MF CMakeFiles\uwbtest.dir\main.cpp.obj.d -o CMakeFiles\uwbtest.dir\main.cpp.obj -c D:\clion-project\uwbtest\main.cpp

CMakeFiles/uwbtest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/main.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\main.cpp > CMakeFiles\uwbtest.dir\main.cpp.i

CMakeFiles/uwbtest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/main.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\main.cpp -o CMakeFiles\uwbtest.dir\main.cpp.s

CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.obj: D:/clion-project/uwbtest/api/mytcpserver.cpp
CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.obj -MF CMakeFiles\uwbtest.dir\api\mytcpserver.cpp.obj.d -o CMakeFiles\uwbtest.dir\api\mytcpserver.cpp.obj -c D:\clion-project\uwbtest\api\mytcpserver.cpp

CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\api\mytcpserver.cpp > CMakeFiles\uwbtest.dir\api\mytcpserver.cpp.i

CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\api\mytcpserver.cpp -o CMakeFiles\uwbtest.dir\api\mytcpserver.cpp.s

CMakeFiles/uwbtest.dir/model/model.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/model/model.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/model/model.cpp.obj: D:/clion-project/uwbtest/model/model.cpp
CMakeFiles/uwbtest.dir/model/model.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/uwbtest.dir/model/model.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/model/model.cpp.obj -MF CMakeFiles\uwbtest.dir\model\model.cpp.obj.d -o CMakeFiles\uwbtest.dir\model\model.cpp.obj -c D:\clion-project\uwbtest\model\model.cpp

CMakeFiles/uwbtest.dir/model/model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/model/model.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\model\model.cpp > CMakeFiles\uwbtest.dir\model\model.cpp.i

CMakeFiles/uwbtest.dir/model/model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/model/model.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\model\model.cpp -o CMakeFiles\uwbtest.dir\model\model.cpp.s

CMakeFiles/uwbtest.dir/api/inwork.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/api/inwork.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/api/inwork.cpp.obj: D:/clion-project/uwbtest/api/inwork.cpp
CMakeFiles/uwbtest.dir/api/inwork.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/uwbtest.dir/api/inwork.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/api/inwork.cpp.obj -MF CMakeFiles\uwbtest.dir\api\inwork.cpp.obj.d -o CMakeFiles\uwbtest.dir\api\inwork.cpp.obj -c D:\clion-project\uwbtest\api\inwork.cpp

CMakeFiles/uwbtest.dir/api/inwork.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/api/inwork.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\api\inwork.cpp > CMakeFiles\uwbtest.dir\api\inwork.cpp.i

CMakeFiles/uwbtest.dir/api/inwork.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/api/inwork.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\api\inwork.cpp -o CMakeFiles\uwbtest.dir\api\inwork.cpp.s

CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.obj: D:/clion-project/uwbtest/ui/loginwidget.cpp
CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.obj -MF CMakeFiles\uwbtest.dir\ui\loginwidget.cpp.obj.d -o CMakeFiles\uwbtest.dir\ui\loginwidget.cpp.obj -c D:\clion-project\uwbtest\ui\loginwidget.cpp

CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\ui\loginwidget.cpp > CMakeFiles\uwbtest.dir\ui\loginwidget.cpp.i

CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\ui\loginwidget.cpp -o CMakeFiles\uwbtest.dir\ui\loginwidget.cpp.s

CMakeFiles/uwbtest.dir/ui/Callout.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/ui/Callout.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/ui/Callout.cpp.obj: D:/clion-project/uwbtest/ui/Callout.cpp
CMakeFiles/uwbtest.dir/ui/Callout.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/uwbtest.dir/ui/Callout.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/ui/Callout.cpp.obj -MF CMakeFiles\uwbtest.dir\ui\Callout.cpp.obj.d -o CMakeFiles\uwbtest.dir\ui\Callout.cpp.obj -c D:\clion-project\uwbtest\ui\Callout.cpp

CMakeFiles/uwbtest.dir/ui/Callout.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/ui/Callout.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\ui\Callout.cpp > CMakeFiles\uwbtest.dir\ui\Callout.cpp.i

CMakeFiles/uwbtest.dir/ui/Callout.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/ui/Callout.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\ui\Callout.cpp -o CMakeFiles\uwbtest.dir\ui\Callout.cpp.s

CMakeFiles/uwbtest.dir/ui/chartview.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/ui/chartview.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/ui/chartview.cpp.obj: D:/clion-project/uwbtest/ui/chartview.cpp
CMakeFiles/uwbtest.dir/ui/chartview.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/uwbtest.dir/ui/chartview.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/ui/chartview.cpp.obj -MF CMakeFiles\uwbtest.dir\ui\chartview.cpp.obj.d -o CMakeFiles\uwbtest.dir\ui\chartview.cpp.obj -c D:\clion-project\uwbtest\ui\chartview.cpp

CMakeFiles/uwbtest.dir/ui/chartview.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/ui/chartview.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\ui\chartview.cpp > CMakeFiles\uwbtest.dir\ui\chartview.cpp.i

CMakeFiles/uwbtest.dir/ui/chartview.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/ui/chartview.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\ui\chartview.cpp -o CMakeFiles\uwbtest.dir\ui\chartview.cpp.s

CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.obj: D:/clion-project/uwbtest/ui/mainwidget.cpp
CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.obj -MF CMakeFiles\uwbtest.dir\ui\mainwidget.cpp.obj.d -o CMakeFiles\uwbtest.dir\ui\mainwidget.cpp.obj -c D:\clion-project\uwbtest\ui\mainwidget.cpp

CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\ui\mainwidget.cpp > CMakeFiles\uwbtest.dir\ui\mainwidget.cpp.i

CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\ui\mainwidget.cpp -o CMakeFiles\uwbtest.dir\ui\mainwidget.cpp.s

CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.obj: D:/clion-project/uwbtest/api/sqlitetools.cpp
CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.obj -MF CMakeFiles\uwbtest.dir\api\sqlitetools.cpp.obj.d -o CMakeFiles\uwbtest.dir\api\sqlitetools.cpp.obj -c D:\clion-project\uwbtest\api\sqlitetools.cpp

CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\api\sqlitetools.cpp > CMakeFiles\uwbtest.dir\api\sqlitetools.cpp.i

CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\api\sqlitetools.cpp -o CMakeFiles\uwbtest.dir\api\sqlitetools.cpp.s

CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.obj: D:/clion-project/uwbtest/pkg/FindPoint.cpp
CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.obj -MF CMakeFiles\uwbtest.dir\pkg\FindPoint.cpp.obj.d -o CMakeFiles\uwbtest.dir\pkg\FindPoint.cpp.obj -c D:\clion-project\uwbtest\pkg\FindPoint.cpp

CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\pkg\FindPoint.cpp > CMakeFiles\uwbtest.dir\pkg\FindPoint.cpp.i

CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\pkg\FindPoint.cpp -o CMakeFiles\uwbtest.dir\pkg\FindPoint.cpp.s

CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.obj: D:/clion-project/uwbtest/pkg/KalmanFilter.cpp
CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.obj -MF CMakeFiles\uwbtest.dir\pkg\KalmanFilter.cpp.obj.d -o CMakeFiles\uwbtest.dir\pkg\KalmanFilter.cpp.obj -c D:\clion-project\uwbtest\pkg\KalmanFilter.cpp

CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\pkg\KalmanFilter.cpp > CMakeFiles\uwbtest.dir\pkg\KalmanFilter.cpp.i

CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\pkg\KalmanFilter.cpp -o CMakeFiles\uwbtest.dir\pkg\KalmanFilter.cpp.s

CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.obj: D:/clion-project/uwbtest/ui/mainwindow.cpp
CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.obj -MF CMakeFiles\uwbtest.dir\ui\mainwindow.cpp.obj.d -o CMakeFiles\uwbtest.dir\ui\mainwindow.cpp.obj -c D:\clion-project\uwbtest\ui\mainwindow.cpp

CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\ui\mainwindow.cpp > CMakeFiles\uwbtest.dir\ui\mainwindow.cpp.i

CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\ui\mainwindow.cpp -o CMakeFiles\uwbtest.dir\ui\mainwindow.cpp.s

CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.obj: CMakeFiles/uwbtest.dir/flags.make
CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.obj: CMakeFiles/uwbtest.dir/includes_CXX.rsp
CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.obj: D:/clion-project/uwbtest/ui/CheckIdWidget.cpp
CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.obj: CMakeFiles/uwbtest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.obj"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.obj -MF CMakeFiles\uwbtest.dir\ui\CheckIdWidget.cpp.obj.d -o CMakeFiles\uwbtest.dir\ui\CheckIdWidget.cpp.obj -c D:\clion-project\uwbtest\ui\CheckIdWidget.cpp

CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.i"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\clion-project\uwbtest\ui\CheckIdWidget.cpp > CMakeFiles\uwbtest.dir\ui\CheckIdWidget.cpp.i

CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.s"
	D:\new-qt\Tools\mingw1120_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\clion-project\uwbtest\ui\CheckIdWidget.cpp -o CMakeFiles\uwbtest.dir\ui\CheckIdWidget.cpp.s

# Object files for target uwbtest
uwbtest_OBJECTS = \
"CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.obj" \
"CMakeFiles/uwbtest.dir/main.cpp.obj" \
"CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.obj" \
"CMakeFiles/uwbtest.dir/model/model.cpp.obj" \
"CMakeFiles/uwbtest.dir/api/inwork.cpp.obj" \
"CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.obj" \
"CMakeFiles/uwbtest.dir/ui/Callout.cpp.obj" \
"CMakeFiles/uwbtest.dir/ui/chartview.cpp.obj" \
"CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.obj" \
"CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.obj" \
"CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.obj" \
"CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.obj" \
"CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.obj" \
"CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.obj"

# External object files for target uwbtest
uwbtest_EXTERNAL_OBJECTS =

uwbtest.exe: CMakeFiles/uwbtest.dir/uwbtest_autogen/mocs_compilation.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/main.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/api/mytcpserver.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/model/model.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/api/inwork.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/ui/loginwidget.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/ui/Callout.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/ui/chartview.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/ui/mainwidget.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/api/sqlitetools.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/pkg/FindPoint.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/pkg/KalmanFilter.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/ui/mainwindow.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/ui/CheckIdWidget.cpp.obj
uwbtest.exe: CMakeFiles/uwbtest.dir/build.make
uwbtest.exe: D:/new-qt/6.6.0/mingw_64/lib/libQt6Network.a
uwbtest.exe: D:/new-qt/6.6.0/mingw_64/lib/libQt6Charts.a
uwbtest.exe: D:/new-qt/6.6.0/mingw_64/lib/libQt6OpenGLWidgets.a
uwbtest.exe: D:/new-qt/6.6.0/mingw_64/lib/libQt6Widgets.a
uwbtest.exe: D:/new-qt/6.6.0/mingw_64/lib/libQt6OpenGL.a
uwbtest.exe: D:/new-qt/6.6.0/mingw_64/lib/libQt6Gui.a
uwbtest.exe: D:/new-qt/6.6.0/mingw_64/lib/libQt6Sql.a
uwbtest.exe: D:/new-qt/6.6.0/mingw_64/lib/libQt6Core.a
uwbtest.exe: CMakeFiles/uwbtest.dir/linkLibs.rsp
uwbtest.exe: CMakeFiles/uwbtest.dir/objects1
uwbtest.exe: CMakeFiles/uwbtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable uwbtest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\uwbtest.dir\link.txt --verbose=$(VERBOSE)
	"D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E make_directory D:/clion-project/uwbtest/cmake-build-debug/plugins/platforms/
	"D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E copy D:/new-qt/6.6.0/mingw_64/bin/../plugins/platforms/qwindows.dll D:/clion-project/uwbtest/cmake-build-debug/plugins/platforms/
	"D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E copy D:/new-qt/6.6.0/mingw_64/bin/../bin/Qt6Core.dll D:/clion-project/uwbtest/cmake-build-debug
	"D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E copy D:/new-qt/6.6.0/mingw_64/bin/../bin/Qt6Gui.dll D:/clion-project/uwbtest/cmake-build-debug
	"D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E copy D:/new-qt/6.6.0/mingw_64/bin/../bin/Qt6Widgets.dll D:/clion-project/uwbtest/cmake-build-debug
	"D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E copy D:/new-qt/6.6.0/mingw_64/bin/../bin/Qt6Sql.dll D:/clion-project/uwbtest/cmake-build-debug
	"D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E copy D:/new-qt/6.6.0/mingw_64/bin/../bin/Qt6Network.dll D:/clion-project/uwbtest/cmake-build-debug
	"D:\clion\CLion 2023.1.1\bin\cmake\win\x64\bin\cmake.exe" -E copy D:/new-qt/6.6.0/mingw_64/bin/../bin/Qt6Charts.dll D:/clion-project/uwbtest/cmake-build-debug

# Rule to build all files generated by this target.
CMakeFiles/uwbtest.dir/build: uwbtest.exe
.PHONY : CMakeFiles/uwbtest.dir/build

CMakeFiles/uwbtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\uwbtest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/uwbtest.dir/clean

CMakeFiles/uwbtest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\clion-project\uwbtest D:\clion-project\uwbtest D:\clion-project\uwbtest\cmake-build-debug D:\clion-project\uwbtest\cmake-build-debug D:\clion-project\uwbtest\cmake-build-debug\CMakeFiles\uwbtest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/uwbtest.dir/depend

