#pragma once

#include <vector>

#include "../product/ProductController.hpp"

class ProductDatabase {
 private:
  std::vector<ProductController> m_products;

 public:
  void setProductNameById(unsigned long long id, const std::string& name);
  void setProductDescriptionById(unsigned long long id,
                                 const std::string& description);
  void setProductPriceById(unsigned long long id, double price);
  void setProductAmountById(unsigned long long id, unsigned long long amount);

  std::string getProductNameById(unsigned long long id);
  std::string getProductDescriptionById(unsigned long long id);
  double getProductPriceById(unsigned long long id);
  unsigned long long getProductAmountById(unsigned long long id);
};