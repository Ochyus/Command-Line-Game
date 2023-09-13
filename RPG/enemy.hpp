#pragma once
#include <string>
#include "entity.hpp"

class Enemy : public Entity
{
public:
    Enemy(std::string name = "Blank", std::string type = "Physical", int level = 1);
    std::string getName();
    std::string getType();
    int getHitPoints();
    int getAttack();
    int getMagicPoints();
    int getDefense();
    int getLevel();
};