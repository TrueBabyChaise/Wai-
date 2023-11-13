//
#pragma once
#include "AST/Node/ASTNode.hpp"

namespace WAI
{
	namespace NODE
	{
		class NumberNode : public ASTNode
		{
		public:
			NumberNode(int value);
			int evaluate() const override;
		private:
			int value;
		};
	} // namespace AST
} // namespace WAI
