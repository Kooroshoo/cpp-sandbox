#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "math_utils.h"

TEST_CASE("Addition works correctly") {
    REQUIRE(add(2, 3) == 5);
    REQUIRE(add(-1, 1) == 0);
}

TEST_CASE("Subtraction works correctly") {
    REQUIRE(subtract(5, 3) == 2);
    REQUIRE(subtract(3, 5) == -2);
}
