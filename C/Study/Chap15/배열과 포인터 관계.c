#include <stdio.h>

int main()
{
	int a = 10;
	int* pa = &a;
	printf("%p %p\n", &a, pa);
	printf("================================\n");

	int ary1[2] = { 1,2 };
	int* pary1 = ary1;
	// 다른 타입의 포인터에 넣는것은 상관없지만 
	char* pary2 = ary1;       // 주소 값이 달라지고 데이터를 넣을 시 문제 방지

	printf("%p %p\n", ary1, pary1);
	printf("%p %p\n", ary1, pary2);
	printf("%p %p\n", ary1 + 1, pary1 + 1);
	printf("%p %p\n", ary1 + 1, pary2 + 1);
	printf("================================\n");

	char ary2[2] = { 'a', 'b' };
	char pary3 = ary2;
	printf("%p %p\n", ary2, pary3);
	printf("%p %p\n", ary2 + 1, pary3 + 1);

	printf("================================\n");
	int ary3[][2] = { {1,2}, {3,4} };
	int* pary4 = ary3;
	int (*pary5)[2] = ary3;
	printf("%p %p\n", ary3, pary4);
	printf("%p %p\n", ary3 + 1, pary4 + 1);
	printf("%p %p\n", ary3 + 1, pary5 + 1);
	printf("================================\n");
	char* ary4[2] = { "hi", "good" };  // 포인터 배열
	
	return 0;
}