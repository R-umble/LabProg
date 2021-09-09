//
// Created by francesco on 04/09/21.
//
#include "MyApp.h"
#include "MyFrame.h"

bool MyApp::OnInit()
{
    Attivita studio("Studio",13, 14, 20);
    Attivita palestra("palestra",17, 19, 20);
    Attivita giostra("bruuum",12, 13, 19);

    Registro* registro = new Registro;
    registro->addAttivita(studio);
    registro->addAttivita(palestra);
    registro->addAttivita(giostra);
    Controller* controller = new Controller(registro);
    MyFrame *frame = new MyFrame(registro, controller, NULL, wxID_ANY, "Laboratorio Programmazione" );
    frame->Show( true );
    return true;
}
#include "MyApp.h"
