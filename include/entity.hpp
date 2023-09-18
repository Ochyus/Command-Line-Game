#pragma once
#include <string>

class Entity
{
private:
    std::string name, type;
    int hitPoints, attack, magicPoints, defense, level;
    bool playerStatus;
    void setStatRange();
    void setLevel(int level);

public:
    Entity(std::string name, std::string type, int level, bool isPlayer);
    // levels up the entities and raises their stats
    std::string getName() const;
    std::string getType() const;
    int getHitPoints() const;
    int getAttack() const;
    int getMagicPoints() const;
    int getDefense() const;
    int getLevel() const;

    bool isPlayer() const;
    bool isAlive() const;
    
    const std::string toString() const;
    // general info on an entity
};