#include <vector>
#include "entity.hpp"

class RPG
{
private:
    int entityNum;
    std::vector<Entity> enemyList;
    std::vector<Entity> battle;
public:
    RPG::RPG();
};