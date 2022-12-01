#pragma once

#include <vector>

#include "../product/Product.hpp"
#include "../product/ProductView.hpp"
#include "FileParser.hpp"

class ProductDatabaseSingleton {
 private:
  std::vector<Product> m_products;
  static ProductDatabaseSingleton* m_instance;
  FileParser m_fileParser;
  ProductDatabaseSingleton();

 public:
  void operator=(const ProductDatabaseSingleton& other) = delete;
  ProductDatabaseSingleton(ProductDatabaseSingleton& other) = delete;
  static ProductDatabaseSingleton* getInstance();

  void loadDatabaseFromFile(const std::string& filename);
  void saveDatabaseToFile(const std::string& filename);
};