#pragma once

#include <vector>

#include "../product/ProductController.hpp"

class ProductDatabase {
 private:
  std::vector<ProductController> m_products;

 public:
  ProductController& getProductControllerById(unsigned long long id);
  unsigned long long getNumberOfProductsInDb();

  void add(const ProductController& productController);
};