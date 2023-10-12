project(${CMAKE_PROJECT_NAME})

set(CLG_OBJECTS
objects/clg.cpp
objects/mainmenu.cpp
objects/game.cpp
objects/player.cpp
objects/entity.cpp
objects/rpgbattle.cpp)

add_executable(CLG ${CLG_OBJECTS})

target_link_libraries(CLG PRIVATE CLGame)

