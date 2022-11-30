#pragma once

#include <iostream>

class Test {
 public:
  template <typename T, typename T2>
  static void EQU(const std::string& name, const T& t, const T2& t2) {
    (t == t2) ? (std::cout << "[PASSED]") : (std::cout << "[FAILED]");
    std::cout << "\t" << name << std::endl;
  }
};