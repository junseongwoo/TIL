/*
-- ��Ӱ� ���� ����
�θ� Ŭ������ ��� ����� �ڽ� Ŭ������ ��� 
�׷��� ��� �޴� �Ͱ� ������� ����ϴ� ���� �ٸ� ����

�ڽ��� �θ��� ����� ���������� �θ� ������� ���� ����� ������� ���� �� ����.
private ����� ������ �ڱ� �ڽŸ� ��� �� �� �ֱ� ������ 
��� ������ �ڽ� Ŭ������ �ܺη� ���ֵǾ� �׼����� �Ұ����ϴ�.

protected �� �ܺο����� �� ����� ���� �� ������
�ڽ� Ŭ���������� ���� �� �ִ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char *aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		std::cout << "�̸� = " << name << ", ���� = " << age << std::endl;
	}
};

class Student : public Human
{
protected:
	int stunum;

public:
	Student(const char *aname, int aage, int astunum) : Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		std::cout << "�����ߴ� ����" << std::endl;
	}

	void report() {
		std::cout << "�̸� = " << name << ", �й� = " << stunum << std::endl;
	}
};

int main()
{
	Student Woo("���ؼ�", 29, 930430);
	Woo.intro();
	Woo.study();
	Woo.report();
}