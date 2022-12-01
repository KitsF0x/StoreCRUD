#include "FileParser.hpp"

std::vector<Product> FileParser::getProductsFromFile(
    const std::string& filename) {
  std::vector<Product> toReturn;
  std::fstream file{filename, std::ios::in};
  std::string temp;
  unsigned long long id{0};
  while (std::getline(file, temp)) {
    toReturn.push_back(getProductFromString(temp));
  }
  return toReturn;
}

Product FileParser::getProductFromString(const std::string& str) {
  Product product;
  std::stringstream ss{str};
  std::vector<std::string> tokens;
  while (ss.good()) {
    std::string substr;
    std::getline(ss, substr, '?');
    tokens.push_back(substr);
  }
  product.setId(std::stoull(tokens.at(0).c_str()));
  product.setName(tokens.at(1));
  product.setDescription(tokens.at(2));
  product.setPrice(std::stod(tokens.at(3).c_str()));
  product.setAmount(std::stoull(tokens.at(4).c_str()));
  return product;
}