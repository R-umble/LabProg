//
// Created by francesco on 05/09/21.
//

#include "Controller.h"

void Controller::increment() {
    int value = model->getData();
    value++;
    model->setData(value);
}

void Controller::decrement() {
    int value = model->getData();
    value--;
    model->setData(value);
}