/*
--- �����Լ��� ���ۿ����� �����Լ� ���̺�

AAA�� virtual�� ����� �����Լ��� ���� 
-> �� �� �̻��� �����Լ��� �����ϴ� Ŭ������ ���ؼ��� �����Ϸ��� 
�����Լ� ���̺� (V-Table)�� �����. -> ���� ȣ��Ǿ�� �� �Լ��� ��ġ������ ��� �ִ� ���̺�

�����Լ� ���̺� key�� value�� �ִ�.
key�� �Լ��� �����ϴ� ������ ����, value�� �����ڿ� �ش��ϴ� �Լ��� �ּ� ������ �˷��ִ� ����

--- �����Լ� ���̺��� �����Ǵ� ���
main �Լ��� ȣ��Ǳ� ������ ������ ������ �����Լ� ���̺��� �޸� ������ �Ҵ� 
�����Լ� ���̺��� ��ü�� ������ ������� �޸� ������ �Ҵ� 
-> �����Լ� ���̺��� ����Լ��� ȣ�⿡ ���Ǵ� ������ �������̱� ����

*/

#include <iostream>

class AAA
{
private:
	int num1;

public:
	virtual void Func1() { std::cout << "Func1" << std::endl; }
	virtual void Func2() { std::cout << "Func2" << std::endl; }
};

class BBB : public AAA
{
private :
	int num2;

public:
	virtual void Func1() { std::cout << "BBB::Func1" << std::endl; }
	void Func3() { std::cout << "Func3" << std::endl; }
};

int main(void)
{
	AAA *aptr = new AAA();
	aptr->Func1();

	BBB* bptr = new BBB();
	bptr->Func1();
}