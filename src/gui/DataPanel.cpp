#include "DataPanel.hpp"

DataPanel::DataPanel(wxWindow* parent)
    : wxPanel{parent, wxID_ANY, wxDefaultPosition, wxSize{1280, 720}} {
  SetBackgroundColour(wxColor(100, 100, 100));

  DataGrid* grid = new DataGrid{this};
  wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
  sizer->Add(grid, 0, wxEXPAND);
  SetSizerAndFit(sizer);
}