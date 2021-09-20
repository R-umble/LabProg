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

    void calcMax(vector<int> vect);

    void calcMin(vector<int> vect);

    void calcMean(vector<int> vect);

    void calcSum(vector<int> vect);

private:
    Registro* registro;
};


#endif //LABPROG_CONTROLLER_H
