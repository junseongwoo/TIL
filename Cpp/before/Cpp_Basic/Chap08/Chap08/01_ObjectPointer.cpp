/*
-- ��ü �������� ��������
��ü ������ ���� : ��ü�� �ּ� ���� �����ϴ� ������ ����

��ü �����ʹ� ��ü �Ӹ��ƴ϶� ��ü�� ����ϴ� ���� Ŭ������ ��ü�� ����ų �� �ִ�.

C++ ���� A�� ������ ������ 
A��ü �Ǵ� A�� ����, ���������� ����ϴ� ��� ��ü�� ����ų �� �ִ�.
( ��ü�� �ּ� ���� ������ �� �ִ�. )`
*/

#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public :
	void Study() { cout << "Study" << endl; }
};

class  PartTimeStudent : public Student
{
public :
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	Person *ptr1 = new Person();
	Student *ptr2 = new Student();
	PartTimeStudent *ptr3 = new PartTimeStudent();
	ptr1->Sleep();
	ptr2->Study();
	ptr3->Work();
	delete ptr1;
	delete ptr2;
	delete ptr3;

	return 0;
}