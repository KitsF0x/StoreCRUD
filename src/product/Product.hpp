#pragma once

#include <string>

class Product {
 private:
  std::string m_name;
  std::string m_description;
  double m_price;
  unsigned long long m_amount;
  unsigned long long m_id;

 public:
  Product();
  Product(unsigned long long id, const std::string& name,
          const std::string& description, double price,
          unsigned long long amount);
  void setId(unsigned long long id);
  void setName(const std::string& name);
  void setDescription(const std::string& description);
  void setPrice(double price);
  void setAmount(unsigned long long amount);

  std::string getName() const;
  std::string getDescription() const;
  double getPrice() const;
  unsigned long long getAmount() const;
  unsigned long long getId() const;
};