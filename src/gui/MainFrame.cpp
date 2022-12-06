#include "MainFrame.hpp"

MainFrame::MainFrame()
    : wxFrame{nullptr, wxID_ANY, "StoreCrud", wxPoint{100, 100},
              wxSize{1280, 720}} {
  DataPanel* dataPanel = new DataPanel{this};
  DataPanelButtons* dataPanelButtons = new DataPanelButtons{this};
  wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
  sizer->Add(dataPanel, 0);
  sizer->Add(dataPanelButtons, 1);
  SetSizerAndFit(sizer);
}