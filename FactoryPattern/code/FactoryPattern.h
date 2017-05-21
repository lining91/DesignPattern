#include <stdio.h>


//  实现计算器的功能

//  操作基类
class Operation{
public:
	virtual int GetResult(int n1, int n2) = 0;

public:
	int n1;
	int n2;
};

//  加减乘数类
class OperationAdd : public Operation{
public:
	virtual int GetResult(int n1, int n2)
	{
		return n1 + n2;
	}
};


class OperationSub : public Operation{
public:
	virtual int GetResult(int n1, int n2)
	{
		return n1 - n2;
	}
};

class OperationMul : public Operation{
public:
	virtual int GetResult(int n1, int n2)
	{
		return n1 * n2;
	}
};

class OperationDiv : public Operation{
public:
	virtual int GetResult(int n1, int n2)
	{
		if (n2 == 0)
			throw "除数不能为0！";
		return n1 / n2;
	}
};

//简单工厂类
class FactoryPattern{
public:
	Operation* CreateOperation(char cOpe);
};