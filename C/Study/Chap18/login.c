/*
	�α��� ���α׷�
	1. id�� password �� �����ϰ� �����̸��� password.txt
	2. ����ü login ������ ���̵� id, password ����� ���� ������ ��Ű��
	3. Ű����� �ԷµǴ� id�� pw�� ���Ͽ�
	   ������ "�α���", Ʋ���� "id�� ã�� �� �����ϴ�." ��� �޼��� ���
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
		printf("������ ���� ���߽��ϴ�.\n");
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
	/*printf("����� ���̵�� : %s\n", m.id);
	printf("����� ��й�ȣ : %s\n", m.password);
	printf("%d\n", strlen(m.id));
	printf("%d\n", strlen(m.password));*/

	printf("���̵� �Է��ϼ��� : ");
	scanf("%s", id);
	printf("��й�ȣ�� �Է��ϼ��� : ");
	scanf("%s", password);

	/*printf("�Էµ� ���̵�� : %s\n", id);
	printf("�Էµ� ��й�ȣ : %s\n", password);
	printf("%d\n", strlen(id));
	printf("%d\n", strlen(password));*/

	// ���ڿ� �� �Լ� strcmp 
	// ���ڿ� ��Ʈ �ٽ� ���� �� �� 
	printf("---------------------------\n");
	if (strcmp(id, m.id) == 0) 
	{
		if (strcmp(password, m.password) == 0)
		{
			printf("�α��� �Ǿ����ϴ�.\n");
		}
	}
	else
	{
		printf("���̵� / ��й�ȣ�� �ٽ� �Է����ּ���.\n");
	}
	
	fclose(fp);

	return 0;
}
