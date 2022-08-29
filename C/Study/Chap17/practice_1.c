/*
	1. 5명의 사원 아이디, 사원 이름, 한달 급여를 입력 받고 출력
	2. 5명 사원의 급여 총액과 평균 급여액 출력!
	3. 이름은 동적할당에 저장
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
	int i;
	char name[20];  // 동적 할당이 아님.. 
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
		printf("사원의 아이디, 이름, 급여(만원)를 입력하세요 : ");
		scanf("%d %s %d", &(emp[i].i), &(emp[i].name), &(emp[i].salary));

		total += emp[i].salary;
	}
	
	printf("%d\n", total);
	avg = total / 5;
	printf("%.1lf\n", avg);

	printf("  아이디    이름      급여\n");
	for (i = 0; i < 5; i++)
	{
		printf("%5d%10s%10d\n",
			emp[i].i, emp[i].name, emp[i].salary);
	}

	return 0;
}