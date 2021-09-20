//
// Created by francesco on 28/08/21.
//

#ifndef LABPROG_REGISTRO_H
#define LABPROG_REGISTRO_H

#include "list"
#include "Subject.h"
#include <wx/wxprec.h>

using namespace std;

class Registro : public Subject {
public:
    //gesione observer
    void addObserver(Observer *o) override;
    void removeObserver(Observer *o) override;
    void notify() override;

    //get and set data
    void setData(const int num);
    int getData () const;

private:
    int data = 0;
    list<Observer *> observers;
};

#endif //LABPROG_REGISTRO_H
