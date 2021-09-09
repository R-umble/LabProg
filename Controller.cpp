//
// Created by francesco on 05/09/21.
//

#include "Controller.h"

void Controller::increment() {
    int value = registro->getData();
    value++;
    registro->setData(value);
}