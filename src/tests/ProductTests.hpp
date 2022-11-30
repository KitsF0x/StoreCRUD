#pragma once
#include "../product/ProductController.hpp"
#include "Test.hpp"

void productTests() {
  Product model{"Apple", "Red apple", 3.99, 99};
  ProductView view;
  ProductController controller{model, view};
  Test::EQU("productName", controller.getProductName(), "Apple");
  Test::EQU("productDescription", controller.getProductDescription(),
            "Red apple");
  Test::EQU("productPrice", controller.getProductPrice(), 3.99);
  Test::EQU("productAmount", controller.getProductAmount(), 99);
}
