//
// Created by francesco on 04/09/21.
//
///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.9.0 Aug 21 2021)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include <vector>
#include "MyFrame.h"

///////////////////////////////////////////////////////////////////////////

MyFrame::MyFrame(Registro *aregistro, Controller *acontroller, wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style) : wxFrame(parent, id, title, pos, size, style) {
    this->registro = aregistro;
    this->registro->addObserver(this);
    this->controller = acontroller;

    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer *bSizerAll;
    bSizerAll = new wxBoxSizer(wxHORIZONTAL);

    wxBoxSizer *bSizerLeft;
    bSizerLeft = new wxBoxSizer(wxVERTICAL);

    m_staticText1 = new wxStaticText(this, wxID_ANY, wxT("Tabella di calcolo"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText1->Wrap(-1);
    bSizerLeft->Add(m_staticText1, 0, wxALL, 5);

    wxGridSizer *gSizerTabella;
    gSizerTabella = new wxGridSizer(3, 3, 0, 0);

    m_spinCtrl1 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 1);
    gSizerTabella->Add(m_spinCtrl1, 1, wxALL | wxEXPAND, 5);

    m_spinCtrl2 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 2);
    gSizerTabella->Add(m_spinCtrl2, 1, wxALL | wxEXPAND, 5);

    m_spinCtrl3 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 3);
    gSizerTabella->Add(m_spinCtrl3, 1, wxALL | wxEXPAND, 5);

    m_spinCtrl4 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 4);
    gSizerTabella->Add(m_spinCtrl4, 1, wxALL | wxEXPAND, 5);

    m_spinCtrl5 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 5);
    gSizerTabella->Add(m_spinCtrl5, 1, wxALL | wxEXPAND, 5);

    m_spinCtrl6 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 6);
    gSizerTabella->Add(m_spinCtrl6, 1, wxALL | wxEXPAND, 5);

    m_spinCtrl7 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 7);
    gSizerTabella->Add(m_spinCtrl7, 1, wxALL | wxEXPAND, 5);

    m_spinCtrl8 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 8);
    gSizerTabella->Add(m_spinCtrl8, 1, wxALL | wxEXPAND, 5);

    m_spinCtrl9 = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 9);
    gSizerTabella->Add(m_spinCtrl9, 1, wxALL | wxEXPAND, 5);


    bSizerLeft->Add(gSizerTabella, 1, wxEXPAND, 5);


    bSizerAll->Add(bSizerLeft, 1, wxEXPAND, 5);

    wxBoxSizer *bSizerRight;
    bSizerRight = new wxBoxSizer(wxVERTICAL);

    m_staticText2 = new wxStaticText(this, wxID_ANY, wxT("Risultato"), wxDefaultPosition, wxDefaultSize, 0);
    m_staticText2->Wrap(-1);
    bSizerRight->Add(m_staticText2, 0, wxALL | wxEXPAND, 5);

    m_textCtrlRis = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    bSizerRight->Add(m_textCtrlRis, 0, wxALL | wxEXPAND, 5);

    m_buttonMax = new wxButton(this, wxID_ANY, wxT("Max"), wxDefaultPosition, wxDefaultSize, 0);
    bSizerRight->Add(m_buttonMax, 1, wxALL | wxEXPAND, 5);

    m_buttonMin = new wxButton(this, wxID_ANY, wxT("Min"), wxDefaultPosition, wxDefaultSize, 0);
    bSizerRight->Add(m_buttonMin, 1, wxALL | wxEXPAND, 5);

    m_buttonMean = new wxButton(this, wxID_ANY, wxT("Mean"), wxDefaultPosition, wxDefaultSize, 0);
    bSizerRight->Add(m_buttonMean, 1, wxALL | wxEXPAND, 5);

    m_buttonSum = new wxButton(this, wxID_ANY, wxT("Sum"), wxDefaultPosition, wxDefaultSize, 0);
    bSizerRight->Add(m_buttonSum, 1, wxALL | wxEXPAND, 5);


    bSizerAll->Add(bSizerRight, 1, wxALIGN_CENTER_VERTICAL | wxEXPAND, 1);


    this->SetSizer(bSizerAll);
    this->Layout();

    this->Centre(wxBOTH);

    m_buttonMax->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onClickMaxButton), NULL, this);
    m_buttonMin->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onClickMinButton), NULL, this);
    m_buttonMean->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onClickMeanButton), NULL, this);
    m_buttonSum->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onClickSumButton), NULL, this);
}

MyFrame::~MyFrame() {
    m_buttonMax->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onClickMaxButton), NULL, this);
    m_buttonMin->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onClickMinButton), NULL, this);
    m_buttonMean->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onClickMeanButton), NULL, this);
    m_buttonSum->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onClickSumButton), NULL, this);
    registro->removeObserver(this);
}

void MyFrame::onClickMaxButton(wxCommandEvent &event) {
    vector<int> vect;
    vect = getvalue(vect);
    controller->calcMax(vect);
}

void MyFrame::onClickMinButton(wxCommandEvent &event) {
    vector<int> vect;
    getvalue(vect);
    controller->calcMin(vect);
}

void MyFrame::onClickMeanButton(wxCommandEvent &event) {
    vector<int> vect;
    getvalue(vect);
    controller->calcMean(vect);
}

void MyFrame::onClickSumButton(wxCommandEvent &event) {
    vector<int> vect;
    getvalue(vect);
    controller->calcSum(vect);
}

void MyFrame::update() {
    int value = 0;
    value = registro->getData();
    wxString stringnumber = wxString::Format(wxT("%d"), (int) value);
    m_textCtrlRis->ChangeValue(stringnumber);
}

vector<int> MyFrame::getvalue(vector<int> vect) {
    vect.push_back(m_spinCtrl1->GetValue());
    vect.push_back(m_spinCtrl2->GetValue());
    vect.push_back(m_spinCtrl3->GetValue());
    vect.push_back(m_spinCtrl4->GetValue());
    vect.push_back(m_spinCtrl5->GetValue());
    vect.push_back(m_spinCtrl6->GetValue());
    vect.push_back(m_spinCtrl7->GetValue());
    vect.push_back(m_spinCtrl8->GetValue());
    vect.push_back(m_spinCtrl9->GetValue());
    return vect;
}
