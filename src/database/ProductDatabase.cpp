#include "ProductDatabase.hpp"

ProductController& ProductDatabase::getProductControllerById(
    unsigned long long id) {
  return m_products.at(id);
}

unsigned long long ProductDatabase::getNumberOfProductsInDb() {
  return m_products.size();
}

void ProductDatabase::add(const ProductController& productController) {
  m_products.push_back(productController);
}