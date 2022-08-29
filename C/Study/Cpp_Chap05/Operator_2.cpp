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
	
	// ���۷����� �Լ��� ����Ͽ� ��ü�� ���ϱ� 
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