//
// Created by yufei on 29/10/2017.
//

#ifndef WOLFGAME_PERSON_H
#define WOLFGAME_PERSON_H

#include <iostream>
#include "Role.h"
#include "Utils.h"

using namespace std;

class Person{
private:
    bool isSheriff = false;
    bool isAlive = true;
    int seatNum;
    Role* role;
public:
    Person(int,RolesType);
    ~Person();
    RolesType getRoleType();
    int getSeatNumber();
    bool getIsAlive();
    bool getIsSheriff();
    void setIsAlive(bool);
    void setIsSheriff(bool);
    string show();
};


#endif //WOLFGAME_PERSON_H
