#include <iostream>
#include "Game.h"
#include "Utils.h"

#define NUMOFPLAYERS 4

using namespace std;



int main() {
    Game game;
    vector<RolesType> roleList;
    roleList = {wolf,seer,villager,villager};
    game.initialize(NUMOFPLAYERS,&roleList);
    return 0;
}
