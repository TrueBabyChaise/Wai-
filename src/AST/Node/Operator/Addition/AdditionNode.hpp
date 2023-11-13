//
#pragma once
#include "AST/Node/ASTNode.hpp"

namespace WAI
{
	namespace NODE
	{
		class AdditionNode : public ASTNode
		{
		public:
			AdditionNode(ASTNode* left, ASTNode* right);
			int evaluate() const override;
		private:
			ASTNode* left;
			ASTNode* right;
		};
	} // namespace AST
} // namespace WAI
