#include "MainFrame.hpp"
#include <wx/wx.h>


// Constructor de la clase
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);

    // Se puede hacer esto adicionalmente
    // Hace que el registro sea mas lineal de tal forma que no necesita de un click 
    // para registrarlo sino que conforme se mueve el mouse asi lo registra
    // contrarresta el parpadeo en la actualizacion del statusBar
    wxStatusBar* statusBar = CreateStatusBar();
    //CreateStatusBar();
    //panel->Bind(wxEVT_LEFT_DOWN, &MainFrame::OnMouseEvent, this);
    panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this); // esto le da la continuidad
}

// Funciones miembro privadas
void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
    wxPoint mousePos = evt.GetPosition();
    wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);
    wxLogStatus(message);
}