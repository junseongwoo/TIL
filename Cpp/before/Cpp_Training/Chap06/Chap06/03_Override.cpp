/*
-- ����� �׼��� ����
Ŭ���� ������ ��� Ŭ���� �̸� �տ� ��� �׼��� �����ڰ� ���µ� 
��ӵǴ� ����� �׼��� �����ڸ� �ڽ� Ŭ�������� ��� ������ ������ �����Ѵ�.

-- ��� �Լ� ������
��� �� Ư���� ��츦 �����ϰ� ��� Ŭ������ ��� ����� �Ļ� Ŭ������ ������ ��� 
�� ��ġ �ʴ� ����� �ִٸ� �ڽ��� �� �� �ϳ��� ���ؾ��� 
(1) ���� �ʿ�ġ ���� ������ ������ ����, �Ⱦ��� �׸�
(2) �ʿ�� ������ �뵵�� ���� �ʴٸ� �ణ �ٲ� ���,
��ӹ��� ��� �Լ��� ���� �������� �ٽ� �����Ͽ� ������ �����ϴ� ���� 
������(Overrideing)��� �Ѵ�.
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
		std::cout << "���� ��" << std::endl;
	}

	void intro() {
		std::cout << stunum << " �й� ," << name << " �Դϴ�." << std::endl;
	}
};

int main()
{
	Human Woo("���ؼ�", 29);
	Woo.intro();
	Student Oh("���ֿ�", 30, 123456);
	Oh.intro();
}