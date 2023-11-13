//
#include "AST/AST.hpp"
#include "AST/Node/ASTNode.hpp"
#include "AST/Node/Number/NumberNode.hpp"
#include "AST/Node/Operator/Addition/AdditionNode.hpp"
#include "AST/Node/Operator/Multiplication/MultiplicationNode.hpp"
#include "AST.hpp"
#include <string>
#include <vector>


namespace WAI
{
	NODE::ASTNode* AST::buildAST(std::vector<Token> &tokens, int &index)
	{
		// Leave if index is out of bounds
		if (index >= tokens.size() || index < 0)
			return nullptr;
		
		// Get the current token
		Token token = tokens[index];
		

		switch (token.getType())
		{
			case Token::Type::INT:
				return new NODE::NumberNode(std::stoi(token.getValue()));
				break;
			case Token::Type::PLUS:
				return new NODE::AdditionNode(buildAST(tokens, ++index), buildAST(tokens, ++index));
				break;
			case Token::Type::MULTIPLY:
				return new NODE::MultiplicationNode(buildAST(tokens, ++index), buildAST(tokens, ++index));
				break;
			default:
				break;
			}

		// If the token is a number
		return nullptr;
	}
} // namespace WAI
