#include <string>
#include "entity.hpp"
#include <iostream>
#include "player.hpp"



Player::Player(std::string name, std::string type, int hitPoints, int attack, int magicPoints, int defense, bool isPlayer, int level)
{
    this->name = name;
    this->type = type;
    this->hitPoints = hitPoints;
    this->attack = attack;
    this->magicPoints = magicPoints;
    this->defense = defense;
    this->isPlayer = isPlayer;
    this->level = level;
}