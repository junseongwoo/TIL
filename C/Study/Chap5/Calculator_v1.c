/*
	Created : 2021-04-28
	Author  : 우준성 

	1. 두 값 입력
	2. 사칙연산 수행
	3. 결과 출력
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("정수 두개를 입력하세요 : ");
	scanf("%d %d", &num1, &num2);

	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	int div = num1 / num2;
	
	printf("두 수의 덧셈 값 : %d\n", sum);
	printf("두 수의 뺄셈 값 : %d\n", sub);
	printf("두 수의 곱셈 값 : %d\n", mul);
	printf("두 수의 나눗셈 값 : %d\n", div);

	return 0;
}