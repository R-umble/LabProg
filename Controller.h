//
// Created by francesco on 05/09/21.
//

#ifndef LABPROG_CONTROLLER_H
#define LABPROG_CONTROLLER_H

#include <array>
#include "Registro.h"


class Controller {
public:
    Controller(Registro* m) : registro(m) {}

    void calcMax(array<int, 9> &arr);

    void calcMin(int *arr);

    void calcMean(int *arr);

    void calcSum(int *arr);

private:
    Registro* registro;
};


#endif //LABPROG_CONTROLLER_H
