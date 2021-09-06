//
// Created by francesco on 04/09/21.
//

#include "MyFrame.h"
#include <wx/spinctrl.h>

enum {
    ID_Hello = 1
};

MyFrame::MyFrame(Registro *model, Controller *controller, wxWindow *parent, wxWindowID id, const wxString &title,const wxPoint &pos, const wxSize &size, long style): wxFrame(parent, id, title, pos, size, style){
    this->registro = model;
    this->registro->addObserver(this);
    this->controller = controller;

    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    wxBoxSizer *frameSizer;
    frameSizer = new wxBoxSizer(wxHORIZONTAL);

    wxBoxSizer *frameSizerInput;
    frameSizerInput = new wxBoxSizer(wxVERTICAL);

    staticText = new wxStaticText(this, wxID_ANY, wxT("lista attività"), wxDefaultPosition, wxDefaultSize, 0);
    staticText->Wrap(-1);
    frameSizer->Add(staticText, 0, wxALL, 5);

    textCtrl = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    frameSizer->Add(textCtrl, 0, wxALL, 5);

    textCtrlInput = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    frameSizerInput->Add(textCtrlInput, 0, wxALL, 5);

    wxBoxSizer *buttonSizer;
    buttonSizer = new wxBoxSizer(wxVERTICAL);

    incrementButton = new wxButton(this, wxID_ANY, wxT("Increment"), wxDefaultPosition, wxDefaultSize, 0);
    buttonSizer->Add(incrementButton, 0, wxALL, 5);

    decrementButton = new wxButton(this, wxID_ANY, wxT("Decrement"), wxDefaultPosition, wxDefaultSize, 0);
    buttonSizer->Add(decrementButton, 0, wxALL, 5);

    frameSizer->Add(buttonSizer, 1, wxEXPAND, 5);

    this->SetSizer(frameSizer);
    this->Layout();

    this->Centre(wxBOTH);

    // Connect Events
    incrementButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onIncrementButtonClick), NULL,
                             this);
    decrementButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onDecrementButtonClick), NULL,
                             this);

    update();
}

MyFrame::~MyFrame() noexcept {
    // Disconnect Events
    incrementButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onIncrementButtonClick),
                                NULL,
                                this);
    decrementButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onDecrementButtonClick),
                                NULL,
                                this);
    // unsubscribe from registro
    registro->removeObserver(this);
}

void MyFrame::onIncrementButtonClick(wxCommandEvent &event) {
    controller->increment();
}

void MyFrame::onDecrementButtonClick(wxCommandEvent &event) {
    controller->decrement();
}

void MyFrame::update() {
    int giorno;
    giorno = wxAtoi(textCtrlInput->GetValue());
    wxString value = registro->feedBack(giorno);
    //wxString wxIntString = wxString::Format(wxT("%i"), value);
    //textCtrl->ChangeValue(wxIntString);
    textCtrl->ChangeValue(value);
}