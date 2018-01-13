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

/// @file idlib/file_system/error.hpp
/// @brief Definition of the base exception for any kind of file system exception.
/// @author Michael Heilmann

#pragma once

#if !defined(IDLIB_PRIVATE) || IDLIB_PRIVATE != 1
#error(do not include directly, include `idlib/idlib.hpp` instead)
#endif

#include "idlib/utility/runtime_error.hpp"
#include "idlib/utility/to_string.hpp"

#include "idlib/file_system/header.in"

/// @brief Base exception for any kind of file system exception.
class error : public id::runtime_error
{
public:
    /// @brief Construct this exception.
    /// @param file the C++ source file associated with this exception
    /// @param line the line within the C++ source file associated with this exception
    /// @param message the messae
    explicit error(const char *file, int line, const std::string& message) :
        id::runtime_error(file, line, message)
    {}

public:
    friend void swap(error& a, error& b)
    {
        using std::swap;
        swap(static_cast<id::runtime_error&>(a), static_cast<id::runtime_error&>(b));
    }

    virtual std::string to_string() const override
    {
        std::ostringstream buffer;
        buffer << "file system error:" << std::endl;
        buffer << "(raised in file " << file() << ", line " << line() << ")" << ":" << std::endl;
        buffer << message();
        return buffer.str();
    }

}; // class error

#include "idlib/file_system/footer.in"
