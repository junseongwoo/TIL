#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	//printf("사전에 나중에 나오는 과일 이름 : ");
	printf("앞에서 3개의 문자만 비교하면?\n");

	if (strncmp(str1, str2, 3) == 0)
	{
		printf("같다.\n");
		//printf("%s\n", str1);
	}
	else
		printf("다르다.\n");
		//printf("%s\n", str2);

	return 0;
}