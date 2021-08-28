//
// Created by francesco on 28/08/21.
//

#ifndef LABPROG_ATTIVITA_H
#define LABPROG_ATTIVITA_H

#include "string"

using namespace std;


class Attivita {
public:
    Attivita(string des, int in, int fin, int g) : descrizione(des), inizio(in), fine(fin), giorno(g);

    int getGiorno() const;

    void setGiorno(int giorno);

    int getInizio() const;

    void setInizio(int inizio);

    int getFine() const;

    void setFine(int fine);

    const string &getDescrizione() const;

    void setDescrizione(const string &descrizione);

    bool operator==(const Attivita &a);


private:
    int giorno, inizio, fine;
    string descrizione;

};


#endif //LABPROG_ATTIVITA_H
