#include "ProductView.hpp"

void ProductView::printProductDetails(const Product& product) {
  std::cout << "=====" << std::endl;
  std::cout << "Id: " << product.getId() << std::endl;
  std::cout << "Name: " << product.getName() << std::endl;
  std::cout << "Description: " << product.getDescription() << std::endl;
  std::cout << "Price: " << product.getPrice() << std::endl;
  std::cout << "Amount: " << product.getAmount() << std::endl;
  std::cout << "=====" << std::endl;
}