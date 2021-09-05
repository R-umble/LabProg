//
// Created by francesco on 05/09/21.
//

#ifndef LABPROG_CONTROLLER_H
#define LABPROG_CONTROLLER_H

#include "Registro.h"


class Controller {
public:
    Controller(Registro* m) : model(m) {}
    void increment();
    void decrement();
private:
    Registro* model;
};


#endif //LABPROG_CONTROLLER_H
