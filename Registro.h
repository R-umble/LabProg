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
    virtual ~Registro() = default;

    //gesione observer
    virtual void addObserver(Observer *o) override;

    virtual void removeObserver(Observer *o) override;

    virtual void notify() override;

    //get and set data
    void setData(int num){
        data = num;
    }

    int getData (){
        return data;
    }

    //get and set risposta
    void setRisposta(int num){
        risposta = num;
    }

    int getRisposta (){
        return risposta;
    }

private:
    list<Observer *> observers;
    int data;
    int risposta;
};

#endif //LABPROG_REGISTRO_H
