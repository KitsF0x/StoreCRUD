#pragma once
#include "../product/ProductController.hpp"
#include "Test.hpp"

void productTests() {
  Product model{"Apple", "Red apple", 3.99, 99};
  ProductView view;
  ProductController controller{model, view};
  Test::EQU(controller.getProductName(), "Apple");
}
