//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//

#include <iostream>
#include <string>
#include "Logger.hpp"

namespace WAI
{
    void Logger::log(const std::string& message)
    {
        std::cout << message << std::endl;
    }
}