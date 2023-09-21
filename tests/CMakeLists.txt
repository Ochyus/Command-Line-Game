project(${CMAKE_PROJECT_NAME})

set(CLG_TESTS_EXECUTABLES
    test.cpp
    ../src/mainmenu.cpp
    ../src/entity.cpp
    ../src/player.cpp
    ../src/game.cpp)


add_executable(CLG_Tests ${CLG_TESTS_EXECUTABLES})

target_link_libraries(CLG_Tests PRIVATE gtest_main CLGame)

add_test(
    NAME CLG_Tests
    COMMAND CLG_Tests
)


