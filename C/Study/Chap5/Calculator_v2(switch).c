#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2;
	int n;
	char order;

	printf("정수 두 개를 입력하세요 : ");
	scanf("%d %d", &n1, &n2);

	printf("필요한 연산을 입력하세요 : ");
	scanf(" %c", &order);

	switch (order)
	{
	case '+':
		n = n1 + n2;
		printf("연산 결과는 %d", n);
		break;
	case '-':
		n = n1 - n2;
		printf("연산 결과는 %d", n);
		break;
	case '*':
		n = n1 * n2;
		printf("연산 결과는 %d", n);
		break;
	case '/':
		if (n2 != 0)
		{
			n = n1 / n2;
			printf("연산 결과는 %d", n);
		}
		else
		{
			printf("0으로 나눌 수 없습니다.");
		}
		break;
	default:
		printf("다시 입력해 주십시오.");
		break;
	}

}