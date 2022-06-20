#include "lib.hpp"
#include "nested/a.hpp"
#include <iostream>

auto my_func() -> void {
  std::cout << "Beep boop" << std::endl;
  my_func_a();
}
