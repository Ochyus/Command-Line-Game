#include "../Main Menu/mainmenu.hpp"
#include "../RPG/entity.hpp"
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
    Entity myPlayer("Player", "All Around", 1, true);
    Test::assertTrue(myPlayer.getName() == "Player", "name was set up incorrectly", "Player: Get Name");
    Test::assertTrue(myPlayer.getType() == "All Around", "type was set up incorrectly", "Player: Get Type");
    Test::assertTrue(myPlayer.getHitPoints() == 1, "hitPoints was set up incorrectly", "Player: Get Hit Points");
    Test::assertTrue(myPlayer.getAttack() == 1, "attack was set up incorrectly", "Player: Get Attack");
    Test::assertTrue(myPlayer.getMagicPoints() == 1, "magicPoints was set up incorrectly", "Player: Get Magic Points");
    Test::assertTrue(myPlayer.getDefense() == 1, "defense was set up incorrectly", "Player: Get Defense");
    Test::assertTrue(myPlayer.getLevel() == 1, "level was set up incorrectly", "Player: Get Level");
}

void Test::testEnemy()
{
    Entity myEnemy("Enemy", "All Around", 1, false);
    Test::assertTrue(myEnemy.getName() == "Enemy", "name was set up incorrectly", "Enemy: Get Name");
    Test::assertTrue(myEnemy.getType() == "All Around", "type was set up incorrectly", "Enemy: Get Type");
    Test::assertTrue(myEnemy.getHitPoints() == 1, "hitPoints was set up incorrectly", "Enemy: Get HitPoints");
    Test::assertTrue(myEnemy.getAttack() == 1, "attack was set up incorrectly", "Enemy: Get Attack");
    Test::assertTrue(myEnemy.getMagicPoints() == 1, "magicPoints was set up incorrectly", "Enemy: Get Magic Points");
    Test::assertTrue(myEnemy.getDefense() == 1, "defense was set up incorrectly", "Enemy: Get Defense");
    Test::assertTrue(myEnemy.getLevel() == 1, "level was set up incorrectly", "Enemy: Get Level");
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

void Test::assertTrue(bool test, std::string errorString, std::string testName)
{
    if (!test)
    {
        printf("Test: %s. ", testName.c_str());
    printf("Error: %s\n", errorString.c_str());
    exitFailure = true;;
    }
    if (test)
    {
        passedTests++;
    }
    numTests++;
}