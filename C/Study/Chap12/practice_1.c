#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 소-대 서로 바꾸기

int main(void)
{
	char str1;

	printf("소문자, 혹은 대문자를 입력하세요 : ");
	scanf("%c", &str1); // scanf 쓸 때 주소 연산자 쓰기

	if ((str1 >= 'A') && (str1 <= 'Z'))
	{
		str1 = str1 + ('a' - 'A');
	}
	else
	{
		str1 = str1 - ('a' - 'A');
	}

	printf("변환된 문자 : %c\n", str1);

	return 0;
}