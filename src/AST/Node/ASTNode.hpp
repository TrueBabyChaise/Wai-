//
#pragma once

namespace WAI
{
	namespace NODE
	{
		class ASTNode
		{
		public:
			virtual int evaluate() const = 0;
			virtual ~ASTNode() = default;
		};
	} // namespace AST
} // namespace WAI
