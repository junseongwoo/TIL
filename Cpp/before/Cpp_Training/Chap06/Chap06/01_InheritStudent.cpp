/*
-- Ŭ���� Ȯ�� 
Inheritance�� ������ �ǹ̴� �θ��� ��� ���� �ڽĿ��� �����ִ� �� 
OPP�� ��ӵ� ����ϴ�.

��ӿ� ���� �߻��ϴ� �������� ȿ��
1. ���� Ŭ������ ��Ȱ��
2. ���� �κ��� ���� Ŭ������ �����Ͽ� �ݺ��� ����
3. ������ ������ ������ Ŭ���� ������ �����Ͽ� �������� ����

�����Ϸ��� �θ� Ŭ������ ��� ����� �ڽ� Ŭ������ �����Ͽ� 
{} ��ȣ �ȿ� �ڽ��� �߰��� ����� ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human(const char *aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		std::cout << "�̸� = " << name << "���� = " << age << std::endl;
	}
};

class Student : public Human
{
private:
	int stunum;

public:
	Student(const char *aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		std::cout << "���̴� �� �̻��� �� �̻�� ��" << std::endl;
	}
};

int main()
{
	Human kim("�����", 29);
	kim.intro();
	Student han("���Ѱ�", 15, 123456);
	han.intro();
	han.study();
}