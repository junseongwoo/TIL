#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, n;
	char order;

	while (1)
	{
		printf("���� �Ͻðڽ��ϱ�? : y/n\n");
		scanf(" %c", &order);

		if (order == 'y')
			break;

		else
		{
			printf("���� �ΰ��� �Է��ϼ��� : ");
			scanf("%d %d", &n1, &n2);

			printf("���� ��ȣ�� �Է��ϼ��� : ");
			scanf(" %c", &order);

			if (order == '+')
			{
				n = n1 + n2;
				printf("%d + %d = %d\n", n1, n2, n);
			}
			else if (order == '-')
			{
				n = n1 - n2;
				printf("%d - %d = %d\n", n1, n2, n);
			}
			else if (order == '*')
			{
				n = n1 * n2;
				printf("%d * %d = %d\n", n1, n2, n);
			}
			else if (order == '/')
			{
				if (n2 != 0)
				{
					n = n1 / n2;
					printf("%d / %d = %d\n", n1, n2, n);
				}
				else
				{
					printf("0���� ���� �� �����ϴ�.\n");
				}
			}
			else
			{
				printf("��Ģ������ ����� �Է����ּ���.\n");
			}
		}
	}


	return 0;
}