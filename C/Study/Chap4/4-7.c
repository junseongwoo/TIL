#include <stdio.h>

int main()
{
	int a = 10, b = 20, res;

	// 레지스트에 있는 값을 바로 출력하는 형태
	// 출력하면 레지스트에 있는 값이 사라짐
	a + b;
	printf("%d + %d = %d\n", a, b, a + b); 

	// 그래서 res에 결과 값을 저장해서 사용하는게 좋다.
	res = a + b;
	printf("%d + %d = %d\n", a, b, res);

	
	return 0;
}