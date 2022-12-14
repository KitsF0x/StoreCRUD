#pragma once

#include <vector>

#include "../product/Product.hpp"
#include "../product/ProductController.hpp"
#include "../product/ProductView.hpp"
#include "FileParser.hpp"

class ProductDatabaseSingleton {
 private:
  std::vector<Product> m_products;
  static ProductDatabaseSingleton* m_instance;
  FileParser m_fileParser;
  std::string m_lastDatabaseFilename;

  ProductDatabaseSingleton();

 public:
  void operator=(const ProductDatabaseSingleton& other) = delete;
  ProductDatabaseSingleton(ProductDatabaseSingleton& other) = delete;
  static ProductDatabaseSingleton* getInstance();

  void loadDatabaseFromFile(const std::string& filename);
  void saveDatabaseToFile();
  void printAllProducts();

  void add(const Product& product);
  std::vector<Product> getProducts() const;
  Product getProductById(size_t id) const;
  void updateProductById(const Product& product, size_t id);
  void deleteProductById(size_t id);
};