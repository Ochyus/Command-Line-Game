#pragma once
#include <string>

class Entity
{
protected:
    std::string name, type;
    int hitPoints, attack, magicPoints, defense, level;
    bool isPlayer;

public:
    void levelUp();
    // levels up the entities and raises their stats
    const std::string toString() const;
    // general info on an entity
};