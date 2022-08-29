#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[20];
	char addr[50];
	int age;

	printf("이름을 입력하세요 : ");
	scanf("%s", name);
	printf("주소를 입력하세요 : ");
	scanf("%s", addr);
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	printf("이름 : %s\n주소 : %s\n나이 : %d", name, addr, age);

	return 0;
}