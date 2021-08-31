#include <iostream>
#include "Attivita.h"
#include "Registro.h"

int main() {
    Attivita palestra("palestra",16,18,24);
    Attivita studio("studio",10,12,24);
    Attivita serata("serata con amici",22,23,30);
    Registro francesco;
    francesco.addAttivita(palestra);
    francesco.addAttivita(studio);
    francesco.addAttivita(serata);

    francesco.feedback(24);
}
