#pragma once

#include <vector>

#include "../product/ProductController.hpp"

class ProductDatabase {
 private:
  std::vector<ProductController> m_products;

 public:
  void setProducts(const std::vector<ProductController>& products);
  std::vector<ProductController> getProducts() const;
};