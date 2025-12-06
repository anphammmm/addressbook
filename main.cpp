#include <wx/wx.h>
#include "MainFrame.h"

class MyApp : public wxApp {
public:
    bool OnInit() override {
        MainFrame* frame = new MainFrame("Address Book");
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
