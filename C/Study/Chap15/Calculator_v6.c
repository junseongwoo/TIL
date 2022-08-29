#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int (*fp)(int, int)); 
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main(void)
{
	int _select;

	printf("실행 할 연산을 입력하세요 : \n");
	printf("1. '+', 2. '-', 3. '*', 4. '/' \n");
	scanf("%d", &_select);

	switch (_select)
	{
	case 1:
		func(sum);
		break;
	case 2:
		func(sub);
		break;
	case 3:
		func(mul);
		break;
	case 4:
		func(div);
		break;
	}


	return 0;
}

void func(int (*fp)(int, int))
{
	int a, b;
	int n;

	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	n = fp(a, b);

	printf("%결괏값은 : %d\n", n);
}

int sum(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int div(int a, int b)
{
	return (a / b);
}