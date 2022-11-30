#include "ProductDatabaseView.hpp"

void ProductDatabaseView::printProducts(const ProductDatabase& database) {
  for (unsigned long long i = 0; i < database.getProducts().size(); i++) {
    printProductById(database, i);
  }
}

void ProductDatabaseView::printProductById(const ProductDatabase& database,
                                           unsigned long long id) {
  database.getProducts().at(id).printProductDetails();
}

void ProductDatabaseView::printDatabaseDetails(
    const ProductDatabase& database) {
  std::cout << "=====";
  std::cout << "NUmber of elements: " << database.getProducts().size()
            << std::endl;
  std::cout << "=====";
}