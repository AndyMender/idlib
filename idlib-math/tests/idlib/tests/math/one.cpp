///////////////////////////////////////////////////////////////////////////////////////////////////
//
// Idlib: A C++ utility library
// Copyright (C) 2017-2018 Michael Heilmann
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include "gtest/gtest.h"
#include "idlib/math.hpp"

namespace idlib::tests {

TEST(one_test, types)
{
    static_assert(std::is_same<decltype(idlib::one<signed short>()), signed short>::value, "");
    static_assert(std::is_same<decltype(idlib::one<unsigned short>()), unsigned short>::value, "");
    static_assert(std::is_same<decltype(idlib::one<signed int>()), signed int>::value, "");
    static_assert(std::is_same<decltype(idlib::one<unsigned int>()), unsigned int>::value, "");
    static_assert(std::is_same<decltype(idlib::one<signed long>()), signed long>::value, "");
    static_assert(std::is_same<decltype(idlib::one<unsigned long>()), unsigned long>::value, "");
    static_assert(std::is_same<decltype(idlib::one<signed long long>()), signed long long>::value, "");
    static_assert(std::is_same<decltype(idlib::one<unsigned long long>()), unsigned long long>::value, "");
    static_assert(std::is_same<decltype(idlib::one<single>()), single>::value, "");
    static_assert(std::is_same<decltype(idlib::one<double>()), double>::value, "");
}

} // namespace idlib::tests
