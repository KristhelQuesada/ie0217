#include "MainFrame.hpp"
#include <wx/wx.h>

enum IDs {
    BUTTON_ID = 2,
    SLIDER_ID = 3,
    TEXT_ID = 4
};


// Constructor de la clase
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);

    wxButton* button1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 275), wxSize(200, 50));

    // Se agrega como parte de la diapo=itiva 2 de propagacion de eventos
    wxButton* button2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 50));

    // button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
    // panel->Bind(wxEVT_SLIDER, &MainFrame::OnButtonClicked, this);
    this->Bind(wxEVT_CLOSE_WINDOW, &MainFrame::OnClose, this);
    this->Bind(wxEVT_BUTTON, &MainFrame::OnAnyButtonClicked, this);
    button1->Bind(wxEVT_BUTTON, &MainFrame::OnButton1Clicked, this);
    button2->Bind(wxEVT_BUTTON, &MainFrame::OnButton2Clicked, this);
    

    CreateStatusBar();
}

// Funciones miembro privadas
void MainFrame::OnAnyButtonClicked(wxCommandEvent& evt) {
    wxLogStatus("Button Clicked");
}

void MainFrame::OnButton1Clicked(wxCommandEvent& evt) {
    wxLogStatus("Button 1 Clicked");
    evt.Skip();  // continue la propagacion del evento
}

void MainFrame::OnButton2Clicked(wxCommandEvent& evt) {
    wxLogStatus("Button 2 Clicked");
}

void MainFrame::OnClose(wxCloseEvent& evt) {
    wxLogStatus("Frame Close");
    evt.Skip(); // sin esto no cerraria la ventaja
}