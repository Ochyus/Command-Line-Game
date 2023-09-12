#include <string>
#include "entity.hpp"
#include <iostream>

void Entity::levelUp()
{
    this->level++; //increase level of character
}

const std::string Entity::toString() const
{
    return "Name: " + this->name + "\n" +
    "Type: " + this->type + "\n" +
           "hitPoints: " + std::to_string(this->hitPoints) + "\n" +
           "attack: " + std::to_string(this->attack) + "\n" +
           "magicPoints: " + std::to_string(this->magicPoints) + "\n" +
           "defense: " + std::to_string(this->defense) + "\n" +
           "level: " + std::to_string(this->level) + "\n";
}