//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//

#include <iostream>
#include <string>
#include "Parser.hpp"
#include "Token/Token.hpp"

namespace WAI
{
    Parser::Parser()
    {
        std::cout << "Parser constructor called" << std::endl;
    }

    Parser::~Parser()
    {
        std::cout << "Parser destructor called" << std::endl;
    }

    std::map<int, Token> Parser::parse(const std::string &content)
    {
        // Create new token each time we encounter a new whitespace
        int contentPos = 0;
        int tokenPos = 0;
        std::string tokenValue = "";

        while (content[contentPos] != EOF && content[contentPos] != '\0')
        {
            if (content[contentPos] == ' ' || content[contentPos] == '\n' || content[contentPos] == '\t')
            {
                // Create new token
                Token token = Token(tokenValue);
                this->tokens.insert({tokenPos, token});
                tokenValue = "";
                tokenPos = contentPos + 1;
            }
            else
            {
                tokenValue += content[contentPos];
            }
            contentPos++;
        }

        return tokens;
    }
} // namespace WAI