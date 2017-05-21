#include <iostream>
#include <stdio.h>
using namespace std;

#include "FactoryPattern.h"

void main()
{
	char cOpe = '*';
	int n1 = 33;
	int n2 = 52;

	FactoryPattern cfactory;
	Operation* pOpe = cfactory.CreateOperation(cOpe);
	if (pOpe == NULL)
	{
		cout << "输入的计算符号不正确" << endl;
		return;
	}
	try{
		int nResult = pOpe->GetResult(n1, n2);
		cout << n1 << cOpe << n2 << " is " << nResult << endl;
	}
	catch(char* pErr)
	{
		cout << pErr << endl;
	}
	delete pOpe;
	pOpe == NULL;

	system("pause");
}
