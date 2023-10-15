#include <vector>
#include "entity.hpp"

class RPGBattle
{
private:
    int entityNum;
    std::vector<Entity> enemyList;
    std::vector<Entity> battle;
public:
    RPGBattle();
    void AIMode();
};