#pragma once
#include "DatabaseCrudTests.hpp"
#include "ProductControllerTests.hpp"
void runTests() {
  productControllerTests();
  databaseCrudTests();
}