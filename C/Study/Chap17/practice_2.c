#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
	1. 5명의 사원 아이디, 사원 이름, 한달 급여를 입력 받고 출력
	2. 5명 사원의 급여 총액과 평균 급여액 출력!
	3. 이름은 동적할당에 저장
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
	printf("사원아이디, 사원이름, 급여를 입력하세요.\n");

	for (i = 0; i < 5; i++)
	{
		scanf("%d %s %d", &emp[i].id, str, &emp[i].salary);
		emp[i].name = (char*)malloc(strlen(str) + 1);
		if (emp[i].name != NULL) strcpy(emp[i].name, str);

		total += emp[i].salary;
	}

	printf("-----------------------------------------------\n");
	printf(" 아이디    이름     급여");
	for (i = 0; i < 5; i++)
	{
		printf("%5d %5s %5d\n", emp[i].id, emp[i].name, emp[i].salary);
	}

	avg = total / 5;

	printf("-----------------------------------------------\n");
	printf("5명 직원의 급여 총액 : %d\n", total);
	printf("5명 직원의 급여 평균 : %.1lf\n", avg);


    return 0;
}