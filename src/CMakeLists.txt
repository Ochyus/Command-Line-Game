project(${CMAKE_PROJECT_NAME})

set(CLG_EXECUTABLES
clg.cpp
mainmenu.cpp
attack.cpp
entity.cpp
player.cpp
game.cpp)

add_executable(CLG ${CLG_EXECUTABLES})

target_link_libraries(CLG PRIVATE CLGame)

