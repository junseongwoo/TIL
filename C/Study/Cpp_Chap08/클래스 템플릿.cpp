// Ŭ���� ���ø�
#include <iostream>
using namespace std;

template <typename T>   // �Ϲ�ȭ 
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