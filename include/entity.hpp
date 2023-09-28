#pragma once
#include "emove.hpp"
#include "ename.hpp"
#include <string>

class Entity
{
private:
    Name name;
    int hitPoints, attack, magicPoints, defense, level;
    bool playerStatus;

public:
    Entity(Name name, int level, bool isPlayer);
    // levels up the entities and raises their stats
    Name getName() const;
    int getHitPoints() const;
    int getAttack() const;
    int getMagicPoints() const;
    int getDefense() const;
    int getLevel() const;

    bool isPlayer() const;
    bool isAlive() const;

    std::string getNameSTR() const;

    
    const std::string toString() const;
    // general info on an entity
};