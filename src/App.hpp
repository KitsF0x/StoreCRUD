#pragma once

#include "database/ProductDatabaseSingleton.hpp"

class App {
 private:
  ProductDatabaseSingleton* m_productDatabaseSingleton;

 public:
  App();
};