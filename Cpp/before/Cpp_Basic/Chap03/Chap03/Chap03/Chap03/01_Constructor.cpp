#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private: 
	char name[12];
	int age;

public:
	// ������ 
	// �����ڴ� �����Ϸ��� �ڵ����� ȣ���ϱ� ������ 
	// Ŭ������ �̸��� ���� �ʱ�ȭ�� ����� ���ϰ��� ����. 
	Human(const char *aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	// �����ڸ� ȣ���ϴ� 2���� ���
	// 1. ������� ��� Human Kim = Human("�����", 29);
	// 2. �Ͻ����� ��� Human kim("�����" , 29);
	Human kim("�����", 29);
	kim.intro();
}