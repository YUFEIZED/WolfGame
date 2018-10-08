//
// Created by yufei on 29/10/2017.
//

#ifndef WOLFGAME_UTILS_H
#define WOLFGAME_UTILS_H

#include <iostream>
#include <vector>

using namespace std;

enum RolesType{wolf,seer,villager};

class Utils {
public:
    Utils();
    ~Utils();
    //static input();
    //static log();
    static vector<int> numSequenceGenerator(int);
    static vector<RolesType>* rolesSequenceGenerator(vector<RolesType>*);
};
#endif //WOLFGAME_UTILS_H
