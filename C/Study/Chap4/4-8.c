#include <stdio.h>

int main(void)
{
	// 형변환은 항상 오른쪽에서 시켜야한다.
	// 
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);


	return 0;
}