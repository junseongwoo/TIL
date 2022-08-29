#include <iostream>

class StaticTest {
	static int a; // static 멤버 변수
	int b;
public:
	StaticTest();
	static void setData(int);
	void getData();
};
int StaticTest::a = 20; // static 멤버변수 초기화( 외부에서 초기화 한다. )
						// -객체내에 존재하지 않는다.
StaticTest::StaticTest()
{
	b = 20;
}
void StaticTest::getData()
{
	printf("b : %d\n", b);
}
void StaticTest::setData(int aa)
{
	a = aa;
}

int main()
{

	return 0;
}