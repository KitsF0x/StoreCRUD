#pragma once
#include "../database/ProductDatabaseController.hpp"
#include "Test.hpp"

void productDatabaseControllerTest() {
  Product productModel{0, "Apple", "Red apple from France", 2.49, 29};
  ProductView productView;
  ProductController productController{productModel, productView};

  ProductDatabase productDatabaseModel;
  ProductDatabaseView productDatabaseView;
  ProductDatabaseController productDatabaseController{productDatabaseModel,
                                                      productDatabaseView};
  productDatabaseController.add(productController);

  Test::EQU(
      "productDatabaseControllerName",
      productDatabaseController.getProductControllerById(0).getProductName(),
      "Apple");
}