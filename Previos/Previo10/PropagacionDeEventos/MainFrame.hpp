#include <wx/wx.h>

class MainFrame : public wxFrame {
    public:
        MainFrame(const wxString& title);

    private:
        void OnAnyButtonClicked(wxCommandEvent& evt);

        // Propagacion de Eventos Diapositiva 3
        void OnButton1Clicked(wxCommandEvent& evt);
        void OnButton2Clicked(wxCommandEvent& evt);

        // Propagacion de eventos diapositiva 4
        void OnClose(wxCloseEvent& evt);
};