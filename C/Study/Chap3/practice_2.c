#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	char b;
	printf("�����ϳ��� �Է��ϼ��� : $ ");
	scanf("%d", &a);
	getchar();
	printf("�����ϳ��� �Է��ϼ��� : $ ");
	scanf("%c", &b); // �������� ���� ���� ���ִ°��� ���ۿ� �ִ� ���Ͱ�

	printf("�Էµ� ���� %d, %c �Դϴ�.\n", a, b);

	return 0;
}