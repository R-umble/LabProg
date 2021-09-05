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
    Registro(const string &name): ownerName(""){}

    virtual ~Registro() = default;

    void addAttivita(const Attivita &a){
        activities.push_back(a);
    }

    void removeAttivita(const Attivita &a){
        activities.remove(a);
    }

    list<Attivita> showActivitiesByDay(int giorno);

    //funzione di aiuto per output su schermo
    void feedback(int giorno);

private:
    list<Attivita> activities;
    string ownerName;
};


#endif //LABPROG_REGISTRO_H
