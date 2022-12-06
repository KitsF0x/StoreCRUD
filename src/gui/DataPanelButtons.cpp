#include "DataPanelButtons.hpp"

DataPanelButtons::DataPanelButtons(wxWindow* parent) : wxPanel{parent} {
  wxButton* add = new wxButton{this, ID_DATAPANEL_ADDPRODUCT, "Add product",
                               wxDefaultPosition, wxSize{150, 50}};
  wxButton* save = new wxButton{this, ID_DATAPANEL_SAVE, "Save",
                                wxDefaultPosition, wxSize{150, 50}};
  wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);
  sizer->Add(add, 1);
  sizer->Add(save, 1);
  SetSizerAndFit(sizer);
}