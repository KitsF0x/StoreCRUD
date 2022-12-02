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

std::vector<Product> ProductDatabaseSingleton::getProducts() const {
  return m_products;
}
Product ProductDatabaseSingleton::getProductById(unsigned long long id) const {
  return m_products.at(id);
}
void ProductDatabaseSingleton::updateProductById(const Product& product,
                                                 unsigned long long id) {
  m_products.at(id) = product;
}
void ProductDatabaseSingleton::deleteProductById(unsigned long long id) {
  m_products.erase(m_products.begin() + id);
}