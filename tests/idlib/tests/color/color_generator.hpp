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

#pragma once

#include "idlib/idlib.hpp"

namespace id { namespace tests { namespace color {

template <typename S, typename E = void>
struct color_generator;

template <typename S>
struct color_generator<S, std::enable_if_t<id::is_any_of<S, id::RGBb, id::RGBf, id::RGBAb, id::RGBAf>::value>>
{
    using C = id::color<S>;
    std::vector<C> operator()() const
    {
        static const std::vector<C> colors =
        {
            C::black(),   // x x x
            C::blue(),    // x x b
            C::green(),   // x g x
            C::cyan(),    // x g b
            C::red(),     // r x x
            C::magenta(), // r x b
            C::yellow(),  // r g x
            C::white(),   // r g b
        };
        return colors;
    }
};

template <typename S>
struct color_generator<S, std::enable_if_t<id::is_any_of<S, id::Lb, id::Lf, id::LAb, id::LAf>::value>>
{
    using C = id::color<S>;
    std::vector<C> operator()() const
    {
        static const std::vector<C> colors =
        {
            C::black(),
            C::white(),
        };
        return colors;
    }
};

} } } // namespace id::tests::color
