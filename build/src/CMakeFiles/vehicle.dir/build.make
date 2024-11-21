# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/kenjhin2/Desktop/Vehicle_Telemetry

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kenjhin2/Desktop/Vehicle_Telemetry/build

# Include any dependencies generated for this target.
include src/CMakeFiles/vehicle.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/vehicle.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/vehicle.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/vehicle.dir/flags.make

src/CMakeFiles/vehicle.dir/ACC.cpp.o: src/CMakeFiles/vehicle.dir/flags.make
src/CMakeFiles/vehicle.dir/ACC.cpp.o: /home/kenjhin2/Desktop/Vehicle_Telemetry/src/ACC.cpp
src/CMakeFiles/vehicle.dir/ACC.cpp.o: src/CMakeFiles/vehicle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kenjhin2/Desktop/Vehicle_Telemetry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/vehicle.dir/ACC.cpp.o"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/vehicle.dir/ACC.cpp.o -MF CMakeFiles/vehicle.dir/ACC.cpp.o.d -o CMakeFiles/vehicle.dir/ACC.cpp.o -c /home/kenjhin2/Desktop/Vehicle_Telemetry/src/ACC.cpp

src/CMakeFiles/vehicle.dir/ACC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vehicle.dir/ACC.cpp.i"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kenjhin2/Desktop/Vehicle_Telemetry/src/ACC.cpp > CMakeFiles/vehicle.dir/ACC.cpp.i

src/CMakeFiles/vehicle.dir/ACC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vehicle.dir/ACC.cpp.s"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kenjhin2/Desktop/Vehicle_Telemetry/src/ACC.cpp -o CMakeFiles/vehicle.dir/ACC.cpp.s

src/CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o: src/CMakeFiles/vehicle.dir/flags.make
src/CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o: /home/kenjhin2/Desktop/Vehicle_Telemetry/src/SpeedSensorDiagStrategy.cpp
src/CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o: src/CMakeFiles/vehicle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kenjhin2/Desktop/Vehicle_Telemetry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o -MF CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o.d -o CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o -c /home/kenjhin2/Desktop/Vehicle_Telemetry/src/SpeedSensorDiagStrategy.cpp

src/CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.i"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kenjhin2/Desktop/Vehicle_Telemetry/src/SpeedSensorDiagStrategy.cpp > CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.i

src/CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.s"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kenjhin2/Desktop/Vehicle_Telemetry/src/SpeedSensorDiagStrategy.cpp -o CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.s

src/CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o: src/CMakeFiles/vehicle.dir/flags.make
src/CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o: /home/kenjhin2/Desktop/Vehicle_Telemetry/src/SpeedSensorReading.cpp
src/CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o: src/CMakeFiles/vehicle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kenjhin2/Desktop/Vehicle_Telemetry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o -MF CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o.d -o CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o -c /home/kenjhin2/Desktop/Vehicle_Telemetry/src/SpeedSensorReading.cpp

src/CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.i"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kenjhin2/Desktop/Vehicle_Telemetry/src/SpeedSensorReading.cpp > CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.i

src/CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.s"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kenjhin2/Desktop/Vehicle_Telemetry/src/SpeedSensorReading.cpp -o CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.s

src/CMakeFiles/vehicle.dir/Vehicle.cpp.o: src/CMakeFiles/vehicle.dir/flags.make
src/CMakeFiles/vehicle.dir/Vehicle.cpp.o: /home/kenjhin2/Desktop/Vehicle_Telemetry/src/Vehicle.cpp
src/CMakeFiles/vehicle.dir/Vehicle.cpp.o: src/CMakeFiles/vehicle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kenjhin2/Desktop/Vehicle_Telemetry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/vehicle.dir/Vehicle.cpp.o"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/vehicle.dir/Vehicle.cpp.o -MF CMakeFiles/vehicle.dir/Vehicle.cpp.o.d -o CMakeFiles/vehicle.dir/Vehicle.cpp.o -c /home/kenjhin2/Desktop/Vehicle_Telemetry/src/Vehicle.cpp

src/CMakeFiles/vehicle.dir/Vehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vehicle.dir/Vehicle.cpp.i"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kenjhin2/Desktop/Vehicle_Telemetry/src/Vehicle.cpp > CMakeFiles/vehicle.dir/Vehicle.cpp.i

src/CMakeFiles/vehicle.dir/Vehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vehicle.dir/Vehicle.cpp.s"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kenjhin2/Desktop/Vehicle_Telemetry/src/Vehicle.cpp -o CMakeFiles/vehicle.dir/Vehicle.cpp.s

src/CMakeFiles/vehicle.dir/logger.cpp.o: src/CMakeFiles/vehicle.dir/flags.make
src/CMakeFiles/vehicle.dir/logger.cpp.o: /home/kenjhin2/Desktop/Vehicle_Telemetry/src/logger.cpp
src/CMakeFiles/vehicle.dir/logger.cpp.o: src/CMakeFiles/vehicle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kenjhin2/Desktop/Vehicle_Telemetry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/vehicle.dir/logger.cpp.o"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/vehicle.dir/logger.cpp.o -MF CMakeFiles/vehicle.dir/logger.cpp.o.d -o CMakeFiles/vehicle.dir/logger.cpp.o -c /home/kenjhin2/Desktop/Vehicle_Telemetry/src/logger.cpp

src/CMakeFiles/vehicle.dir/logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vehicle.dir/logger.cpp.i"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kenjhin2/Desktop/Vehicle_Telemetry/src/logger.cpp > CMakeFiles/vehicle.dir/logger.cpp.i

src/CMakeFiles/vehicle.dir/logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vehicle.dir/logger.cpp.s"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kenjhin2/Desktop/Vehicle_Telemetry/src/logger.cpp -o CMakeFiles/vehicle.dir/logger.cpp.s

src/CMakeFiles/vehicle.dir/main.cpp.o: src/CMakeFiles/vehicle.dir/flags.make
src/CMakeFiles/vehicle.dir/main.cpp.o: /home/kenjhin2/Desktop/Vehicle_Telemetry/src/main.cpp
src/CMakeFiles/vehicle.dir/main.cpp.o: src/CMakeFiles/vehicle.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kenjhin2/Desktop/Vehicle_Telemetry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/vehicle.dir/main.cpp.o"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/vehicle.dir/main.cpp.o -MF CMakeFiles/vehicle.dir/main.cpp.o.d -o CMakeFiles/vehicle.dir/main.cpp.o -c /home/kenjhin2/Desktop/Vehicle_Telemetry/src/main.cpp

src/CMakeFiles/vehicle.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vehicle.dir/main.cpp.i"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kenjhin2/Desktop/Vehicle_Telemetry/src/main.cpp > CMakeFiles/vehicle.dir/main.cpp.i

src/CMakeFiles/vehicle.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vehicle.dir/main.cpp.s"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kenjhin2/Desktop/Vehicle_Telemetry/src/main.cpp -o CMakeFiles/vehicle.dir/main.cpp.s

# Object files for target vehicle
vehicle_OBJECTS = \
"CMakeFiles/vehicle.dir/ACC.cpp.o" \
"CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o" \
"CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o" \
"CMakeFiles/vehicle.dir/Vehicle.cpp.o" \
"CMakeFiles/vehicle.dir/logger.cpp.o" \
"CMakeFiles/vehicle.dir/main.cpp.o"

# External object files for target vehicle
vehicle_EXTERNAL_OBJECTS =

src/vehicle: src/CMakeFiles/vehicle.dir/ACC.cpp.o
src/vehicle: src/CMakeFiles/vehicle.dir/SpeedSensorDiagStrategy.cpp.o
src/vehicle: src/CMakeFiles/vehicle.dir/SpeedSensorReading.cpp.o
src/vehicle: src/CMakeFiles/vehicle.dir/Vehicle.cpp.o
src/vehicle: src/CMakeFiles/vehicle.dir/logger.cpp.o
src/vehicle: src/CMakeFiles/vehicle.dir/main.cpp.o
src/vehicle: src/CMakeFiles/vehicle.dir/build.make
src/vehicle: src/CMakeFiles/vehicle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/kenjhin2/Desktop/Vehicle_Telemetry/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable vehicle"
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vehicle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/vehicle.dir/build: src/vehicle
.PHONY : src/CMakeFiles/vehicle.dir/build

src/CMakeFiles/vehicle.dir/clean:
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src && $(CMAKE_COMMAND) -P CMakeFiles/vehicle.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/vehicle.dir/clean

src/CMakeFiles/vehicle.dir/depend:
	cd /home/kenjhin2/Desktop/Vehicle_Telemetry/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kenjhin2/Desktop/Vehicle_Telemetry /home/kenjhin2/Desktop/Vehicle_Telemetry/src /home/kenjhin2/Desktop/Vehicle_Telemetry/build /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src /home/kenjhin2/Desktop/Vehicle_Telemetry/build/src/CMakeFiles/vehicle.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/vehicle.dir/depend

