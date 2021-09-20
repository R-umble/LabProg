//
// Created by francesco on 04/09/21.
//

#include "MyApp.h"
#include "MyFrame.h"

bool MyApp::OnInit()
{
    auto* registro = new Registro;
    auto* controller = new Controller(registro);

    auto *frame = new MyFrame(registro,controller,NULL, wxID_ANY, "laboratorio programmazione");
    frame->Show( true );
    return true;
}

#include "MyApp.h"