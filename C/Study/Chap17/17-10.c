#include <stdio.h>

union student
{
	int num;
	double grade;
};

int main(void)
{
	union student s1 = { 315 };

	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;

	// 공용체의 메모리는 사용되는 변수중에 가장 큰 변수의 크기를
	// 크기로 가지고 공유한다.
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);

	printf("%d\n", sizeof(s1));
	return 0;
}