#pragma once
#include <fstream>
#include <sstream>
#include <vector>

#include "../product/Product.hpp"

class FileParser {
 private:
  Product getProductFromString(const std::string& str);

 public:
  std::vector<Product> getProductsFromFile(const std::string& filename);
};