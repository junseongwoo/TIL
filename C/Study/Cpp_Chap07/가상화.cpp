#include <iostream>
using namespace std;

class A
{
public:
	void AFunc() {
		cout << "A::AFunc()" << endl;
	}
};

class B : public A
{
public:
	void BFunc() {
		cout << "B::BFunc()" << endl;
	}
};

class C : public B
{
public:
	void CFunc() {
		cout << "C::CFunc()" << endl;
	}
};

int main()
{
	// ��ü�� �����Ͱ� Ÿ�� ��ü�� �ٸ���.  
	// ��ü�� CŸ���̰� �����ʹ� AŸ���̴�. 
	A* pa = new C; // ����Ŭ����Ÿ���� �����Ͱ� �Ļ���ü�� ����Ű�� �ִ�.
	pa->AFunc();
	B* pb = new C;
	pb->BFunc();
	pb->AFunc();

	C* pc = new C;
	pc->AFunc();
	pc->BFunc();
	pc->CFunc();




	return 0;
}