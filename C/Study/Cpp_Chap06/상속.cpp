#include <iostream>
using namespace std;

class Human
{
private:
	char* name;
public:
	Human(const char* aname)
	{	
		// strcpy_s �� ����� ī��
		int len = strlen(aname) + 1;
		name = new char[len];
		strcpy_s(name, len, aname);

		/*aname = new char(strlen(aname) + 1);
		strcpy(name, aname);*/
	}
	~Human() {
		delete[] name;
	}
	void printname() {
		cout << "My name is " << name << endl;
	}
};

// Ŭ������ �ϳ� �� ���� : �̸��� : student : ���� �ִ� 
// �޸��̶�� Ŭ������ ����� �ް� // Ŭ���� �ȿ��� major��� char �� ������ ���� 
// printmajor ��� �Լ� ���� student Ÿ���� ��ü�� �����ϰ� 
// Student s("�̸�" , "IOT");
// s.printMajor(); // my name is ȫ�浿 My major is Iot

class Student : public Human
{
protected:
	char* major;

public:
	Student(const char* aname, const char* amajor) : Human(aname) {
		
		int len = strlen(aname) + 1;
		major = new char[len];
		strcpy_s(major, len, amajor);
		
		
	}
	~Student() {
		delete[] major;
	}
	
	void printMajor() {
		printname(), cout << "My major is " << major <<endl;

	}
};

int main()
{
	/*Human my("���ؼ�");
	my.printname();*/

	Student my2("���ؼ�", "IoT");
	my2.printMajor();

	return 0;
}