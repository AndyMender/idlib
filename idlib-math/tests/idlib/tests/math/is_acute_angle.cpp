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

TEST(is_acute_angle_test, degrees)
{
    using angle_type = idlib::angle<single, idlib::degrees>;
    angle_type x(idlib::zero<single>());
    angle_type y(idlib::fraction<single, 90, 1>());
}

TEST(is_acute_angle_test, radians)
{
    using angle_type = idlib::angle<single, idlib::radians>;
    angle_type x(idlib::zero<single>());
    angle_type y(idlib::pi<single>());
}

TEST(is_acute_angle_test, turns)
{
    using angle_type = idlib::angle<single, idlib::turns>;
    angle_type x(idlib::zero<single>());
    angle_type y(idlib::fraction<single, 1, 4>());
}

} // namespace idlib::tests
