#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2;
	int n;
	char order;

	printf("���� �� ���� �Է��ϼ��� : ");
	scanf("%d %d", &n1, &n2);

	printf("�ʿ��� ������ �Է��ϼ��� : ");
	scanf(" %c", &order);

	switch (order)
	{
	case '+':
		n = n1 + n2;
		printf("���� ����� %d", n);
		break;
	case '-':
		n = n1 - n2;
		printf("���� ����� %d", n);
		break;
	case '*':
		n = n1 * n2;
		printf("���� ����� %d", n);
		break;
	case '/':
		if (n2 != 0)
		{
			n = n1 / n2;
			printf("���� ����� %d", n);
		}
		else
		{
			printf("0���� ���� �� �����ϴ�.");
		}
		break;
	default:
		printf("�ٽ� �Է��� �ֽʽÿ�.");
		break;
	}

}