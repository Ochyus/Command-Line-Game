#pragma once
#include <string>

class Entity
{
protected:
    std::string name, type;
    int hitPoints, attack, magicPoints, defense, level;
    bool isPlayer;

public:
    Entity(std::string name, std::string type, int level, bool isPlayer);
    void setLevel(int level);
    // levels up the entities and raises their stats
    std::string getName();
    std::string getType();
    int getHitPoints();
    int getAttack();
    int getMagicPoints();
    int getDefense();
    int getLevel();

    bool getPlayerStatus();
    bool isAlive();
    
    const std::string toString() const;
    // general info on an entity

};