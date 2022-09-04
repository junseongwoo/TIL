//��ü�� ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char *pname;
	int age;

public:
	Human(const char *aname, int aage)
	{
		pname = new char[strlen(aname) + 1];
		strcpy(pname, aname);
		age = aage;
		printf("== <%s> ��ü ���� == \n", pname);
	}

	~Human()
	{
		printf("==<%s> ��ü�� �ı� ==\n", pname);
		delete[] pname;
	}

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", pname, age);
	}
};

int main()
{
	Human boy("�����", 12);
	boy.intro(); // ��ü�� �������� ȣ�� �ؼ� .intro() ��� 

	Human *leo; 
	leo = new Human("��ī������", 40);
	leo->intro(); // ��ü�� �����ͷ� ȣ�� �߱⶧���� -> ���
	delete leo;   
	// �������� ȣ���� ��ü�� ������ ����� �ڵ����� �ı�
	// �������� ȣ���� ��ü�� delete�� �ı� ������� 
}