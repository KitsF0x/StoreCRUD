#include "Database.hpp"

void Database::setProducts(const std::vector<Product>& products) {
  m_products = products;
}

std::vector<Product> Database::getProducts() const { return m_products; }