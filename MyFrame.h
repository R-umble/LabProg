//
// Created by francesco on 04/09/21.
//

#ifndef LABPROG_MYFRAME_H
#define LABPROG_MYFRAME_H

#include <wx/wx.h>
#include <wx/wxprec.h>
#include "Observer.h"

class MyFrame : public wxFrame, public Observer{
public:
    MyFrame();

private:
    void OnHello(wxCommandEvent& event);
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);
};


#endif //LABPROG_MYFRAME_H
