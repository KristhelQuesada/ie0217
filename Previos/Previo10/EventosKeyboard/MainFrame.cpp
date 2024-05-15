#include "MainFrame.hpp"
#include <wx/wx.h>


// Constructor de la clase
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    //wxButton* btn1 = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 100));
    //wxButton* btn2 = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 100));

    CreateStatusBar();
    

    panel->Bind(wxEVT_KEY_DOWN, &MainFrame::OnKeyEvent, this);
    //button->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this);
}

// Funciones miembro privadas
void MainFrame::OnKeyEvent(wxKeyEvent& evt) {
    wxChar keyChar = evt.GetUnicodeKey();

    // Cuando presionamos alt o control por ejemplo
    if (keyChar == WXK_NONE) {
        int keyCode = evt.GetKeyCode();
        wxLogStatus("Key Event %d", keyCode);

        // mientras que el else maneja cualquier caracter como uno
    } else {
        wxLogStatus("Else -> Key Event %c", keyChar);
    }
}