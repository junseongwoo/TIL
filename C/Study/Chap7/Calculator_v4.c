#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int Calculator(int, int, char);

int main()
{
	int n1, n2, n;
	char order;
	
	

	/*n = Calculator(n1, n2, order);
	printf("%d + %d = %d �Դϴ�.\n", n1, n2, n);*/

	while (1)
	{
		printf("���� �Ͻðڽ��ϱ�? y/n\n");
		scanf(" %c", &order);
		if (order == 'y')
		{
			break;
		}
		else
		{
			printf("���� �ΰ��� �Է��ϼ��� :");
			scanf("%d %d", &n1, &n2);

			printf("������ ������ �Է��ϼ��� :");
			scanf(" %c", &order);

			if (order == '+')
			{
				n = add(n1, n2);
			}
			else if (order == '-')
			{
				n = sub(n1, n2);
			}
			else if (order == '*')
			{
				n = mul(n1, n2);
			}
			else if (order == '/')
			{
				if (n2 == 0)
				{
					printf("0���� ���� �� �����ϴ�.\n");
				}
				else
				{
					n = div(n1, n2);
				}
			}
			else
			{
				printf("+, -, *, / �� �ϳ��� �����ϼ���.\n");
			}
		}
		
	}
	
	
	return 0;
}

int add(int a, int b)
{
	printf("%d + %d = %d �Դϴ�.\n", a, b, a+b);
	return a + b;
}

int sub(int a, int b)
{
	printf("%d - %d = %d �Դϴ�.\n", a, b, a-b);
	return a - b;
}

int mul(int a, int b)
{
	printf("%d * %d = %d �Դϴ�.\n", a, b, a * b);
	return a * b;
}

int div(int a, int b)
{
	printf("%d / %d = %d �Դϴ�.\n", a, b, a/b);
	return a / b;
}

//int Calculator(int a, int b, char c)
//{
//	if (c == '+')
//		return a + b;
//	else if (c == '-')
//		return a - b;
//	else if (c == '*')
//		return a * b;
//	else if (c == '/')
//		if (b == 0)
//		{
//			printf("0���� ���� �� �����ϴ�.");
//		}
//		else
//		{
//			return a / b;
//		}
//}