#pragma once

#include "Product.hpp"
#include "ProductView.hpp"

class ProductController {
 private:
  Product m_product;
  ProductView m_productView;

 public:
  ProductController(Product& product, ProductView& productView);

  void setProductName(const std::string& name);
  void setProductDescription(const std::string& description);
  void setProductPrice(double price);
  void setProductAmount(unsigned long long amount);

  std::string getProductName() const;
  std::string getProductDescription() const;
  double getProductPrice() const;
  unsigned long long getProductAmount() const;

  void printProductDetails();
};