#include <string>
#include "entity.hpp"
#include <iostream>

void Entity::setLevel(int level)
{
    int maxValue[4]; // level * 5 - 5;
    int minValue[4]; // level * 4 - 4;
    if (type == "All around")
    {
        srand(time(NULL)); // Seed the time
        // int finalNum = rand()%(maxValue-minValue+1)+minValue; // Generate the number, assign to variable.
    }
    if (level > 0 && level < 10)
    {

    }
    
}

std::string Entity::getName()
{
    return this->name;
}

std::string Entity::getType()
{
    return this->type;
}

int Entity::getHitPoints()
{
    return this->hitPoints;
}

int Entity::getAttack()
{
    return this->attack;
}

int Entity::getMagicPoints()
{
    return this->magicPoints;
}

int Entity::getDefense()
{
    return this->defense;
}

int Entity::getLevel()
{
    return this->level;
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