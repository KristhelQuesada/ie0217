#include "MainFrame.hpp"
#include <wx/wx.h>


// Constructor de la clase
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title) {
    wxPanel* panel = new wxPanel(this);
    wxButton* button = new wxButton(panel, wxID_ANY, "Button", wxPoint(300, 250), wxSize(200, 100));

    wxStatusBar* statusBar = CreateStatusBar();
    statusBar->SetDoubleBuffered(true);


    panel->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this); // esto le da la continuidad
    button->Bind(wxEVT_MOTION, &MainFrame::OnMouseEvent, this); // esto le da la continuidad
}

// Funciones miembro privadas
void MainFrame::OnMouseEvent(wxMouseEvent& evt) {
    // Cuando solo se implementa la linea 22 y no la 23 hay una diferencia en los valores de
    // posicion como de 100 unidades
    //wxPoint mousePos = evt.GetPosition();        // registra el boton como una ventana independiente
    wxPoint mousePos = wxGetMousePosition();   // posicion absoluta basado en la pantalla
    mousePos = this->ScreenToClient(mousePos); // posicion absoluta basado en el frame
    wxString message = wxString::Format("Mouse Event Detected! (x=%d y=%d)", mousePos.x, mousePos.y);
    wxLogStatus(message);
}