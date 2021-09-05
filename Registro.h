//
// Created by francesco on 28/08/21.
//

#ifndef LABPROG_REGISTRO_H
#define LABPROG_REGISTRO_H

#include "list"
#include "Attivita.h"
#include "Subject.h"

using namespace std;

class Registro : public Subject{
public:
    Registro(const string &name = ""): ownerName(name){}
    virtual ~Registro() = default;

    int getData() const {
        return data;
    }
    void setData(const int i);

    void addAttivita(const Attivita &a){
        activities.push_back(a);
    }
    void removeAttivita(const Attivita &a){
        activities.remove(a);
    }
    list<Attivita> showActivitiesByDay(int giorno);

    //Metodo di aiuto per output su schermo
    string feedBack(int giorno);

    //gesione observer
    virtual void addObserver(Observer* o) override;
    virtual void removeObserver(Observer* o) override;
    virtual void notify() override;

private:
    std::list<Observer*> observers;
    list<Attivita> activities;
    string ownerName;
    int data = 0;
};


#endif //LABPROG_REGISTRO_H
