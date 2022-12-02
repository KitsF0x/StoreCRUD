#pragma once

#include <wx/wx.h>
#include "database/ProductDatabaseSingleton.hpp"
#include "gui/MainFrame.hpp"

class App : public wxApp {
 private:
  ProductDatabaseSingleton* m_productDatabaseSingleton;

 public:
  App();
  virtual bool OnInit();
};