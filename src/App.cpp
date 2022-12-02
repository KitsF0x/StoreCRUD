#include "App.hpp"

App::App() {
  m_productDatabaseSingleton->getInstance()->loadDatabaseFromFile(
      "database.txt");
  m_productDatabaseSingleton->getInstance()->printAllProducts();
}