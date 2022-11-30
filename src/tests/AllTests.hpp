#pragma once
#include "ProductControllerTests.hpp"
#include "ProductDatabaseControllerTests.hpp"

void runTests() {
  productControllerTests();
  productDatabaseControllerTest();
}