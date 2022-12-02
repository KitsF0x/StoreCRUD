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
void ProductController::setProductAmount(size_t amount) {
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
size_t ProductController::getProductAmount() const {
  return m_product.getAmount();
}
size_t ProductController::getProductId() const { return m_product.getId(); }

// Other

void ProductController::printProductDetails() {
  m_productView.printProductDetails(m_product);
}