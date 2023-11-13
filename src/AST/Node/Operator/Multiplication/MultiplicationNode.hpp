//
#pragma once
#include "AST/Node/ASTNode.hpp"

namespace WAI
{
	namespace NODE
	{
		class MultiplicationNode : public ASTNode
		{
		public:
			MultiplicationNode(ASTNode* left, ASTNode* right);
			int evaluate() const override;
		private:
			ASTNode* left;
			ASTNode* right;
		};
	} // namespace AST
} // namespace WAI
