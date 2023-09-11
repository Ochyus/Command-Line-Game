#pragma once
#include <string>
#include "entity.hpp"

class Player : Entity
{
public:
    Player(std::string name = "Blank", std::string type = "Physical", int hitPoints = 1, int attack = 1, int magicPoints = 1, int defense = 1, bool isPlayer = false, int level = 1);
    // adds an entity with a name and several turn based combat related stats
};