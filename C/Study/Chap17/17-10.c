#include <stdio.h>

union student
{
	int num;
	double grade;
};

int main(void)
{
	union student s1 = { 315 };

	printf("�й� : %d\n", s1.num);
	s1.grade = 4.4;

	// ����ü�� �޸𸮴� ���Ǵ� �����߿� ���� ū ������ ũ�⸦
	// ũ��� ������ �����Ѵ�.
	printf("���� : %.1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num);

	printf("%d\n", sizeof(s1));
	return 0;
}