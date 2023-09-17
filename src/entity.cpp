#include "entity.hpp"
#include <string>
#include <iostream>


Entity::Entity(std::string name, std::string type, int level, bool isPlayer)
{
    this->name = name;
    this->type = type;
    this->level = level;
    this->isPlayer = isPlayer;
    Entity::setLevel(level);
}
void Entity::setLevel(int level)
{
    this->level = level;
    int maxValue[4]; // level * 5 - 5;
    int minValue[4]; // level * 4 - 4;
    if (type == "All Around")
    {
        maxValue[0] = level * (3^2 - 2^2);
        minValue[0] = level * (2^2 - 1^2);
        maxValue[1] = level * (3^2 - 2^2);
        minValue[1] = level * (2^2 - 1^2);
        maxValue[2] = level * (3^2 - 2^2);
        minValue[2] = level * (2^2 - 1^2);
        maxValue[3] = level * (3^2 - 2^2);
        minValue[3] = level * (2^2 - 1^2);
    }
    srand(time(NULL)); // Seed the time
    this->hitPoints = rand()%(maxValue[0]-minValue[0]+1)+minValue[0]; // Generate the number, assign to variable.
    this->attack = rand()%(maxValue[1]-minValue[1]+1)+minValue[1];
    this->magicPoints = rand()%(maxValue[2]-minValue[2]+1)+minValue[2];
    this->defense = rand()%(maxValue[3]-minValue[3]+1)+minValue[3];
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

bool Entity::getPlayerStatus()
{
    return this->isPlayer;
}

bool Entity::isAlive()
{
    return (this->hitPoints > 0);
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