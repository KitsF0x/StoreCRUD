#pragma once

#include <string>

class Product {
 private:
  std::string m_name;
  std::string m_description;
  double m_price;
  size_t m_amount;

 public:
  Product();
  Product(const std::string& name, const std::string& description, double price,
          size_t amount);
  void setName(const std::string& name);
  void setDescription(const std::string& description);
  void setPrice(double price);
  void setAmount(size_t amount);

  std::string getName() const;
  std::string getDescription() const;
  double getPrice() const;
  size_t getAmount() const;
};