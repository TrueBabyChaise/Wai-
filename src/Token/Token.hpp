//
// Description: Logger class implementation.
// Author:      Serena Satella
// Date:        2023-11-10
//
#pragma once

namespace WAI
{
    class Token
    {   
        public:
            Token(const std::string &value);
            ~Token() = default;

            enum class Type
            {
                // Keywords
                PLUS,
                MINUS,
                MULTIPLY,
                DIVIDE,
                MODULO,
                POWER,
                STR,
                INT,
            };

            std::string getValue() const;
            Token::Type getType() const;
            std::string getTypeString() const;
            bool isOperator();
            bool isKeyword();
            void setValue(const std::string &value);
            void setType(const Token::Type &type);


        private:
            Token::Type type;
            std::string value;
       
    };

} // namespace WAI
