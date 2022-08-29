// 클래스 템플릿 특수화
#include <iostream>
using namespace std;

template <typename T>   // 일반화 
class CTest {
private:
	T data;
public:
	CTest(T adata) : data(adata) {};
	T getData() {
		return data;
	}
};
template <> // 특수화
class CTest<char>{ //특수화라 타입을 표시해줘야함 
private :
	char data;
public :
	CTest(char adata) : data(adata) { };
	char getData() { return data; }
};

int main()
{
	CTest<int> obj1(10);
	cout << obj1.getData() << endl;

	return 0;
}