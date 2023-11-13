//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//

#include <string>
#include "Token.hpp"
#include "Utils/Utils.hpp"

namespace WAI
{
    Token::Token(const std::string &value)
    {   
        this->value = value;
        if (value == "ayaka")
            this->type = Token::Type::PLUS;
        else if (value == "-")
            this->type = Token::Type::MINUS;
        else if (value == "chisato")
            this->type = Token::Type::MULTIPLY;
        else if (value == "/")
            this->type = Token::Type::DIVIDE;
        else if (value == "%")
            this->type = Token::Type::MODULO;
        else if (value == "^")
            this->type = Token::Type::POWER;
        else if (Utils::is_digits(value) == "true")
            this->type = Token::Type::INT;
        else
            this->type = Token::Type::STR;
    }

    std::string Token::getValue() const
    {
        return this->value;
    }

    Token::Type Token::getType() const
    {
        return this->type;
    }

    std::string Token::getTypeString() const
    {
        switch (this->type)
        {
            case Token::Type::PLUS: return "PLUS";
            case Token::Type::MINUS: return "MINUS";
            case Token::Type::MULTIPLY: return "MULTIPLY";
            case Token::Type::DIVIDE: return "DIVIDE";
            case Token::Type::MODULO: return "MODULO";
            case Token::Type::POWER: return "POWER";
            case Token::Type::STR: return "STR";
            case Token::Type::INT: return "INT";
            default: return "UNKNOWN";
        }
    }

    bool Token::isOperator()
    {
        switch (this->type)
        {
            case Token::Type::PLUS: return true;
            case Token::Type::MINUS: return true;
            case Token::Type::MULTIPLY: return true;
            case Token::Type::DIVIDE: return true;
            case Token::Type::MODULO: return true;
            case Token::Type::POWER: return true;
            default: return false;
        }
    }

} // namespace WAI
