#include "entity.hpp"
#include <string>
#include <iostream>

Entity::Entity(Name name, int level, bool playerStatus)
{
    this->name = name;
    this->playerStatus = playerStatus;

    int minHitPoints;
    int maxHitPoints;
    int minAttack;
    int maxAttack;
    int minMagicPoints;
    int maxMagicPoints;
    int minDefense;
    int maxDefense;
    
    if (name == Name::Hero)
    {
        minHitPoints = level * ((2 * 2) - (1 * 1));
        maxHitPoints = level * ((3 * 3) - (2 * 2));
        minAttack = level * ((2 * 2) - (1 * 1));
        maxAttack = level * ((3 * 3) - (2 * 2));
        minMagicPoints = level * ((2 * 2) - (1 * 1));
        maxMagicPoints = level * ((3 * 3) - (2 * 2));
        minDefense = level * ((2 * 2) - (1 * 1));
        maxDefense = level * ((3 * 3) - (2 * 2));
    }
    if (name == Name::Johnathan)
    {
        minHitPoints = level * ((2 * 2) - (1 * 1));
        maxHitPoints = level * ((3 * 3) - (2 * 2));
        minAttack = level * ((2 * 2) - (1 * 1));
        maxAttack = level * ((3 * 3) - (2 * 2));
        minMagicPoints = level * ((2 * 2) - (1 * 1));
        maxMagicPoints = level * ((3 * 3) - (2 * 2));
        minDefense = level * ((2 * 2) - (1 * 1));
        maxDefense = level * ((3 * 3) - (2 * 2));
    }
    if (name == Name::Kate)
    {
        minHitPoints = level * ((2 * 2) - (1 * 1));
        maxHitPoints = level * ((3 * 3) - (2 * 2));
        minAttack = level * ((2 * 2) - (1 * 1));
        maxAttack = level * ((3 * 3) - (2 * 2));
        minMagicPoints = level * ((2 * 2) - (1 * 1));
        maxMagicPoints = level * ((3 * 3) - (2 * 2));
        minDefense = level * ((2 * 2) - (1 * 1));
        maxDefense = level * ((3 * 3) - (2 * 2));
    }
    if (name == Name::Evelyn)
    {
        minHitPoints = level * ((2 * 2) - (1 * 1));
        maxHitPoints = level * ((3 * 3) - (2 * 2));
        minAttack = level * ((2 * 2) - (1 * 1));
        maxAttack = level * ((3 * 3) - (2 * 2));
        minMagicPoints = level * ((2 * 2) - (1 * 1));
        maxMagicPoints = level * ((3 * 3) - (2 * 2));
        minDefense = level * ((2 * 2) - (1 * 1));
        maxDefense = level * ((3 * 3) - (2 * 2));
    }
    if (name == Name::Amelia)
    {
        minHitPoints = level * ((2 * 2) - (1 * 1));
        maxHitPoints = level * ((3 * 3) - (2 * 2));
        minAttack = level * ((2 * 2) - (1 * 1));
        maxAttack = level * ((3 * 3) - (2 * 2));
        minMagicPoints = level * ((2 * 2) - (1 * 1));
        maxMagicPoints = level * ((3 * 3) - (2 * 2));
        minDefense = level * ((2 * 2) - (1 * 1));
        maxDefense = level * ((3 * 3) - (2 * 2));
    }
    if (name == Name::Silvin)
    {
        minHitPoints = level * ((2 * 2) - (1 * 1));
        maxHitPoints = level * ((3 * 3) - (2 * 2));
        minAttack = level * ((2 * 2) - (1 * 1));
        maxAttack = level * ((3 * 3) - (2 * 2));
        minMagicPoints = level * ((2 * 2) - (1 * 1));
        maxMagicPoints = level * ((3 * 3) - (2 * 2));
        minDefense = level * ((2 * 2) - (1 * 1));
        maxDefense = level * ((3 * 3) - (2 * 2));
    }
    if (name == Name::Erica)
    {
        minHitPoints = level * ((2 * 2) - (1 * 1));
        maxHitPoints = level * ((3 * 3) - (2 * 2));
        minAttack = level * ((2 * 2) - (1 * 1));
        maxAttack = level * ((3 * 3) - (2 * 2));
        minMagicPoints = level * ((2 * 2) - (1 * 1));
        maxMagicPoints = level * ((3 * 3) - (2 * 2));
        minDefense = level * ((2 * 2) - (1 * 1));
        maxDefense = level * ((3 * 3) - (2 * 2));
    }
    
    int stats[] = {minHitPoints, maxHitPoints, minAttack, maxAttack, minMagicPoints, maxMagicPoints, minDefense, maxDefense};

    this->level = level;

    srand(time(NULL)); // Seed the time
    this->hitPoints = rand()%(stats[1]-stats[0]+1)+stats[0]; // Generate the number, assign to variable.
    this->attack = rand()%(stats[3]-stats[2]+1)+stats[2];
    this->magicPoints = rand()%(stats[5]-stats[4]+1)+stats[4];
    this->defense = rand()%(stats[7]-stats[6]+1)+stats[6];
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
