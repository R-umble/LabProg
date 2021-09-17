//
// Created by francesco on 05/09/21.
//

#include "Controller.h"

void Controller::calcMax(int *arr) {
    int a = 0;
    for (int n = 0; n < 9; n++) {
        if(a>arr[n])
            a=arr[n];
    }
    registro->setData(a);
}

void Controller::calcMin(int *arr) {
    int a = 0;
    for (int n = 0; n < 9; n++) {
        if(a<arr[n])
            a=arr[n];
    }
    registro->setData(a);
}

void Controller::calcMean(int *arr) {
    int a = 0;
    for (int n = 0; n < 9; n++) {
        a+=arr[n];
    }
    a=a/9;
    registro->setData(a);
}

void Controller::calcSum(int *arr) {
    int a = 0;
    for (int n = 0; n < 9; n++) {
        a+=arr[n];
    }
    registro->setData(a);
}
