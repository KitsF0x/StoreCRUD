#include "ProductDatabaseSingleton.hpp"

ProductDatabaseSingleton* ProductDatabaseSingleton::m_instance{nullptr};

ProductDatabaseSingleton::ProductDatabaseSingleton() {}

ProductDatabaseSingleton* ProductDatabaseSingleton::getInstance() {
  if (ProductDatabaseSingleton::m_instance == nullptr) {
    ProductDatabaseSingleton::m_instance = new ProductDatabaseSingleton();
  }
  return m_instance;
}

void ProductDatabaseSingleton::loadDatabaseFromFile(
    const std::string& filename) {
  m_products = m_fileParser.getProductsFromFile(filename);
  ProductView productView;
  for (auto& el : m_products) {
    productView.printProductDetails(el);
  }
}