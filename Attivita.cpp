//
// Created by francesco on 28/08/21.
//

#include "Attivita.h"

int Attivita::getGiorno() const {
    return giorno;
}

void Attivita::setGiorno(int giorno) {
    Attivita::giorno = giorno;
}

int Attivita::getInizio() const {
    return inizio;
}

void Attivita::setInizio(int inizio) {
    Attivita::inizio = inizio;
}

int Attivita::getFine() const {
    return fine;
}

void Attivita::setFine(int file) {
    Attivita::fine = file;
}

const string &Attivita::getDescrizione() const {
    return descrizione;
}

void Attivita::setDescrizione(const string &descrizione) {
    Attivita::descrizione = descrizione;
}

bool Attivita::operator==(const Attivita &a) {
    if (a.descrizione == descrizione)
        return true;
    return false;
}
