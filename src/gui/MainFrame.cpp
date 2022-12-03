#include "MainFrame.hpp"

MainFrame::MainFrame()
    : wxFrame{nullptr, wxID_ANY, "StoreCrud", wxPoint{100, 100},
              wxSize{1280, 720}} {
  DataPanel* dataPanel = new DataPanel{this};
  wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
  sizer->Add(dataPanel, 0);
  SetSizerAndFit(sizer);
}