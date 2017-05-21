#include "FactoryPattern.h"

Operation* FactoryPattern::CreateOperation(char cOpe)
{
	switch(cOpe)
	{
	case ('+'):
		return new OperationAdd();
		break;
	case ('-'):
		return new OperationSub();
		break;
	case ('*'):
		return new OperationMul();
		break;
	case ('/'):
		return new OperationDiv();
		break;
	default:
		return NULL;
	}
}

int FactoryPattern::GetResult(int n1, int n2, char cOpe)
{
	Operation* pOpe = CreateOperation(cOpe);
	if (pOpe == NULL)
		throw "输入的计算符号不正确";

	return pOpe->GetResult(n1, n2);
}