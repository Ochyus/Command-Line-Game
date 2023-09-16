# Specify the minimum required CMake version
cmake_minimum_required(VERSION 3.25.0)

# Set the project name and version
project(CLG VERSION 0.1.0 LANGUAGES CXX)

# Set C++ standard (e.g., C++11, C++14, C++17, etc.)
set(CMAKE_CXX_STANDARD 20)

add_executable(CLG clg.cpp
src/entity.cpp
src/attack.cpp
src/game.cpp
src/mainmenu.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

target_compile_features(CLG PRIVATE cxx_std_20)
target_include_directories(CLG PRIVATE $(CMAKE_CURRENT_SOURCE_DIR)/include)

include(CTest)

# Enable testing for the project
enable_testing()

# Specify the test executable and its source files
add_executable(CLG_Tests
    tests/test.cpp
    src/entity.cpp
    src/attack.cpp
    src/game.cpp
    src/mainmenu.cpp)

# Link any libraries or dependencies needed for testing
# target_link_libraries(TestYourProjectName PRIVATE YourAdditionalLibrary)

# Add a test case
add_test(
    NAME CLG_Tests
    COMMAND CLG_Tests)

# Optional: You can add more tests in a similar manner

# Set the working directory for tests (optional)
# set_tests_properties(YourTestName PROPERTIES WORKING_DIRECTORY ${CMAKE_BINARY_DIR})

# ... (Rest of your CMake configuration)
