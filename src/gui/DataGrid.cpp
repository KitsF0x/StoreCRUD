#include "DataGrid.hpp"

DataGrid::DataGrid(wxWindow* parent)
    : wxGrid{parent, wxID_ANY, wxDefaultPosition, wxSize{1280, 500}} {
  updateGrid();
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