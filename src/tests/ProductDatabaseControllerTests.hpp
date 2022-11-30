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
  Test::EQU("productDatabaseControllerDescription",
            productDatabaseController.getProductControllerById(0)
                .getProductDescription(),
            "Red apple from France");
  Test::EQU(
      "productDatabaseControllerPrice",
      productDatabaseController.getProductControllerById(0).getProductPrice(),
      2.49);
  Test::EQU(
      "productDatabaseControllerAmount",
      productDatabaseController.getProductControllerById(0).getProductAmount(),
      29);

  productDatabaseController.getProductControllerById(0).setProductName(
      "Banana");
  productDatabaseController.getProductControllerById(0).setProductDescription(
      "From Brazil");
  productDatabaseController.getProductControllerById(0).setProductPrice(39.99);
  productDatabaseController.getProductControllerById(0).setProductAmount(4999);

  Test::EQU(
      "productDatabaseControllerNameAfterChange",
      productDatabaseController.getProductControllerById(0).getProductName(),
      "Banana");
  Test::EQU("productDatabaseControllerDescriptionAfterChange",
            productDatabaseController.getProductControllerById(0)
                .getProductDescription(),
            "From Brazil");
  Test::EQU(
      "productDatabaseControllerPriceAfterChange",
      productDatabaseController.getProductControllerById(0).getProductPrice(),
      39.99);
  Test::EQU(
      "productDatabaseControllerAmountAfterChange",
      productDatabaseController.getProductControllerById(0).getProductAmount(),
      4999);
}