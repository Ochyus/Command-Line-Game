# Specify the minimum required CMake version
cmake_minimum_required(VERSION 3.22.1)

# Set the project name and version
project(CLG VERSION 0.1.0 LANGUAGES CXX)

# This is for resolving header file includes using text editors like
# vim/emacs/vscode
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# We will be using c++17
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(include)

option(BUILD_TESTS "Build library tests" ON)
option(BUILD_EXAMPLES "Build example executables" ON)

if (BUILD_TESTS)
    message(STATUS "Building tests...")
    add_subdirectory(googletest)
    add_subdirectory(tests)
endif()

if (BUILD_EXAMPLES)
    message(STATUS "Building examples...")
    add_subdirectory(src)
endif()

install(FILES cmake/CLG-config.cmake DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/CLG/cmake)

install(EXPORT ${CMAKE_PROJECT_NAME} DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/CLG/cmake)