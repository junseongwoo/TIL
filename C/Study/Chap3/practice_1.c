#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	char addr[50];
	int age;

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name);
	printf("�ּҸ� �Է��ϼ��� : ");
	scanf("%s", addr);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	printf("�̸� : %s\n�ּ� : %s\n���� : %d", name, addr, age);

	return 0;
}