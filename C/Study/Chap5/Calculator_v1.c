/*
	Created : 2021-04-28
	Author  : ���ؼ� 

	1. �� �� �Է�
	2. ��Ģ���� ����
	3. ��� ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("���� �ΰ��� �Է��ϼ��� : ");
	scanf("%d %d", &num1, &num2);

	int sum = num1 + num2;
	int sub = num1 - num2;
	int mul = num1 * num2;
	int div = num1 / num2;
	
	printf("�� ���� ���� �� : %d\n", sum);
	printf("�� ���� ���� �� : %d\n", sub);
	printf("�� ���� ���� �� : %d\n", mul);
	printf("�� ���� ������ �� : %d\n", div);

	return 0;
}