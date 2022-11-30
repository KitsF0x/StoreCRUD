#include "ProductDatabaseController.hpp"

// Constructors

ProductDatabaseController::ProductDatabaseController(
    const ProductDatabase& productDatabase,
    const ProductDatabaseView& productDatabaseView)
    : m_productDatabase(productDatabase),
      m_productDatabaseView(productDatabaseView) {}

// Setters

void ProductDatabaseController::setProductNameById(unsigned long long id,
                                                   const std::string& name) {
  m_productDatabase.setProductNameById(id, name);
}

void ProductDatabaseController::setProductDescriptionById(
    unsigned long long id, const std::string& description) {
  m_productDatabase.setProductDescriptionById(id, description);
}

void ProductDatabaseController::setProductPriceById(unsigned long long id,
                                                    double price) {
  m_productDatabase.setProductPriceById(id, price);
}
void ProductDatabaseController::setProductAmountById(
    unsigned long long id, unsigned long long amount) {
  m_productDatabase.setProductAmountById(id, amount);
}

// Getters

std::string ProductDatabaseController::getProductNameById(
    unsigned long long id) {
  return m_productDatabase.getProductNameById(id);
}
std::string ProductDatabaseController::getProductDescriptionById(
    unsigned long long id) {
  return m_productDatabase.getProductDescriptionById(id);
}
double ProductDatabaseController::getProductPriceById(unsigned long long id) {
  return m_productDatabase.getProductPriceById(id);
}
unsigned long long ProductDatabaseController::getProductAmountById(
    unsigned long long id) {
  return m_productDatabase.getProductAmountById(id);
}

// Other

void ProductDatabaseController::loadProductDatabaseFromFile(
    const std::string& file) {
  //
}

void ProductDatabaseController::addProduct(
    const ProductController& productController) {
  m_productDatabase.add(productController);
}