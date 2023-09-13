#pragma once

#include "../RPG/entity.hpp"
#include "../RPG/player.hpp"
#include "../RPG/enemy.hpp"
#include "../Main Menu/mainmenu.hpp"

class Test
{
public:
    void testMainMenu();
    void testPlayer();
    void testEnemy();
    void testMiniGame();
    void testBoardGame();
    void testUNO();
    void assertTrue(bool test, std::string error_string);
};