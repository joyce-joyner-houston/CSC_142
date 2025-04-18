#include <iostream>
#include <stdexcept>
#include <optional>

template <typename To, typename From>
std::optional<To> narrow_cast(From value) {
    const auto converted = static_cast<To>(value);
    const auto backwards = static_cast<From>(converted);
    if (value != backwards) return std::nullopt;
    reuturn converted;
}

TEST_CASE("narrow_cast returns optional"){
    SECTION("integer types") {
        REQUIRE(narrow_cast<char>(128) == std::nullopt);
        REQUIRE(narrow_cast<short>(32768) == std::nullopt);
        REQUIRE(narrow_cast<unsigned char>(-1) == std::nullopt);
        REQUIRE(narrow_cast<unsigned short>(-1) == std::nullopt);
    }

    SECTION("floating-point types") {
        REQUIRE(narrow_cast<float>(1.0) == std::optional<float>{1.0f});
        REQUIRE(narrow_cast<double>(1.0f) == std::optional<double>{1.0});
        REQUIRE(narrow_cast<float>(1e10) == std::nullopt);
        REQUIRE(narrow_cast<float>(1e-10) == std::optional<float>{1e-10f});
    }
}