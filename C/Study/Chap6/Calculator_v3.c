#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, n;
	char order;

	while (1)
	{
		printf("종료 하시겠습니까? : y/n\n");
		scanf(" %c", &order);

		if (order == 'y')
			break;

		else
		{
			printf("정수 두개를 입력하세요 : ");
			scanf("%d %d", &n1, &n2);

			printf("연산 기호를 입력하세요 : ");
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
					printf("0으로 나눌 수 없습니다.\n");
				}
			}
			else
			{
				printf("사칙연산을 제대로 입력해주세요.\n");
			}
		}
	}


	return 0;
}