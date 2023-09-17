#include "mainmenu.hpp"
#include "entity.hpp"
#include <gtest/gtest.h>

using namespace std;

TEST(Main_Menu, Navigation)
{

}

TEST(Player, Base)
{
    Entity myPlayer = Entity("Player", "All Around", 0, true);
    EXPECT_EQ(myPlayer.getName(), "Player");
    EXPECT_EQ(myPlayer.getType(), "All Around");
    EXPECT_EQ(myPlayer.getHitPoints(), 0);
    EXPECT_EQ(myPlayer.getAttack(), 0);
    EXPECT_EQ(myPlayer.getMagicPoints(), 0);
    EXPECT_EQ(myPlayer.getDefense(), 0);
    EXPECT_EQ(myPlayer.getLevel(), 0);
    printf("%s", myPlayer.toString().c_str());
}

TEST(Enemy, Base)
{
    Entity myEnemy = Entity("Enemy", "All Around", 0, false);
    EXPECT_TRUE(myEnemy.getName() == "Enemy");
    EXPECT_TRUE(myEnemy.getType() == "All Around");
    EXPECT_TRUE(myEnemy.getHitPoints() == 0);
    EXPECT_TRUE(myEnemy.getAttack() == 0);
    EXPECT_TRUE(myEnemy.getMagicPoints() == 0);
    EXPECT_TRUE(myEnemy.getDefense() == 0);
    EXPECT_TRUE(myEnemy.getLevel() == 0);
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

