// TODO: include core library

// TODO: remove example
#include "example.hpp"

#include <iostream>

int main() {
  // TODO: use the core library to implement a console app

  // TODO: remove example
  std::string name;
  while (std::cin >> name) {
    std::cout << example::Greet(name) << std::endl;
  }

  return 0;
}
