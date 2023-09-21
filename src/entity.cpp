#include "entity.hpp"
#include <string>
#include <iostream>

int maxValue[4]; // level * 5 - 5;
int minValue[4]; // level * 4 - 4;

void Entity::setStatRange()
{
    if (name == Name::Hero)
    {
        maxValue[0] = level * ((3 * 3) - (2 * 2));
        minValue[0] = level * ((2 * 2) - (1 * 1));
        maxValue[1] = level * ((3 * 3) - (2 * 2));
        minValue[1] = level * ((2 * 2) - (1 * 1));
        maxValue[2] = level * ((3 * 3) - (2 * 2));
        minValue[2] = level * ((2 * 2) - (1 * 1));
        maxValue[3] = level * ((3 * 3) - (2 * 2));
        minValue[3] = level * ((2 * 2) - (1 * 1));
    }
    if (name == Name::Johnathan)
    {
        maxValue[0] = level * ((3 * 3) - (2 * 2));
        minValue[0] = level * ((2 * 2) - (1 * 1));
        maxValue[1] = level * ((3 * 3) - (2 * 2));
        minValue[1] = level * ((2 * 2) - (1 * 1));
        maxValue[2] = level * ((3 * 3) - (2 * 2));
        minValue[2] = level * ((2 * 2) - (1 * 1));
        maxValue[3] = level * ((3 * 3) - (2 * 2));
        minValue[3] = level * ((2 * 2) - (1 * 1));
    }
    if (name == Name::Kate)
    {
        maxValue[0] = level * ((3 * 3) - (2 * 2));
        minValue[0] = level * ((2 * 2) - (1 * 1));
        maxValue[1] = level * ((3 * 3) - (2 * 2));
        minValue[1] = level * ((2 * 2) - (1 * 1));
        maxValue[2] = level * ((3 * 3) - (2 * 2));
        minValue[2] = level * ((2 * 2) - (1 * 1));
        maxValue[3] = level * ((3 * 3) - (2 * 2));
        minValue[3] = level * ((2 * 2) - (1 * 1));
    }
    if (name == Name::Evelyn)
    {
        maxValue[0] = level * ((3 * 3) - (2 * 2));
        minValue[0] = level * ((2 * 2) - (1 * 1));
        maxValue[1] = level * ((3 * 3) - (2 * 2));
        minValue[1] = level * ((2 * 2) - (1 * 1));
        maxValue[2] = level * ((3 * 3) - (2 * 2));
        minValue[2] = level * ((2 * 2) - (1 * 1));
        maxValue[3] = level * ((3 * 3) - (2 * 2));
        minValue[3] = level * ((2 * 2) - (1 * 1));
    }
    if (name == Name::Amelia)
    {
        maxValue[0] = level * ((3 * 3) - (2 * 2));
        minValue[0] = level * ((2 * 2) - (1 * 1));
        maxValue[1] = level * ((3 * 3) - (2 * 2));
        minValue[1] = level * ((2 * 2) - (1 * 1));
        maxValue[2] = level * ((3 * 3) - (2 * 2));
        minValue[2] = level * ((2 * 2) - (1 * 1));
        maxValue[3] = level * ((3 * 3) - (2 * 2));
        minValue[3] = level * ((2 * 2) - (1 * 1));
    }
    if (name == Name::Silvin)
    {
        maxValue[0] = level * ((3 * 3) - (2 * 2));
        minValue[0] = level * ((2 * 2) - (1 * 1));
        maxValue[1] = level * ((3 * 3) - (2 * 2));
        minValue[1] = level * ((2 * 2) - (1 * 1));
        maxValue[2] = level * ((3 * 3) - (2 * 2));
        minValue[2] = level * ((2 * 2) - (1 * 1));
        maxValue[3] = level * ((3 * 3) - (2 * 2));
        minValue[3] = level * ((2 * 2) - (1 * 1));
    }
    if (name == Name::Erica)
    {
        maxValue[0] = level * ((3 * 3) - (2 * 2));
        minValue[0] = level * ((2 * 2) - (1 * 1));
        maxValue[1] = level * ((3 * 3) - (2 * 2));
        minValue[1] = level * ((2 * 2) - (1 * 1));
        maxValue[2] = level * ((3 * 3) - (2 * 2));
        minValue[2] = level * ((2 * 2) - (1 * 1));
        maxValue[3] = level * ((3 * 3) - (2 * 2));
        minValue[3] = level * ((2 * 2) - (1 * 1));
    }
    if (name == Name::Hero)
    {
        maxValue[0] = level * ((3 * 3) - (2 * 2));
        minValue[0] = level * ((2 * 2) - (1 * 1));
        maxValue[1] = level * ((3 * 3) - (2 * 2));
        minValue[1] = level * ((2 * 2) - (1 * 1));
        maxValue[2] = level * ((3 * 3) - (2 * 2));
        minValue[2] = level * ((2 * 2) - (1 * 1));
        maxValue[3] = level * ((3 * 3) - (2 * 2));
        minValue[3] = level * ((2 * 2) - (1 * 1));
    }
    
}

Entity::Entity(Name name, int level, bool playerStatus)
{
    this->name = name;
    this->playerStatus = playerStatus;
    Entity::setLevel(level);
}

void Entity::setLevel(int level)
{
    this->level = level;
    setStatRange();

    srand(time(NULL)); // Seed the time
    this->hitPoints = rand()%(maxValue[0]-minValue[0]+1)+minValue[0]; // Generate the number, assign to variable.
    this->attack = rand()%(maxValue[1]-minValue[1]+1)+minValue[1];
    this->magicPoints = rand()%(maxValue[2]-minValue[2]+1)+minValue[2];
    this->defense = rand()%(maxValue[3]-minValue[3]+1)+minValue[3];
}

int Entity::getHitPoints() const
{
    return this->hitPoints;
}

int Entity::getAttack() const
{
    return this->attack;
}

int Entity::getMagicPoints() const
{
    return this->magicPoints;
}

int Entity::getDefense() const
{
    return this->defense;
}

int Entity::getLevel() const
{
    return this->level;
}

bool Entity::isPlayer() const
{
    return this->playerStatus;
}

bool Entity::isAlive() const
{
    return this->hitPoints > 0;
}

std::string Entity::getNameSTR() const
{
switch (name)
    {
        case Name::Hero: return "Hero";
        break;
        case Name::Johnathan: return "Johnathan";
        break;
        case Name::Kate: return "Kate";
        break;
        case Name::Jacob: return "Jacob";
        break;
        case Name::Evelyn: return "Evelyn";
        break;
        case Name::Amelia: return "Amelia";
        break;
        case Name::Silvin: return "Silvin";
        break;
        case Name::Erica: return "Erica";
        break;
        default:
        return NULL;
    }
}


const std::string Entity::toString() const
{
    return "Name: " + getNameSTR() + "\n" +
           
           "hitPoints: " + std::to_string(this->hitPoints) + "\n" +
           "attack: " + std::to_string(this->attack) + "\n" +
           "magicPoints: " + std::to_string(this->magicPoints) + "\n" +
           "defense: " + std::to_string(this->defense) + "\n" +
           "level: " + std::to_string(this->level) + "\n"
           "IsPlayer: " + std::to_string(Entity::isPlayer()) + "\n" +
           "IsAlive: " + std::to_string(Entity::isAlive()) + "\n";
}
