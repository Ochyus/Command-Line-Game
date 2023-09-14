#pragma once
#include <string>
#include "entity.hpp"

class Enemy : public Entity
{
public:
    Enemy(std::string name = "Blank", std::string type = "Physical", int level = 1);
};