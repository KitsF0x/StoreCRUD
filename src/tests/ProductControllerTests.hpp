#pragma once
#include "../product/ProductController.hpp"
#include "Test.hpp"

void productTests() {
  Product model{0, "Apple", "Red apple", 3.99, 99};
  ProductView view;
  ProductController controller{model, view};
  Test::EQU("productControllerName", controller.getProductName(), "Apple");
  Test::EQU("productControllerDescription", controller.getProductDescription(),
            "Red apple");
  Test::EQU("productControllerPrice", controller.getProductPrice(), 3.99);
  Test::EQU("productControllerAmount", controller.getProductAmount(), 99);
}
