#pragma once

#include "ProductDatabase.hpp"
#include "ProductDatabaseView.hpp"

class ProductDatabaseController {
 private:
  ProductDatabase m_productDatabase;
  ProductDatabaseView m_productDatabaseView;

 public:
  ProductDatabaseController(const ProductDatabase& productDatabase,
                            const ProductDatabaseView& productDatabaseView);

  void loadProductDatabaseFromFile(const std::string& file);
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