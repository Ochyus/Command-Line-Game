project(${CMAKE_PROJECT_NAME})

find_package(Boost)

set(CLG_INTERFACE_FILES 
mainmenu.hpp
emove.hpp
ename.hpp
entity.hpp
player.hpp
game.hpp
rpg.hpp)

add_library(CLGame 
    INTERFACE
    ${CLG_INTERFACE_FILES})



target_include_directories(CLGame
    INTERFACE
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../include>)


install(TARGETS CLGame EXPORT ${CMAKE_PROJECT_NAME} DESTINATION
    ${CMAKE_INSTALL_LIBDIR}/CLG/cmake)

install(FILES ${CONCURRENCY_INTERFACE_FILES} DESTINATION
        ${CMAKE_INSTALL_INCLUDEDIR}/CLG)
