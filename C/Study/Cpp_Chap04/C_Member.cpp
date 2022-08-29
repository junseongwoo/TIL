#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// getDate() ȣ���ϸ� ȸ�� �̸� �ּ� ��ȭ��ȣ ��� 

class CMember
{
private :
	char name[10];
	char addr[50];
	char number[14];
	static int cnt;
public : 
	CMember(const char *aname, const char *aaddr, const char *anumber)
	{
		strcpy(this->name, aname);
		strcpy(this->addr, aaddr);
		strcpy(this->number, anumber);
		cnt++;
	}
	~CMember()
	{
		cnt--;
	}
	void getData() {
		printf("-------------------------\n");
		printf("ȸ�� �̸� : %s\n", name);
		printf("ȸ�� �ּ� : %s\n", addr);
		printf("ȸ�� ��ȭ ��ȣ : %s\n", number);
		printf("-------------------------\n");
	}

	static void OutCount() {
		printf("��ü ���� = %d\n", cnt);
	}

	void setData() {

	}
};

int CMember::cnt = 0;

int main()
{
	CMember m1("���ؼ�", "�λ곲��", "010-3092-1890");
	m1.getData();

	CMember m2("���ؼ�2", "�ؿ�뱸", "999-999-9999");
	m2.getData();

	CMember::OutCount();

	return 0;
}