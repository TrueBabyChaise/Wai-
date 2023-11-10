//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//

#include <iostream>
#include <fstream>
#include <string>
#include "Utils.hpp"
#include "Logger/Logger.hpp"

namespace WAI
{
    std::string Utils::get_file_content(const std::string &path)
    {
        std::string content;
        std::ifstream file(path);
        if (file.is_open())
        {
            std::string line;
            while (getline(file, line))
            {
                content += line + "\n";
            }
            file.close();
        }
        else
        {
            Logger::log("Unable to open file: " + path);
        }
        return content;
    }

    std::string Utils::is_digits(const std::string &str)
    {
        return str.find_first_not_of("0123456789") == std::string::npos ? "true" : "false";
    }

} // namespace WAI
