//
// Created by francesco on 28/08/21.
//

#include <wx/string.h>
#include "Registro.h"
#include "iostream"
#include "string"

using namespace std;

list<Attivita> Registro::showActivitiesByDay(int giorno) {
    list<Attivita> activitybyday;
    for (auto itr: activities)
        if (itr.getGiorno() == giorno)
            activitybyday.push_back(itr);

    return activitybyday;
}

wxString Registro::feedBack(int giorno) {
    list<Attivita> activitybyday;
    string lista;
    activitybyday = showActivitiesByDay(giorno);
    for (auto itr: activitybyday) {
        lista += itr.getDescrizione() + "\n";
    }
    wxString mystring(lista);
    return mystring;
}

void Registro::notify() {
    for (Observer* observer : observers)
        observer->update();
}

void Registro::setData(const int i) {
    data = i;
    notify();
}

void Registro::addObserver(Observer* o) {
    observers.push_back(o);
}

void Registro::removeObserver(Observer* o) {
    observers.remove(o);
}