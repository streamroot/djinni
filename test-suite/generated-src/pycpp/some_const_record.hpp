// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_constants.djinni

#pragma once

#include <cstdint>
#include <utility>

namespace testsuite {

struct SomeConstRecord final {
    int16_t number1;
    int16_t number2;

    SomeConstRecord(int16_t number1,
                    int16_t number2)
    : number1(std::move(number1))
    , number2(std::move(number2))
    {}
};

}  // namespace testsuite