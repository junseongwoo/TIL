#include <iostream>

class MyTest {
private:
	int x;
	int y;

public:
	// �ΰ��� ��ü�� ���ϴ� ����Լ��� ������ 
	MyTest() {}
	MyTest(int a, int b) { x = a; y = b; }

	void printData() {
		printf("x : %d, y : %d\n", x, y);
	}

	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y) {
		printf("���� ������ ȣ��!!\n");
	}

	// ���۷����� �Լ��� ����Ͽ� ��ü�� ���ϱ� 
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

// ���� �Լ� / 
// Ŭ���� �ۿ��� ���
// �Ű����� ���ڸ� 2�� ���
// �������� ������ �Լ��� ������� ������ �����带 ���������� 
// Ŭ�������� �����Լ��� ����� �� �ְ� �ȴ�. 
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