// ȸ�� ������ �г� �ڷ� �г� �Ȱ�����
// ȸ������ �ƴ��� Ȯ���ϴ� �� 

// �Է� ���� �ܾ��� ���̸� ���ϰ� ����/2 �� �ؼ� �������� ���� 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char s[30];
	int len;
	int cnt = 0;
	int i;

	printf("���ڿ��� �Է��ϼ��� : ");
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
		printf("ȸ���� �ƴմϴ�.\n");
	}
	else
	{
		printf("ȸ�� �Դϴ�.\n");
	}

	

	return 0;
}