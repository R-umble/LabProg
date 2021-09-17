//
// Created by francesco on 04/09/21.
//

#ifndef LABPROG_MYFRAME_H
#define LABPROG_MYFRAME_H
///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Aug 21 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/spinctrl.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>
#include "Controller.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame
///////////////////////////////////////////////////////////////////////////////
class MyFrame : public wxFrame, public Observer {
private:
    Registro* registro;
    Controller* controller;
    void onClickMaxButton(wxCommandEvent &event);
    void onClickMinButton(wxCommandEvent &event);
    void onClickMeanButton(wxCommandEvent &event);
    void onClickSumButton(wxCommandEvent &event);

protected:
    wxStaticText *m_staticText1;
    wxSpinCtrl *m_spinCtrl1;
    wxSpinCtrl *m_spinCtrl2;
    wxSpinCtrl *m_spinCtrl3;
    wxSpinCtrl *m_spinCtrl4;
    wxSpinCtrl *m_spinCtrl5;
    wxSpinCtrl *m_spinCtrl6;
    wxSpinCtrl *m_spinCtrl7;
    wxSpinCtrl *m_spinCtrl8;
    wxSpinCtrl *m_spinCtrl9;
    wxStaticText *m_staticText2;
    wxTextCtrl *m_textCtrlRis;
    wxButton *m_buttonMax;
    wxButton *m_buttonMin;
    wxButton *m_buttonMean;
    wxButton *m_buttonSum;

public:

    MyFrame(Registro* aregistro, Controller* controller, wxWindow *parent = nullptr, wxWindowID id = wxID_ANY, const wxString &title = wxEmptyString, const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(838, 342), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

    virtual ~MyFrame();

    virtual void update() override;

    int* getvalue(int arr[]);
};

#endif //LABPROG_MYFRAME_H