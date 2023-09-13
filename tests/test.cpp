#include "../RPG/entity.hpp"
#include "../RPG/player.hpp"
#include "../RPG/enemy.hpp"
#include "../Main Menu/mainmenu.hpp"
#include "test.hpp"
#include <iostream>
#include <stdexcept>

int main()
{
    Test mytest;
    if (1==1)
    {
    printf("c\n");
    return EXIT_FAILURE;
    }
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

void Test::error(std::string error_type)
{
    std::cout << error_type << '\n';
}

