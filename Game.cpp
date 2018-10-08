//
// Created by yufei on 29/10/2017.
//

#include <iostream>
#include <unordered_map>
#include <vector>
#include "Game.h"

using namespace std;

Game::Game() {

}

Game::~Game() {
    for (int i=0;i<numOfPlayers;i++) {
        delete personInGame[i];
    }
}

int Game::initialize(int num,vector<RolesType>* roleList) {
    this->numOfPlayers = num;
    if (num!=roleList->size()) {
        cout << "ERROR: input number of person is not correct" << endl;
        exit(EXIT_FAILURE);
    }
    auto i = roleList->begin();
    vector<int> ranNum = Utils::numSequenceGenerator(num);
    for (int j=0;j<num;j++) {
        personInGame.push_back(new Person(ranNum[j],*(i+j)));
        cout << personInGame[j]->show() << endl;
    }
    this->personInGameBySeat = personInGameBySeatGenerate(personInGame);
    return 0;
}

unordered_map<int,Person*> Game::personInGameBySeatGenerate(vector<Person*> personInGame) {
    int size = personInGame.size();
    unordered_map<int,Person*> table;
    for (int i=0;i<size;i++) {
        table.insert({personInGame[i]->getSeatNumber(),personInGame[i]});
    }
    for (int i=0;i<size;i++) {
        cout << table.find(i+1)->second->getRoleType()<<endl;
    }
    return table;
}

/*
auto i = roleList->begin();
for (int k=0;k<roleList->size();k++) {
cout << "the roles are = " << *(i+k) << endl;
}
 */
