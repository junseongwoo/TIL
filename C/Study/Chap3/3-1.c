#include <stdio.h>

int main()
{
	int a = 10;
	int b, c;
	double da;
	char ch;

	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n\n", ch);

	printf("char 크기 : %d\n", sizeof(char));
	printf("int 크기 : %d\n", sizeof(int));
	printf("double 크기 : %d\n", sizeof(double));
	printf("short 크기 : %d\n", sizeof(short));
	printf("long 크기 : %d\n", sizeof(long));

	return 0;
}