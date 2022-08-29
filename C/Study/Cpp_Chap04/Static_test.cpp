#include <iostream>

class StaticTest {
public :
	int a;
	static int b;
	StaticTest() {
		a = 10;
		b++;
	}
	void getData() {
		printf("a : %d, b : %d\n", a, b);
	}
};
int StaticTest::b = 20; // static 멤버변수 초기화( 외부에서 초기화 한다. )
                        // -객체내에 존재하지 않는다.
int main()
{
	StaticTest s1;
	s1.getData();
	StaticTest s2;


	return 0;
}