//
// Created by yufei on 29/10/2017.
//

#include <iostream>
#include "Role.h"

using namespace std;

RolesType Role::getRoleType() {
    return this->rolesType;
}

Wolf::Wolf(RolesType type) {
    this->rolesType = type;
}
/*
void Wolf::action(vector<Person*> people) {
    if (people.size()!=1) {
        cout << "ERROR: input number of person by wolf is not correct" << endl;
        exit(EXIT_FAILURE);
    }
    if (!people[0]->getIsAlive()) {
        cout << "ERROR: the person you choose already left" << endl;
        exit(EXIT_FAILURE);
    }
    people[0]->setIsAlive(false);
}
*/

vector<int> Wolf::action() {
    vector<int> a = {1};
    return a;
}
string Wolf::show() {
    return "wolf";
}

Seer::Seer(RolesType type) {
    this->rolesType = type;
}

vector<int> Seer::action() {
    vector<int> a = {1};
    return a;
}

string Seer::show() {
    return "seer";
}

Villager::Villager(RolesType type) {
    this->rolesType = type;
}

vector<int> Villager::action() {
    vector<int> a = {1};
    return a;
}

string Villager::show() {
    return "villager";
}


Role* RoleFactory::createRole(RolesType type) {
    switch (type) {
        case wolf:
            return new Wolf(type);
        case seer:
            return new Seer(type);
        case villager:
            return new Villager(type);
        default:
            return new Villager(type);
    }
}
