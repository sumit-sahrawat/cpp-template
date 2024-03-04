#include <string>
#include <optional>

namespace example {

std::string Greet(const std::optional<std::string>& opt_name = std::nullopt);

} // namespace example