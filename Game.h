//
// Created by yufei on 29/10/2017.
//

#ifndef WOLFGAME_GAME_H
#define WOLFGAME_GAME_H

#include <vector>
#include <iostream>
#include <unordered_map>
#include "Person.h"
#include "Utils.h"

using namespace std;

class Game {
private:
    int numOfPlayers=0;
    vector<Person*> personInGame;
    unordered_map<int,Person*> personInGameBySeat;
    unordered_map<int,Person*> personInGameBySeatGenerate(vector<Person*>);
public:
    Game();
    ~Game();
    int initialize(int,vector<RolesType>* person);
    int process();
    int result();
    class Day {
    public:
        Day();
        ~Day();
    };
    class FirstDay: public Day {

    };
};

#endif //WOLFGAME_GAME_H
