#pragma once
#include "ProductDatabase.hpp"

class ProductDatabaseView {
 public:
  void printProducts(const ProductDatabase& database);
  void printProductById(const ProductDatabase& database, unsigned long long id);
  void printDatabaseDetails(const ProductDatabase& database);
};