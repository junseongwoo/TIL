#include <stdio.h>

class CTest {
	int m_num;
};

int main()
{
	int a = 10;
	int b(20);

	CTest();
	
	/*기본 자료형*/
	int a = 10;
	int b(20);
	int c(a);
	printf("%d,%d,%d\n", a, c, b);

	/* 사용자 자료형*/
	CTest c1(100);
	CTest c2;
	CTest c3(c1);

	c3.getData();

	printf("%d, %d\n", a, b);
	return 0;
}