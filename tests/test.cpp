#include "mainmenu.hpp"
#include "entity.hpp"
#include <string>
#include <gtest/gtest.h>

std::string testString;
int testInteger;
bool testBoolean;

TEST(Main_Menu, Navigation)
{

}

TEST(Player, Base)
{
    Entity myPlayer = Entity(Name::Hero, 0, true);
    testString = myPlayer.getNameSTR();
    EXPECT_TRUE(testString == "Hero");
    testInteger = myPlayer.getHitPoints();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myPlayer.getAttack();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myPlayer.getMagicPoints();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myPlayer.getDefense();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myPlayer.getLevel();
    EXPECT_TRUE(testInteger == 0);
    testBoolean = myPlayer.isPlayer();
    EXPECT_TRUE(testBoolean == true);
    testBoolean = myPlayer.isAlive();
    EXPECT_TRUE(testBoolean == false);
    printf("%s", myPlayer.toString().c_str());
}

TEST(Player, Positive_Level)
{
    Entity myPlayer = Entity(Name::Hero, 0, true);
    testString = myPlayer.getNameSTR();
    EXPECT_TRUE(testString == "Hero");
    testInteger = myPlayer.getHitPoints();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myPlayer.getAttack();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myPlayer.getMagicPoints();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myPlayer.getDefense();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myPlayer.getLevel();
    EXPECT_TRUE(testInteger == 0);
    testBoolean = myPlayer.isPlayer();
    EXPECT_TRUE(testBoolean == true);
    testBoolean = myPlayer.isAlive();
    EXPECT_TRUE(testBoolean == false);
    printf("%s", myPlayer.toString().c_str());
}

TEST(Enemy, Base)
{
    Entity myEnemy = Entity(Name::Hero, 0, false);
    testString = myEnemy.getNameSTR();
    EXPECT_TRUE(testString == "Hero");
    testInteger = myEnemy.getHitPoints();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myEnemy.getAttack();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myEnemy.getMagicPoints();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myEnemy.getDefense();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myEnemy.getLevel();
    EXPECT_TRUE(testInteger == 0);
    testBoolean = myEnemy.isPlayer();
    EXPECT_TRUE(testBoolean == false);
    testBoolean = myEnemy.isAlive();
    EXPECT_TRUE(testBoolean == false);
    printf("%s", myEnemy.toString().c_str());
}

TEST(Enemy, Positive_Level)
{
    Entity myEnemy = Entity(Name::Hero, 0, false);
    testString = myEnemy.getNameSTR();
    EXPECT_TRUE(testString == "Hero");
    testInteger = myEnemy.getHitPoints();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myEnemy.getAttack();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myEnemy.getMagicPoints();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myEnemy.getDefense();
    EXPECT_TRUE(testInteger == 0);
    testInteger = myEnemy.getLevel();
    EXPECT_TRUE(testInteger == 0);
    testBoolean = myEnemy.isPlayer();
    EXPECT_TRUE(testBoolean == false);
    testBoolean = myEnemy.isAlive();
    EXPECT_TRUE(testBoolean == false);
    printf("%s", myEnemy.toString().c_str());
}

TEST(Mini_Game, Game)
{

}

TEST(Board_Game, Game)
{

}

TEST(UNO, UNO)
{

}

