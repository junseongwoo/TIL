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
	// 객체와 포인터가 타입 자체가 다르다.  
	// 객체는 C타입이고 포인터는 A타입이다. 
	A* pa = new C; // 기초클래스타입의 포인터가 파생객체를 가리키고 있다.
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