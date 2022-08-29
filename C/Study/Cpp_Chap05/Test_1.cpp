#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char* name;
	int age;

public :
	Human(){}
	Human(const char *aname, const int aage)
	{
		this->name = new char[strlen(aname) + 1];
		strcpy(this->name, aname);

		this->age = aage;
	}
	const Human(const Human& other) {
		this->name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
	}
	/*const Human& operator =(const Human& other) 
	{
		this->name = new char[10];
		strcpy(this->name, other.name);
		this->age = other.age;

		return *this;
	}*/

	const Human& operator =(const Human& other)
	{
		Human man;
		man.name = new char[strlen(other.name) + 1];
		strcpy(man.name, other.name);
		printf("%s\n", other.name);
		man.age = other.age;
		printf("%d\n", other.age);

		return man;
	}

	~Human()
	{
		delete[] name;
	}

	void pirntHuman()
	{
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

int main()
{
	Human my("우준성", 27);
	my.pirntHuman();

	Human youH(my);
	youH.pirntHuman();

	Human man1;
	man1 = my;

	man1.pirntHuman();
}