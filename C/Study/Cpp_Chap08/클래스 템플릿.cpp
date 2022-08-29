// 클래스 템플릿
#include <iostream>
using namespace std;

template <typename T>   // 일반화 
class CTest {
private:
	T num;
public:
	CTest(T anum) : num(anum) {};

	void printData() {
		cout << "num : " << num << endl;
	}

};

int main()
{
	CTest<int> obj(10);
	obj.printData();
}