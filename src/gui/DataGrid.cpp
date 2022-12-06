#include "DataGrid.hpp"

DataGrid::DataGrid(wxWindow* parent)
    : wxGrid{parent, 1, wxDefaultPosition, wxSize{1280, 500}} {
  updateGrid();
  initColsSizes();
}

void DataGrid::updateGrid() {
  std::vector<Product> products =
      ProductDatabaseSingleton::getInstance()->getProducts();

  CreateGrid(products.size(), 4);
  SetColLabelValue(0, "Name");
  SetColLabelValue(1, "Description");
  SetColLabelValue(2, "Price");
  SetColLabelValue(3, "Amount");

  for (size_t i = 0; i < products.size(); i++) {
    SetCellValue(i, 0, products.at(i).getName());
    SetCellValue(i, 1, products.at(i).getDescription());
    SetCellValue(i, 2, std::to_string(products.at(i).getPrice()));
    SetCellValue(i, 3, std::to_string(products.at(i).getAmount()));
  }
}

void DataGrid::processCellChange(wxGridEvent& event) {
  std::cout << event.GetCol() << " " << event.GetRow() << " "
            << event.GetString() << std::endl;
}

void DataGrid::initColsSizes() {
  SetColSize(0, 100);
  SetColSize(1, 300);
  SetColSize(2, 50);
  SetColSize(3, 50);
}

wxBEGIN_EVENT_TABLE(DataGrid, wxGrid)
    EVT_GRID_CELL_CHANGING(DataGrid::processCellChange)  //
    wxEND_EVENT_TABLE()                                  //