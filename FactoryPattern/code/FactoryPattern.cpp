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