#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��-�� ���� �ٲٱ�

int main(void)
{
	char str1;

	printf("�ҹ���, Ȥ�� �빮�ڸ� �Է��ϼ��� : ");
	scanf("%c", &str1); // scanf �� �� �ּ� ������ ����

	if ((str1 >= 'A') && (str1 <= 'Z'))
	{
		str1 = str1 + ('a' - 'A');
	}
	else
	{
		str1 = str1 - ('a' - 'A');
	}

	printf("��ȯ�� ���� : %c\n", str1);

	return 0;
}