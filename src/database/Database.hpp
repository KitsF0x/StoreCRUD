#pragma once

#include <vector>

#include "../product/Product.hpp"

class Database {
 private:
  std::vector<Product> m_products;

 public:
  void setProducts(const std::vector<Product>& products);
  std::vector<Product> getProducts() const;
};