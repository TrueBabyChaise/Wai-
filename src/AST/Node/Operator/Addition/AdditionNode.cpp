//

#include "AST/Node/Operator/Addition/AdditionNode.hpp"

namespace WAI
{
	namespace NODE
	{
		AdditionNode::AdditionNode(ASTNode* left, ASTNode* right)
		{
			this->left = left;
			this->right = right;
		}

		int AdditionNode::evaluate() const
		{
			return this->left->evaluate() + this->right->evaluate();
		}
	} // namespace 
	
} // namespace WAI
