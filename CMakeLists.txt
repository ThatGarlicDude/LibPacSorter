cmake_minimum_required(VERSION 3.18)
project(pacsorter VERSION 2.0.0 LANGUAGES C)

# Set up specifications for the C compiler.
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

# Set output directories.
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Include its submodule.
add_subdirectory(submodules/LibPacSet)

# Gather the files.
FILE(GLOB MAIN
	${CMAKE_CURRENT_SOURCE_DIR}/src/test.c
)
FILE(GLOB SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/src/paccompare.c
	${CMAKE_CURRENT_SOURCE_DIR}/src/pacextension.c
	${CMAKE_CURRENT_SOURCE_DIR}/src/pacsort.c
	${CMAKE_CURRENT_SOURCE_DIR}/src/pacswap.c
)

# Output the library.
add_library(pacsorter SHARED ${SOURCES})
target_include_directories(pacsorter PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(pacsorter PRIVATE pacset)
install(TARGETS pacsorter DESTINATION lib)
# Output the test executable.
add_executable(pacsorter_test ${MAIN})
target_link_libraries(pacsorter_test PRIVATE pacsorter pacset)
install(TARGETS pacsorter_test DESTINATION bin)
