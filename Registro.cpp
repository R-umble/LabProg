//
// Created by francesco on 28/08/21.
//

#include "Registro.h"
#include "iostream"

using namespace std;

list<Attivita> Registro::showActivitiesByDay(int giorno) {
    list<Attivita> activitybyday;
    for (auto itr: activities)
        if (itr.getGiorno() == giorno)
            activitybyday.push_back(itr);

    return activitybyday;
}

void Registro::feedback(int giorno) {
    list<Attivita> activitybyday;
    activitybyday = showActivitiesByDay(giorno);
    for (auto itr: activities)
        cout << itr.getDescrizione() << endl;
}
