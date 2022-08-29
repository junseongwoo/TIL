#include <stdio.h>
#include <string.h>

class Parent
{
public:
	char classname[32];
	Parent() {
		strcpy(classname, "Parent");
	}

	virtual void PrintMe() {
		printf("I am parent\n");
	}
};

class Child : public Parent
{
private:
	int num;

public:
	Child(int anum) : num(anum) {
		strcpy(classname, "Child");
	}
	virtual void Printme() { printf("I am Child\n"); }
	void PrintNum() { printf("Hello Child = %d\n", num); }
};

void func(Parent* p)
{

}