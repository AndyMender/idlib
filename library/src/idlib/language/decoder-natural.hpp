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

#pragma push_macro("IDLIB_PRIVATE")
#if !defined(IDLIB_PRIVATE)
#define IDLIB_PRIVATE 1
#endif

#include <string>
#include "idlib/language/decoder.hpp"

//#include "idlib/language/classify.hpp"
//#include "idlib/utility/invalid_argument_error.hpp"

#undef IDLIB_PRIVATE
#pragma pop_macro("IDLIB_PRIVATE")

namespace id { namespace c {
	
/// @brief Specialization of id::c::decoder for decoding <c>natural</c> literals to <c>unsigned long</c> values.
template <>
struct decoder<unsigned long, void>
{
    bool operator()(const std::string& s, unsigned long& v) const;
}; // struct decoder
	
/// @brief Specialization of id::c::decoder for decoding <c>natural</c> literals to <c>unsigned long long</c> values.
template <>
struct decoder<unsigned long long, void>
{
    bool operator()(const std::string& s, unsigned long long& v) const;
}; // struct decoder
	
	
/// @brief Specialization of id::decoder for decoding <c>natural</c> literals to <c>unsigned char</c> values.
template <>
struct decoder<unsigned char, void>
{
    bool operator()(const std::string& s, unsigned char& v) const;
}; // struct decoder
	
/// @brief Specialization of id::decoder for decoding <c>natural</c> literals to <c>unsigned short</c> values.
template <>
struct decoder<unsigned short, void>
{
    bool operator()(const std::string& s, unsigned short& v) const;
}; // struct decoder
	
/// @brief Specialization of id::decoder for decoding <c>natural</c> literals to <c>unsigned int</c> values.
template <>
struct decoder<unsigned int, void>
{
    bool operator()(const std::string& s, unsigned int& v) const;
}; // struct decoder

} } // namespace id::c
