#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch.hpp>
#include <libstapi/libstapi.h>

TEST_CASE("libstapi_api_foobar returns the ultimate result","[libstapi_api_foobar]") {
    REQUIRE(42 == libstapi_api());
}
