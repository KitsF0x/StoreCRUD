#include "ProductController.hpp"

// Constructors

ProductController::ProductController(Product& product, ProductView& productView)
    : m_product(product), m_productView(productView) {}

// Setters

void ProductController::setProductName(const std::string& name) {
  m_product.setName(name);
}
void ProductController::setProductDescription(const std::string& description) {
  m_product.setDescription(description);
}
void ProductController::setProductPrice(double price) {
  m_product.setPrice(price);
}
void ProductController::setProductAmount(unsigned long long amount) {
  m_product.setAmount(amount);
}

// Getters

std::string ProductController::getProductName() const {
  return m_product.getName();
}
std::string ProductController::getProductDescription() const {
  return m_product.getDescription();
}
double ProductController::getProductPrice() const {
  return m_product.getPrice();
}
unsigned long long ProductController::getProductAmount() const {
  return m_product.getAmount();
}
unsigned long long ProductController::getProductId() const {
  return m_product.getId();
}

// Other

void ProductController::printProductDetails() {
  m_productView.printProductDetails(m_product);
}