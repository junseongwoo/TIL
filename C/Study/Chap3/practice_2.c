#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	char b;
	printf("정수하나를 입력하세요 : $ ");
	scanf("%d", &a);
	getchar();
	printf("문자하나를 입력하세요 : $ ");
	scanf("%c", &b); // 띄워쓰기로 엔터 값을 빼주는거임 버퍼에 있는 엔터값

	printf("입력된 값은 %d, %c 입니다.\n", a, b);

	return 0;
}