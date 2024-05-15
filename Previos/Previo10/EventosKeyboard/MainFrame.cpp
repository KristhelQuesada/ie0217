#include "MainFrame.hpp"
#include <wx/wx.h>


// Constructor de la clase
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    /*
        Indica que el panel va a recibir eventos de teclado incluso si no esta enfocando nada
    */
    wxPanel* panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxWANTS_CHARS);
    
    wxButton* btn1 = new wxButton(panel, wxID_ANY, "Button 1", wxPoint(300, 150), wxSize(200, 100));

    wxButton* btn2 = new wxButton(panel, wxID_ANY, "Button 2", wxPoint(300, 350), wxSize(200, 100));

    /*
    wxEVT_CHAR_HOOK permite detectar la entrada independientemente de que
    estemos seleccionando
    */
    panel->Bind(wxEVT_CHAR_HOOK, &MainFrame::OnKeyEvent, this);
    
    
    CreateStatusBar();
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