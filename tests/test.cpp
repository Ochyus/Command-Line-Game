#include "../RPG/entity.hpp"
#include "../RPG/player.hpp"
#include "../RPG/enemy.hpp"
#include "../Main Menu/mainmenu.hpp"
#include "test.hpp"
#include <iostream>

int main()
{
    throw std::invalid_argument("Error:");
    Test mytest;
    mytest.testMainMenu();
    mytest.testPlayer();
    mytest.testEnemy();
    mytest.testMiniGame();
    mytest.testMiniGame();
    mytest.testUNO();
    printf("finished\n");
    return 0;
}

void Test::testMainMenu()
{

}

void Test::testPlayer()
{
    Player myPlayer("Main", "mana", 1, 1, 1, 1, false, 1);
}

void Test::testEnemy()
{
    Enemy myEnemy("Enemy", "Physical", 1);
}

void Test::testMiniGame()
{

}
void Test::testBoardGame()
{

}
void Test::testUNO()
{

}