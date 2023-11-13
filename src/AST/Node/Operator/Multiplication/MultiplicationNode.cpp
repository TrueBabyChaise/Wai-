//

#include "AST/Node/Operator/Multiplication/MultiplicationNode.hpp"

namespace WAI
{
	namespace NODE
	{
		MultiplicationNode::MultiplicationNode(ASTNode* left, ASTNode* right)
		{
			this->left = left;
			this->right = right;
		}

		int MultiplicationNode::evaluate() const
		{
			return this->left->evaluate() * this->right->evaluate();
		}
	} // namespace 
	
} // namespace WAI
