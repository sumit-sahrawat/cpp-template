#include "example.hpp"

#include <optional>
#include <sstream>
#include <string>

namespace example {

std::string Greet(const std::optional<std::string>& opt_name) {
  std::ostringstream ss;
  ss << "Hello, ";
  ss << (opt_name ? opt_name.value() : "World");
  ss << "!";

  return ss.str();
}

} // namespace example
