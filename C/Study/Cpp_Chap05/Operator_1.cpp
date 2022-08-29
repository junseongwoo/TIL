#include <iostream>

class MyTest {
private:
	int x;
	int y;

public:
	// 두개의 객체를 더하는 멤버함수를 만들어보라 
	MyTest() {}
	MyTest(int a, int b) { x = a; y = b; }

	// 내가 한것
	/*const MyTest sum(const MyTest& ssum)
	{
		return MyTest(x+ssum.x, y+ssum.y);
	}*/

	const MyTest sum(const MyTest& other) const {
		MyTest res;
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;
	}

	void printData() {
		printf("x : %d, y : %d\n", x, y);
	}

};


int main()
{
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj;
	obj = obj1.sum(obj2);

	obj.printData();

	return 0;
}