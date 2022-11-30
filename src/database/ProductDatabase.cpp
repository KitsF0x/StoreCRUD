#include "ProductDatabase.hpp"

void ProductDatabase::setProducts(const std::vector<Product>& products) {
  m_products = products;
}

std::vector<Product> ProductDatabase::getProducts() const { return m_products; }