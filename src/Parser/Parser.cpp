//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//

#include <iostream>
#include <string>
#include "Parser.hpp"
#include "Token/Token.hpp"
#include <vector>

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

    std::vector<Token> Parser::parse(const std::string &content)
    {
        // Create new token each time we encounter a new whitespace
        int contentPos = 0;
        int tokenPos = 0;
        std::string tokenValue = "";
        std::vector<Token> tokens;

        while (content[contentPos] != EOF && content[contentPos] != '\0')
        {
            if (content[contentPos] == ' ' || content[contentPos] == '\n' || content[contentPos] == '\t')
            {
                // Create new token
                tokens.push_back(Token(tokenValue));
                tokenValue = "";
            }
            else
            {
                tokenValue += content[contentPos];
            }
            contentPos++;
        }

        for (auto const& token : tokens)
        {
            std::cout << token.getValue() << "/" << token.getTypeString() << std::endl;
        }

        // Remodeling the tokens to meet the requirements of the AST
        // Will use prefix notation

        std::vector<Token> newTokens;

        // Add the first token
        newTokens.push_back(tokens[0]);
        
        for (int i = 1; i < tokens.size(); i++)
        {
            // We swap this token with the one before it
            newTokens.push_back(tokens[i]);
            if (tokens[i].isOperator())
            {
                Token temp = newTokens[i];
                newTokens[i] = newTokens[i - 1];
                newTokens[i - 1] = temp;
            }
        }

        return newTokens;
    }
} // namespace WAI