//
#pragma once
#include <map>
#include <vector>
#include "Token/Token.hpp"
#include "AST/Node/ASTNode.hpp"

namespace WAI
{
    class AST
    {
    public:
		AST() = default;
        ~AST() = default;
        NODE::ASTNode* buildAST(std::vector<Token> &tokens, int &index);
	};
} // namespace WAI
