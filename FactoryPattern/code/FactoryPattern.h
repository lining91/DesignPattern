#include <stdio.h>


//  ʵ�ּ������Ĺ���

//  ��������
class Operation{
public:
	virtual int GetResult(int n1, int n2) = 0;

public:
	int n1;
	int n2;
};

//  �Ӽ�������
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
			throw "��������Ϊ0��";
		return n1 / n2;
	}
};

//�򵥹�����
class FactoryPattern{
public:
	Operation* CreateOperation(char cOpe);
};