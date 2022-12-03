#include "DataPanel.hpp"

DataPanel::DataPanel(wxWindow* parent)
    : wxPanel{parent, wxID_ANY, wxDefaultPosition, wxSize{1280, 720}} {
  SetBackgroundColour(wxColor(100, 100, 100));
}