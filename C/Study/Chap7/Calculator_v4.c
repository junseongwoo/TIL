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
	printf("%d + %d = %d 입니다.\n", n1, n2, n);*/

	while (1)
	{
		printf("실행 하시겠습니까? y/n\n");
		scanf(" %c", &order);
		if (order == 'y')
		{
			break;
		}
		else
		{
			printf("정수 두개를 입력하세요 :");
			scanf("%d %d", &n1, &n2);

			printf("수행할 연산을 입력하세요 :");
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
					printf("0으로 나눌 수 없습니다.\n");
				}
				else
				{
					n = div(n1, n2);
				}
			}
			else
			{
				printf("+, -, *, / 중 하나를 선택하세요.\n");
			}
		}
		
	}
	
	
	return 0;
}

int add(int a, int b)
{
	printf("%d + %d = %d 입니다.\n", a, b, a+b);
	return a + b;
}

int sub(int a, int b)
{
	printf("%d - %d = %d 입니다.\n", a, b, a-b);
	return a - b;
}

int mul(int a, int b)
{
	printf("%d * %d = %d 입니다.\n", a, b, a * b);
	return a * b;
}

int div(int a, int b)
{
	printf("%d / %d = %d 입니다.\n", a, b, a/b);
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
//			printf("0으로 나눌 수 없습니다.");
//		}
//		else
//		{
//			return a / b;
//		}
//}