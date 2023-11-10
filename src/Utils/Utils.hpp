//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//
#pragma once
#include <string>

namespace WAI
{
    struct Utils
    {
        static std::string get_file_content(const std::string &path);
        
        static std::string is_digits(const std::string &str);
    };
} // namespace WAI
