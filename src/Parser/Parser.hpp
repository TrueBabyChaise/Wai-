//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//
#pragma once

#include <iostream>
#include <string>
#include <map>
#include "Token/Token.hpp"

namespace WAI
{
    class Parser
    {
    private:
        std::map<int, Token> tokens;
    public:
        Parser();
        ~Parser();
        std::map<int, Token> parse(const std::string &content);
    };
} // namespace WAI
