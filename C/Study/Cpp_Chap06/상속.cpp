#include <iostream>
using namespace std;

class Human
{
private:
	char* name;
public:
	Human(const char* aname)
	{	
		// strcpy_s 를 사용한 카피
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

// 클래스를 하나 더 만듬 : 이름은 : student : 위에 있는 
// 휴먼이라는 클래스를 상속을 받고 // 클래스 안에는 major라는 char 형 포인터 선언 
// printmajor 멤버 함수 가짐 student 타입의 객체를 선언하고 
// Student s("이름" , "IOT");
// s.printMajor(); // my name is 홍길동 My major is Iot

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
	/*Human my("우준성");
	my.printname();*/

	Student my2("우준성", "IoT");
	my2.printMajor();

	return 0;
}