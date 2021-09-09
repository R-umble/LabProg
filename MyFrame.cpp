//
// Created by francesco on 04/09/21.
//

#include "MyFrame.h"
#include <wx/spinctrl.h>

enum {
    ID_Hello = 1
};

MyFrame::MyFrame(Registro *model, Controller *controller, wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size, long style) : wxFrame(parent, id, title, pos, size, style) {
    this->registro = model;
    this->registro->addObserver(this);
    this->controller = controller;

    this->SetSizeHints(wxDefaultSize, wxDefaultSize);

    //BoxSizer Output
    wxSizer *frameSizerOutput;
    frameSizerOutput = new wxBoxSizer(wxHORIZONTAL);

    staticTextListaAtt = new wxStaticText(this, wxID_ANY, wxT("lista attività"), wxDefaultPosition, wxDefaultSize, 0);
    staticTextListaAtt->Wrap(-1);
    frameSizerOutput->Add(staticTextListaAtt, 0, wxLEFT | wxRIGHT, 17);

    textCtrlOutput = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    frameSizerOutput->Add(textCtrlOutput, 0, wxLEFT | wxRIGHT, 10);

    //BoxSizer Input
    wxSizer *frameSizerInput;
    frameSizerInput = new wxBoxSizer(wxHORIZONTAL);

    staticTextGiornoAtt = new wxStaticText(this, wxID_ANY, wxT("giorno attività"), wxDefaultPosition, wxDefaultSize, 0);
    staticTextGiornoAtt->Wrap(-1);
    frameSizerInput->Add(staticTextGiornoAtt, 0, wxLEFT | wxRIGHT, 10);

    textCtrlInput = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
    frameSizerInput->Add(textCtrlInput, 0, wxLEFT | wxRIGHT, 10);

    //BoxSizer Bottone
    wxSizer *buttonSizer;
    buttonSizer = new wxBoxSizer(wxVERTICAL);

    showButton = new wxButton(this, wxID_ANY, wxT("cerca"), wxDefaultPosition, wxDefaultSize, 0);
    buttonSizer->Add(showButton, 0, wxALIGN_CENTER | wxUP | wxRIGHT, 10);

    //Nidificazione Boxsizer
    wxSizer *inputOutputSizer;
    inputOutputSizer = new wxBoxSizer(wxVERTICAL);
    inputOutputSizer->Add(frameSizerInput, 1, wxUP, 10);
    inputOutputSizer->Add(frameSizerOutput, 1, wxUP, 10);

    wxBoxSizer *allSizer;
    allSizer = new wxBoxSizer(wxHORIZONTAL);
    allSizer->Add(inputOutputSizer, 1, wxALL, 5);
    allSizer->Add(buttonSizer, 1, wxALL, 5);


    this->SetSizer(allSizer);
    this->Layout();

    this->Centre(wxBOTH);

    // Connect Events
    showButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onShowButtonClick), NULL,
                        this);

}

MyFrame::~MyFrame() noexcept {
    // Disconnect Events
    showButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame::onShowButtonClick),
                           NULL,
                           this);

    // unsubscribe from registro
    registro->removeObserver(this);
}

void MyFrame::onShowButtonClick(wxCommandEvent &event) {
    controller->show();
}

void MyFrame::update() {
    int giorno;
    giorno = wxAtoi(textCtrlInput->GetValue());
    wxString value = registro->feedBack(giorno);
    //wxString wxIntString = wxString::Format(wxT("%i"), value);
    //textCtrlOutput->ChangeValue(wxIntString);
    textCtrlOutput->ChangeValue(value);
}