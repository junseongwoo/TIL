#include <iostream>

class MyTest {
private:
	int x;
	int y;

public:
	// 두개의 객체를 더하는 멤버함수를 만들어보라 
	MyTest() {}
	MyTest(int a, int b) { x = a; y = b; }

	void printData() {
		printf("x : %d, y : %d\n", x, y);
	}
	
	// 오퍼레이터 함수를 사용하여 객체를 더하기 
	const MyTest operator +(const MyTest& other) const {
		MyTest res;
		res.x = x + other.x;
		res.y = y + other.y;
		
		return res;
	}

};


int main()
{
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj;
	//obj = obj1.sum(obj2);

	obj = obj1 + obj2;

	obj.printData();

	return 0;
}