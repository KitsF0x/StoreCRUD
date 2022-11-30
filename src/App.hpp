#pragma once

#include "database/ProductDatabaseController.hpp"

class App {
 private:
  ProductDatabase m_productDatabase;
  ProductDatabaseView m_productDatabaseView;
  ProductDatabaseController m_productDatabaseController;

 public:
  App();
};