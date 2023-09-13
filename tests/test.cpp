#include "../RPG/entity.hpp"
#include "../RPG/player.hpp"
#include "../RPG/enemy.hpp"
#include "../Main Menu/mainmenu.hpp"
#include "test.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

    bool exitFailure;
    int numTests;
    int passedTests;

int main()
{
    
    Test mytest;
    mytest.assertTrue(1==1, "c\n");
    mytest.testMainMenu();
    mytest.testPlayer();
    mytest.testEnemy();
    mytest.testMiniGame();
    mytest.testMiniGame();
    mytest.testUNO();

    double result = (double)passedTests / numTests;
    std::string output = (to_string(result));
    printf("Successful tests: \n%s\n", output.c_str());
    if (numTests != passedTests)
    {
        return EXIT_FAILURE;
    }
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

void Test::assertTrue(bool test, std::string error_string)
{
    if (!test)
    {
    printf("c\n");
    exitFailure = true;;
    }
    if (test)
    {
        passedTests++;
    }
    numTests++;
}