#pragma once
#include <fstream>
#include <sstream>
#include <vector>

#include "../product/ProductController.hpp"

class FileParser {
 private:
  Product getProductFromString(const std::string& str);

 public:
  std::vector<Product> getProductsFromFile(const std::string& filename);
};