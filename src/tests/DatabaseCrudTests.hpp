#pragma once

#include "../database/ProductDatabaseSingleton.hpp"
#include "Test.hpp"

void databaseCrudTests() {
  ProductDatabaseSingleton* db;
  db->getInstance()->add(Product{"Apple", "From Poland", 2.99, 100});
  Test::EQU("databaseAddProductName",
            db->getInstance()->getProductById(0).getName(), "Apple");
  Test::EQU("databaseAddProductDescription",
            db->getInstance()->getProductById(0).getDescription(),
            "From Poland");
  Test::EQU("databaseAddProductPrice",
            db->getInstance()->getProductById(0).getPrice(), 2.99);
  Test::EQU("databaseAddProductAmount",
            db->getInstance()->getProductById(0).getAmount(), 100);

  Product updateProduct{"Banana", "From Brazil", 13.99, 231};
  db->getInstance()->updateProductById(updateProduct, 0);

  Test::EQU("databaseUpdateProductName",
            db->getInstance()->getProductById(0).getName(), "Banana");
  Test::EQU("databaseUpdateProductDescription",
            db->getInstance()->getProductById(0).getDescription(),
            "From Brazil");
  Test::EQU("databaseUpdateProductPrice",
            db->getInstance()->getProductById(0).getPrice(), 13.99);
  Test::EQU("databaseUpdateProductAmount",
            db->getInstance()->getProductById(0).getAmount(), 231);

  db->getInstance()->deleteProductById(0);
  Test::EQU("databaseRemoveProduct", db->getInstance()->getProducts().size(),
            0);
}