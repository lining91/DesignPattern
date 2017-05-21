#include <iostream>
#include <stdio.h>
using namespace std;

#include "FactoryPattern.h"

void main()
{
	FactoryPattern* pFactory = new FactoryPattern();
	if (pFactory == NULL)
		return;

	char cOpe = '*';
	int n1 = 33;
	int n2 = 52;

	int nResult;
	try{
		nResult = pFactory->GetResult(n1, n2, cOpe);
		cout << n1 << cOpe << n2 << " is " << nResult << endl;
	}
	
	catch(char* pErr)
	{
		cout << pErr << endl;
	}
	
	delete pFactory;
	pFactory == NULL;

	system("pause");
}