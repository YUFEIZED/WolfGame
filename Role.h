//
// Created by yufei on 29/10/2017.
//

#ifndef WOLFGAME_ROLE_H
#define WOLFGAME_ROLE_H

#include <iostream>
#include "Utils.h"

using namespace std;

class Role {
protected:
    RolesType rolesType;
public:
    virtual vector<int> action()=0;
    RolesType getRoleType();
    virtual string show()=0;
};

class Wolf: public Role {
public:
    Wolf(RolesType);
    virtual vector<int> action();
    virtual string show();
};

class God: public Role {
public:
    virtual vector<int> action()= 0;
    virtual string show()=0;
};

class Seer: public God {
public:
    Seer(RolesType);
    virtual vector<int> action();
    virtual string show();
};
class Villager: public Role {
public:
    Villager(RolesType);
    virtual vector<int> action();
    virtual string show();
};

class RoleFactory {
public:
    static Role* createRole(RolesType);
};

#endif //WOLFGAME_ROLE_H
