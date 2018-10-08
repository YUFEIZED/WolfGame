//
// Created by yufei on 29/10/2017.
//

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person::Person(int number, RolesType role) {
    this->seatNum = number;
    this->role = RoleFactory::createRole(role);
}

Person::~Person() {
    delete this->role;
}

RolesType Person::getRoleType() {
    return this->role->getRoleType();
}

int Person::getSeatNumber() {
    return this->seatNum;
}

bool Person::getIsAlive() {
    return this->isAlive;
}

bool Person::getIsSheriff() {
    return this->isSheriff;
}

void Person::setIsAlive(bool v) {
    this->isAlive = v;
}

void Person::setIsSheriff(bool v) {
    this->isSheriff = v;
}

string Person::show() {
    string str;
    str.append("Player ").append(to_string(seatNum)).append(" is ").append(this->role->show());
    return str;
}
