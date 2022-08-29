#include <iostream>

class A {
public:
	void test() { printf("A::test()\n"); }
};
class B : public A {
public:

};
class C : public B {
public:
	virtual void test() { printf("C::test()\n"); }
	void test2() { printf("C::test2()\n"); }
};

void GlobalFunc(A& a) {
	try {
		C& c = dynamic_cast<C&>(a);
		printf("GlovalFunc()");
	}
	catch (std::bac_cast) {
		printf("casting error");
	}
}

int main()
{
	A* pa = new C;

	return 0;
}