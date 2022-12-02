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
}

void ProductDatabaseSingleton::saveDatabaseToFile(const std::string& filename) {
  m_fileParser.saveProductsToFile(m_products, filename);
}

void ProductDatabaseSingleton::printAllProducts() {
  ProductView productView;
  for (unsigned long long i = 0; i < m_products.size(); i++) {
    ProductController productController{m_products.at(i), productView};
    productController.printProductDetails();
  }
}