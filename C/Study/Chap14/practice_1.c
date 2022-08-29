// 회문 앞으로 읽나 뒤로 읽나 똑같은거
// 회문인지 아닌지 확인하는 것 

// 입력 받은 단어의 길이를 구하고 길이/2 를 해서 기준점을 잡음 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s[30];
	int len;
	int cnt = 0;
	int i;

	printf("문자열을 입력하세요 : ");
	scanf("%s", &s);

	printf("%s\n", s);
	
	
	len = strlen(s);
	printf("%d\n", len);
	printf("%d\n", len/2);
	printf("%c\n", s[len]);

	for (i = 0; i < (len / 2); i++)
	{
		if (s[i] != s[len-i-1])
		{
			cnt = 1;
			break;
		}
	}

	if (cnt == 1)
	{
		printf("회문이 아닙니다.\n");
	}
	else
	{
		printf("회문 입니다.\n");
	}

	

	return 0;
}