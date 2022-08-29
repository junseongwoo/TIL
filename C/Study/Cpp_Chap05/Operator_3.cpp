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

	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y) {
		printf("복사 생성자 호출!!\n");
	}

	// 오퍼레이터 함수를 사용하여 객체를 더하기 
	const MyTest operator +(const MyTest& other) const {
		MyTest res;
		res.x = x + other.x;
		res.y = y + other.y;

		return res;
	}
	/*const MyTest operator -(const MyTest& other) const {
		MyTest res;
		res.x = x - other.x;
		res.y = y - other.y;

		return res;
	}*/
	
	friend const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2);
	/*const MyTest& operator =(const MyTest& other) {
		x = other.x;
		y = other.y;
		return *this;
	}*/

};

// 전역 함수 / 
// 클래스 밖에서 사용
// 매개변수 인자를 2개 사용
// 전역으로 연산자 함수를 만들었기 때문에 프렌드를 만들어줘야함 
// 클래스에서 전역함수를 사용할 수 있게 된다. 
const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2) {
	MyTest res;
	res.x = rhs1.x - rhs2.x;
	res.y = rhs1.y - rhs2.y;
	return res;
}

int main()
{
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj3;
	MyTest obj4;
	MyTest obj;

	//obj = obj1.sum(obj2);

	obj3 = obj1 + obj2;
	obj4 = obj1 - obj2;

	//obj = obj1.operator=(obj2);

	obj.printData();
	obj3.printData();
	obj4.printData();

	obj = operator-(obj1, obj2);
	obj.printData();

	return 0;
}