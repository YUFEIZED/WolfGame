//
// Created by yufei on 29/10/2017.
//

#include <iostream>
#include "Utils.h"
#include <algorithm>
#include <time.h>
#include <ctime>

using namespace std;

vector<int> Utils::numSequenceGenerator(int num) {
    vector<int> ranNum;
    srand ( unsigned ( time(0) ) );
    for (int i=1;i<num+1;i++) {
        ranNum.push_back(i);
    }
    random_shuffle(ranNum.begin(),ranNum.end());
    return ranNum;
}

/*
cout << "shuffle result = " << endl;
for (vector<int>::iterator it=ranNum.begin();it!=ranNum.end();it++) {
    cout << ' ' << *it;
}
cout << '\n' ;
*/
