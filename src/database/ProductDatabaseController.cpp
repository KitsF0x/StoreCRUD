#include "ProductDatabaseController.hpp"

ProductDatabaseController::ProductDatabaseController(
    const ProductDatabase& productDatabase,
    const ProductDatabaseView& productDatabaseView)
    : m_productDatabase(productDatabase),
      m_productDatabaseView(productDatabaseView) {}

ProductController& ProductDatabaseController::getProductController(
    unsigned long long id) {
  m_productDatabase.getProductControllerById(id);
}

void ProductDatabaseController::loadProductDatabaseFromFile(
    const std::string& file) {
  //
}

void ProductDatabaseController::printProductDetails(unsigned long long id) {
  m_productDatabase.getProductControllerById(id).printProductDetails();
}