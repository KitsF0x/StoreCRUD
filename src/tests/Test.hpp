#pragma once

#include <iostream>

class Test {
 public:
  template <typename T, typename T2>
  static void EQU(const T& t, const T2& t2) {
    (t == t2) ? (std::cout << "[PASSED]" << std::endl)
              : (std::cout << "[FAILED]" << std::endl);
  }
};