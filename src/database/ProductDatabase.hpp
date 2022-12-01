#pragma once

#include <vector>

#include "../product/ProductController.hpp"

class ProductDatabase {
 private:
  std::vector<Product> m_products;

 public:
  Product& getProductControllerById(unsigned long long id);
  unsigned long long getNumberOfProductsInDb();

  void add(const Product& productController);
};