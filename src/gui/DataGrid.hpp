#pragma once

#include <wx/grid.h>
#include <wx/wx.h>

#include <vector>

#include "../database/ProductDatabaseSingleton.hpp"

class DataGrid : public wxGrid {
 private:
  void updateGrid();

 public:
  DataGrid(wxWindow* parent);
};