#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	//printf("������ ���߿� ������ ���� �̸� : ");
	printf("�տ��� 3���� ���ڸ� ���ϸ�?\n");

	if (strncmp(str1, str2, 3) == 0)
	{
		printf("����.\n");
		//printf("%s\n", str1);
	}
	else
		printf("�ٸ���.\n");
		//printf("%s\n", str2);

	return 0;
}