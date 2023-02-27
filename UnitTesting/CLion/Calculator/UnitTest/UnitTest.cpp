#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "Add.h"

TEST_CASE("adding ints")
{
    REQUIRE(Add(1, 2) == 3);
}

TEST_CASE("adding doubles")
{
    REQUIRE(Add(1.2, 2.3) == Approx(3.5));
}