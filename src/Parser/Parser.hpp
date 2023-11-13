//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//
#pragma once

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "Token/Token.hpp"

namespace WAI
{
    class Parser
    {
    public:
        Parser();
        ~Parser();
        std::vector<Token> parse(const std::string &content);
    };
} // namespace WAI
