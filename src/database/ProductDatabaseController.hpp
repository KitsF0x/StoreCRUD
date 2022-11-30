#pragma once

#include "ProductDatabase.hpp"
#include "ProductDatabaseView.hpp"

class ProductDatabaseController {
 private:
  ProductDatabase m_productDatabase;
  ProductDatabaseView m_productDatabaseView;

 public:
  ProductDatabaseController(const ProductDatabase& productDatabase,
                            const ProductDatabaseView& productDatabaseView);

  ProductController& getProductController(unsigned long long id);
  void loadProductDatabaseFromFile(const std::string& file);
  void printProductDetails(unsigned long long id);
};