#pragma once

#include <wx/grid.h>
#include <wx/wx.h>

#include <vector>

#include "../IDs.hpp"
#include "DataGrid.hpp"

class DataPanel : public wxPanel {
 public:
  DataPanel(wxWindow* parent);
};