#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	1. 5���� ��� ���̵�, ��� �̸�, �Ѵ� �޿��� �Է� �ް� ���
	2. 5�� ����� �޿� �Ѿװ� ��� �޿��� ���!
	3. �̸��� �����Ҵ翡 ����
 */

typedef struct employee
{
	int id;
	char* name;  
	int salary;
}Employee;

int main(void)
{
	Employee emp[5];
	char str[20];
	int i = 0;
	int total = 0;
	double avg;
	printf("������̵�, ����̸�, �޿��� �Է��ϼ���.\n");

	for (i = 0; i < 5; i++)
	{
		scanf("%d %s %d", &emp[i].id, str, &emp[i].salary);
		emp[i].name = (char*)malloc(strlen(str) + 1);
		if (emp[i].name != NULL) strcpy(emp[i].name, str);

		total += emp[i].salary;
	}

	printf("-----------------------------------------------\n");
	printf(" ���̵�    �̸�     �޿�");
	for (i = 0; i < 5; i++)
	{
		printf("%5d %5s %5d\n", emp[i].id, emp[i].name, emp[i].salary);
	}

	avg = total / 5;

	printf("-----------------------------------------------\n");
	printf("5�� ������ �޿� �Ѿ� : %d\n", total);
	printf("5�� ������ �޿� ��� : %.1lf\n", avg);


    return 0;
}