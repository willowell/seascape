#include <iostream>
#include "lib.hpp"
#include "nested/a.hpp"

auto main() -> int {
  std::cout << "Bonjour, tout le monde !" << std::endl;

  my_func();

  my_func_a();

  return 0;
}
