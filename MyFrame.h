//
// Created by francesco on 04/09/21.
//

#ifndef LABPROG_MYFRAME_H
#define LABPROG_MYFRAME_H

#include <wx/wx.h>
#include <wx/wxprec.h>
#include "Observer.h"
#include "Controller.h"

class MyFrame : public wxFrame, public Observer{
public:
    MyFrame(Registro* model, Controller* controller, wxWindow* parent=NULL, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
    virtual ~MyFrame();
    virtual void update() override;

private:
    Registro* registro;
    Controller* controller;

    wxStaticText* staticTextListaAtt;
    wxStaticText* staticTextGiornoAtt;
    wxTextCtrl* textCtrlOutput;
    wxTextCtrl* textCtrlInput;
    wxButton* showButton;

    virtual void onShowButtonClick(wxCommandEvent& event );
};


#endif //LABPROG_MYFRAME_H
