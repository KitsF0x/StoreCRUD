#pragma once

#include <wx/grid.h>
#include <wx/wx.h>

#include <vector>

#include "../database/ProductDatabaseSingleton.hpp"

class DataGrid : public wxGrid {
 private:
  void updateGrid();
  void processCellChange(wxGridEvent& event);
  void initColsSizes();

 public:
  DataGrid(wxWindow* parent);

  wxDECLARE_EVENT_TABLE();
};