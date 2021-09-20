//
// Created by francesco on 28/08/21.
//

#include "Registro.h"
#include "iostream"
#include "string"

using namespace std;

void Registro::notify() {
    for (Observer* observer : observers)
        observer->update();
}

void Registro::addObserver(Observer* o) {
    observers.push_back(o);
}

void Registro::removeObserver(Observer* o) {
    observers.remove(o);
}

void Registro::setData(const int num) {
        data = num;
        notify();
}

int Registro::getData() const {
    return data;
}
