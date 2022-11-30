#pragma once

#include <fstream>

#include "ProductDatabase.hpp"
#include "ProductDatabaseView.hpp"

class ProductDatabaseController {
 private:
  ProductDatabase m_productDatabase;
  ProductDatabaseView m_productDatabaseView;

 public:
  ProductDatabaseController(const ProductDatabase& productDatabase,
                            const ProductDatabaseView& productDatabaseView);

  ProductController& getProductControllerById(unsigned long long id);
  void add(const ProductController& productController);
  void loadProductDatabaseFromFile(const std::string& filename);
  void printProductDetails(unsigned long long id);
};