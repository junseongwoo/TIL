#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int c = 10, d = 20;

	++a;
	--b;
	c++;                     
	d--;

	// 네개의 값이 같은 이유는 대입 연산자가 따로 없고 증감 연산자만 있어 영향을 끼치지 않기때문
	printf("a : %d\n", a);
	printf("b : %d\n", b);
	printf("c : %d\n", c);
	printf("d : %d\n", d);


	return 0;
}