//
// Created by francesco on 05/09/21.
//

#include "Controller.h"

int Controller::calcMax(int *arr) {
    int a = 0;
    for (int n = 0; n < 9; n++) {
        if(a>arr[n])
            a=arr[n];
    }
    return a;
}

int Controller::calcMin(int *arr) {
    int a = 0;
    for (int n = 0; n < 9; n++) {
        if(a<arr[n])
            a=arr[n];
    }
    return a;
}

int Controller::calcMean(int *arr) {
    int a = 0;
    for (int n = 0; n < 9; n++) {
        a+=arr[n];
    }
    a=a/9;
    return a;
}

int Controller::calcSum(int *arr) {
    int a = 0;
    for (int n = 0; n < 9; n++) {
        a+=arr[n];
    }
    return a;
}
