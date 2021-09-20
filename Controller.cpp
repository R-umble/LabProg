//
// Created by francesco on 05/09/21.
//

#include <vector>
#include "Controller.h"

void Controller::calcMax(vector<int> vect) {
    int a = *vect.begin();
    for (auto itr: vect) {
        if (a < itr)
            a = itr;
    }
    registro->setData(a);
}

void Controller::calcMin(vector<int> vect) {
    int a = *vect.begin();
    for (auto itr: vect) {
        if (a > itr)
            a = itr;
    }
    registro->setData(a);
}

void Controller::calcMean(vector<int> vect) {
    int a = 0;
    for (auto itr: vect) {
        a += itr;
    }
    a = a / 9;
    registro->setData(a);
}

void Controller::calcSum(vector<int> vect) {
    int a = 0;
    for (auto itr: vect) {
        a += itr;
    }
    registro->setData(a);
}
