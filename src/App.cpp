#include "App.hpp"

App::App()
    : m_productDatabaseController(m_productDatabase, m_productDatabaseView) {}