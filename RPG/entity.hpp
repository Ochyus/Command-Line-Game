#pragma once
#include <string>

class Entity
{
protected:
    std::string name, type;
    int hitPoints, attack, magicPoints, defense, level;

public:
    void levelUp();
    // levels up the entities and raises their stats
    std::string getName();
    std::string getType();
    int getHitPoints();
    int getAttack();
    int getMagicPoints();
    int getDefense();
    int getLevel();
    
    const std::string toString() const;
    // general info on an entity

};