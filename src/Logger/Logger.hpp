//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//
#pragma once
#include <string>

namespace WAI
{
    struct Logger
    {
        static void log(const std::string &message);
    };
}