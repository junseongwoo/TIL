// ����Ʈ ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human() {
		strcpy(name, "�̸�����");
		age = 0;
	}

	void intro() {
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human momo; // ����Ʈ �����ڸ� ������ ��ȣ�� ���� �����

	// ��ȣ�� ������
	Human momo2 = Human(); 
	// ���� ���·� ����Ѵ�. �̴� ��ü�� �����ϴ� ���� �ƴ϶� 
	// Human Ÿ���� ��ü�� �����ϴ� �Լ��� ������ �����ϴ� �� 
	momo.intro();
}