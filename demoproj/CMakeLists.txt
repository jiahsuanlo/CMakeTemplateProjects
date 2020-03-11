# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

# extract git tag information and use git tag as version string
execute_process(
	COMMAND git describe --tags --always
	WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
	OUTPUT_VARIABLE GIT_TAG
	OUTPUT_STRIP_TRAILING_WHITESPACE
)

set(${PROJNAME} "demoproj")
project ("${PROJNAME}")

# Include sub-projects.
add_subdirectory ("lib1")
add_subdirectory ("app1")

# Setup dependency
add_dependencies(app1 lib1)

# Set entry point
set_property(DIRECTORY ${CMAKE_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT app1)

# Add version information
configure_file(${CMAKE_SOURCE_DIR}/config.h.in config.h)
target_include_directories(lib1 PUBLIC
                           "${PROJECT_BINARY_DIR}")

