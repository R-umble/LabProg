//
// Created by francesco on 28/08/21.
//

#include "Registro.h"

list<Attivita> Registro::showActivitiesByDay(int giorno) {
    list<Attivita> activitybyday;
    for(auto itr:activities)
        if(itr.getGiorno()==giorno)
            activitybyday.push_back(itr);

    return activitybyday;
}
