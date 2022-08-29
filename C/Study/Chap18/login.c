/*
	로그인 프로그램
	1. id와 password 를 저장하고 파일이름은 password.txt
	2. 구조체 login 변수에 아이디 id, password 멤버에 각각 저장을 시키고
	3. 키보드로 입력되는 id와 pw를 비교하여
	   맞으면 "로그인", 틀리면 "id를 찾을 수 없습니다." 라는 메세지 출력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct member {
	char id[20];
	char password[20];
};

int main(void)
{
	struct member m;
	char id[20];
	char password[20];
	FILE* fp;
	int res;

	fp = fopen("password.txt", "r");

	if (fp == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		res = fscanf(fp, "%s%s", &m.id, &m.password);
		if (res == EOF)
		{
			break;
		}
	}
	/*printf("저장된 아이디는 : %s\n", m.id);
	printf("저장된 비밀번호 : %s\n", m.password);
	printf("%d\n", strlen(m.id));
	printf("%d\n", strlen(m.password));*/

	printf("아이디를 입력하세요 : ");
	scanf("%s", id);
	printf("비밀번호를 입력하세요 : ");
	scanf("%s", password);

	/*printf("입력된 아이디는 : %s\n", id);
	printf("입력된 비밀번호 : %s\n", password);
	printf("%d\n", strlen(id));
	printf("%d\n", strlen(password));*/

	// 문자열 비교 함수 strcmp 
	// 문자열 파트 다시 공부 할 것 
	printf("---------------------------\n");
	if (strcmp(id, m.id) == 0) 
	{
		if (strcmp(password, m.password) == 0)
		{
			printf("로그인 되었습니다.\n");
		}
	}
	else
	{
		printf("아이디 / 비밀번호를 다시 입력해주세요.\n");
	}
	
	fclose(fp);

	return 0;
}
