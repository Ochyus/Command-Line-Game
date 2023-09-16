#pragma once

#include "../include/mainmenu.hpp"
#include "../include/entity.hpp"

class Test
{
public:
    void testMainMenu();
    void testPlayer();
    void testEnemy();
    void testMiniGame();
    void testBoardGame();
    void testUNO();
    void assertTrue(bool test, std::string error_string, std::string testName);
};