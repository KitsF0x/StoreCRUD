#pragma once
#include "ProductDatabase.hpp"

class ProductDatabaseView {
 public:
  void printProducts(ProductDatabase& database);
  void printProductById(ProductDatabase& database, unsigned long long id);
  void printDatabaseDetails(ProductDatabase& database);
};