#include "example.hpp"

#include <gtest/gtest.h>

TEST(ExampleTests, ExclamationSuffix) {
  auto greeting = example::Greet("user");
  EXPECT_EQ(greeting.back(), '!');
}

TEST(ExampleTests, HelloPrefix) {
  auto greeting = example::Greet("user");
  EXPECT_EQ(greeting.find("Hello"), 0);
}