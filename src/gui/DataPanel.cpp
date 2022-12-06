#include "DataPanel.hpp"

DataPanel::DataPanel(wxWindow* parent)
    : wxPanel{parent, wxID_ANY, wxDefaultPosition, wxSize{1280, 720}} {
  SetBackgroundColour(wxColor(100, 100, 100));

  wxButton* add = new wxButton{this, ID_DATAPANEL_ADDPRODUCT, "Add product",
                               wxDefaultPosition, wxSize{150, 50}};
  DataGrid* grid = new DataGrid{this};
  wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
  sizer->Add(grid, 0, wxEXPAND);
  sizer->Add(add, 1);
  SetSizerAndFit(sizer);
}