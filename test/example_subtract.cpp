#include <catch2/catch.hpp>

#include "example.h"

using namespace Catch::literals;

TEST_CASE("Use the example library to subtract numbers", "[subtract]") {
  auto res = subtract_numbers(1.0, 2.0);
  REQUIRE(res == -1.0_a);
}
