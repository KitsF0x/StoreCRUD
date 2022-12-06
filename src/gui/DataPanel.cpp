#include "DataPanel.hpp"

DataPanel::DataPanel(wxWindow* parent) : wxPanel{parent} {
  SetBackgroundColour(wxColor(100, 100, 100));
  DataGrid* dataGrid = new DataGrid{this};
}