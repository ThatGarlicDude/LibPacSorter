cmake_minimum_required(VERSION 3.18)
project(pacsorter VERSION 1.3.0 LANGUAGES C)

# Set up specifications for the C compiler.
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Set output directories.
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include its submodule.
add_subdirectory(submodules/LibPacSet)

# Gather the files.
FILE(GLOB SOURCES src/*.c)

# Output the project.
add_library(pacsorter SHARED ${SOURCES})
target_include_directories(pacsorter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/headers)
target_link_libraries(pacsorter PUBLIC pacset)
install(TARGETS pacsorter DESTINATION lib)
