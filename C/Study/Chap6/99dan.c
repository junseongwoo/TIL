#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	int n;
	int mul;


	printf("����� ����Ͻðڽ��ϱ�? : ");
	scanf("%d", &n);
	

	if (n != 0)
	{
		printf("%d��\n", n);
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
	}
	else
		printf("�ٽ� �Է��ϼ���!");

	/*switch (n)
	{
	case 1:
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
			break;
	case 2:
		for(i=1; i<10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
		break;
	case 3:
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
		break;
	case 4:
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
		break;
		
	case 5:
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
		break;
	case 6:
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
		break;
	case 7:
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
		break;
	case 8:
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
		break;
	case 9:
		for (i = 1; i < 10; i++)
		{
			mul = n * i;
			printf("%d x %d = %d\n", n, i, mul);
		}
		break;
	default:
		printf("1~9������ ������ �Է��ϼ���\n");
		break;
	}*/


	/*for (i = 1; i < 10; i++)
	{
		printf("%d��\n", i);
		for (j = 1; j < 10; j++)
		{
			mul = i * j;
			
			printf("%d x %d = %d\n",i,j,mul);
		}
	}*/


	return 0;
}