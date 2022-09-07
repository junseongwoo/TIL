/*
-- C++ ����� Ư��
����� Ƚ���� ���̿��� ������ ����.
�纻�� ����ٰ� ������ �ѼյǴ� ���� �ƴϾ �ϳ��� �θ� ��Ŭ�����κ���
Ư���� ���ݾ� �ٸ� �ڽ� Ŭ������ �󸶵��� �Ļ� ���� 
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
};

class Graduate : public Student
{
protected:
	char thesis[32];

public :
	Graduate(const char *aname, int aage, int astunum, const char *athesis)
		: Student(aname, aage, astunum) {
		strcpy(thesis, athesis);
	}

	void research() {
		std::cout << thesis << " �����ϰ� �� ��" << std::endl;
	}
};

int main()
{
	Graduate Woo("���ؼ�", 29, 930, "������ ����");
	Woo.research();
}