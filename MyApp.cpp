//
// Created by francesco on 04/09/21.
//
#include "MyApp.h"
#include "MyFrame.h"

bool MyApp::OnInit()
{
    Registro* registro = new Registro;
    Controller* controller = new Controller(registro);
    MyFrame *frame = new MyFrame(registro, controller, NULL, wxID_ANY, "MVC Example" );
    frame->Show( true );
    return true;
}
#include "MyApp.h"
