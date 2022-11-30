#include "ProductDatabase.hpp"

// Setters

void ProductDatabase::setProductNameById(unsigned long long id,
                                         const std::string& name) {
  m_products.at(id).setProductName(name);
}
void ProductDatabase::setProductDescriptionById(
    unsigned long long id, const std::string& description) {
  m_products.at(id).setProductDescription(description);
}

void ProductDatabase::setProductPriceById(unsigned long long id, double price) {
  m_products.at(id).setProductPrice(price);
}
void ProductDatabase::setProductAmountById(unsigned long long id,
                                           unsigned long long amount) {
  m_products.at(id).setProductAmount(amount);
}

// Getters

std::string ProductDatabase::getProductNameById(unsigned long long id) {
  return m_products.at(id).getProductName();
}

std::string ProductDatabase::getProductDescriptionById(unsigned long long id) {
  return m_products.at(id).getProductDescription();
}
double ProductDatabase::getProductPriceById(unsigned long long id) {
  return m_products.at(id).getProductPrice();
}
unsigned long long ProductDatabase::getProductAmountById(
    unsigned long long id) {
  return m_products.at(id).getProductAmount();
}
