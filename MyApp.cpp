//
// Created by francesco on 04/09/21.
//
#include "MyApp.h"
#include "MyFrame.h"

bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame();
    frame->Show(true);
    return true;
}
#include "MyApp.h"
