#include "mainmenu.hpp"
#include "entity.hpp"
#include <string>
#include <gtest/gtest.h>

TEST(Main_Menu, Navigation)
{

}

TEST(Entity, Base)
{
    Entity myPlayer1 = Entity(Name::Hero, 0, true);
    printf("%s", myPlayer1.toString().c_str());
}

TEST(Entity, Positive_Level)
{
    Entity myPlayer2 = Entity(Name::Hero, 100, true);
    printf("%s", myPlayer2.toString().c_str());
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

