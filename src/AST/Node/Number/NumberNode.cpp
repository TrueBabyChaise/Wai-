//

#include "AST/Node/Number/NumberNode.hpp"

namespace WAI
{
	namespace NODE
	{
		NumberNode::NumberNode(int value)
		{
			this->value = value;
		}

		int NumberNode::evaluate() const
		{
			return this->value;
		}
	} // namespace 
	
} // namespace WAI
