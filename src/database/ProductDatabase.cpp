#include "ProductDatabase.hpp"

void ProductDatabase::setProducts(
    const std::vector<ProductController>& products) {
  m_products = products;
}

std::vector<ProductController> ProductDatabase::getProducts() const {
  return m_products;
}