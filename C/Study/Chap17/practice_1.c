/*
	1. 5���� ��� ���̵�, ��� �̸�, �Ѵ� �޿��� �Է� �ް� ���
	2. 5�� ����� �޿� �Ѿװ� ��� �޿��� ���!
	3. �̸��� �����Ҵ翡 ����
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
	int i;
	char name[20];  // ���� �Ҵ��� �ƴ�.. 
	int salary;
}Employee; 

int main(void)
{
	Employee emp[5];

	int i;
	int total = 0;
	double avg;

	for (i = 0; i < 5; i++)
	{
		printf("����� ���̵�, �̸�, �޿�(����)�� �Է��ϼ��� : ");
		scanf("%d %s %d", &(emp[i].i), &(emp[i].name), &(emp[i].salary));

		total += emp[i].salary;
	}
	
	printf("%d\n", total);
	avg = total / 5;
	printf("%.1lf\n", avg);

	printf("  ���̵�    �̸�      �޿�\n");
	for (i = 0; i < 5; i++)
	{
		printf("%5d%10s%10d\n",
			emp[i].i, emp[i].name, emp[i].salary);
	}

	return 0;
}