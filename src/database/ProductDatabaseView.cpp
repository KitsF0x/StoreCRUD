#include "ProductDatabaseView.hpp"

void ProductDatabaseView::printProducts(ProductDatabase& database) {
  for (unsigned long long i = 0; i < database.getNumberOfProductsInDb(); i++) {
    printProductById(database, i);
  }
}

void ProductDatabaseView::printProductById(ProductDatabase& database,
                                           unsigned long long id) {
  database.getProductControllerById(id).printProductDetails();
}

void ProductDatabaseView::printDatabaseDetails(ProductDatabase& database) {
  std::cout << "=====";
  std::cout << "Number of elements: " << database.getNumberOfProductsInDb()
            << std::endl;
  std::cout << "=====";
}