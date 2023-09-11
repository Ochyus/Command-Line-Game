#include <string>
#include "entity.hpp"
#include <iostream>
#include "enemy.hpp"

Enemy::Enemy(std::string name, std::string type, int level)
{
    this->name = name;
    this->type = type;
    this->level = level;
}