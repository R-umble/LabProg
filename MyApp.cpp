//
// Created by francesco on 04/09/21.
//
#include "MyApp.h"
#include "MyFrame.h"

bool MyApp::OnInit()
{
    Attivita studio("Sessione di analisi",13, 14, 25);
    Attivita cena("cena con amici",20, 22, 25);
    Attivita lunapark("giostre di sesto",21, 23, 14);

    Registro* registro = new Registro;
    registro->addAttivita(studio);
    registro->addAttivita(cena);
    registro->addAttivita(lunapark);
    Controller* controller = new Controller(registro);
    MyFrame *frame = new MyFrame(registro, controller, NULL, wxID_ANY, "Laboratorio Programmazione" );
    frame->Show( true );
    return true;
}
#include "MyApp.h"
