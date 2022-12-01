#include "Product.hpp"

// Constructors

Product::Product() {
  setId(0);
  setName("");
  setDescription("");
  setPrice(0);
  setAmount(0);
}

Product::Product(unsigned long long id, const std::string& name,
                 const std::string& description, double price,
                 unsigned long long amount) {
  setId(id);
  setName(name);
  setDescription(description);
  setPrice(price);
  setAmount(amount);
}

// Setters
void Product::setId(unsigned long long id) { m_id = id; }
void Product::setName(const std::string& name) { m_name = name; }
void Product::setDescription(const std::string& description) {
  m_description = description;
}
void Product::setPrice(double price) { m_price = price; }
void Product::setAmount(unsigned long long amount) { m_amount = amount; }

// Getters
unsigned long long Product::getId() const { return m_id; }
std::string Product::getName() const { return m_name; }
std::string Product::getDescription() const { return m_description; }
double Product::getPrice() const { return m_price; }
unsigned long long Product::getAmount() const { return m_amount; }
