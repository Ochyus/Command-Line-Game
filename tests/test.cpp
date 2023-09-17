#include "../include/mainmenu.hpp"
#include "../include/entity.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(CLG_Tests, Main_Menu)
{

}

TEST(CLG_Tests, Player)
{
    Entity myPlayer = Entity("Player", "All Around", 1, true);
    EXPECT_EQ(myPlayer.getName(), "Player");
    EXPECT_EQ(myPlayer.getType(), "All Around");
    EXPECT_EQ(myPlayer.getHitPoints(), 1);
    EXPECT_EQ(myPlayer.getAttack(), 1);
    EXPECT_EQ(myPlayer.getMagicPoints(), 1);
    EXPECT_EQ(myPlayer.getDefense(), 1);
    EXPECT_EQ(myPlayer.getLevel(), 1);
}

TEST(CLG_Tests, Enemy)
{
    Entity myEnemy = Entity("Enemy", "All Around", 1, false);
    EXPECT_TRUE(myEnemy.getName() == "Enemy");
    EXPECT_TRUE(myEnemy.getType() == "All Around");
    EXPECT_TRUE(myEnemy.getHitPoints() == 1);
    EXPECT_TRUE(myEnemy.getAttack() == 1);
    EXPECT_TRUE(myEnemy.getMagicPoints() == 1);
    EXPECT_TRUE(myEnemy.getDefense() == 1);
    EXPECT_TRUE(myEnemy.getLevel() == 1);
}

TEST(CLG_Tests, Mini_Game)
{

}
TEST(CLG_Tests, Board_Game)
{

}
TEST(CLG_Tests, UNO)
{

}

