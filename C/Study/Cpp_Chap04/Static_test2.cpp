#include <iostream>

class StaticTest {
	static int a; // static ��� ����
	int b;
public:
	StaticTest();
	static void setData(int);
	void getData();
};
int StaticTest::a = 20; // static ������� �ʱ�ȭ( �ܺο��� �ʱ�ȭ �Ѵ�. )
						// -��ü���� �������� �ʴ´�.
StaticTest::StaticTest()
{
	b = 20;
}
void StaticTest::getData()
{
	printf("b : %d\n", b);
}
void StaticTest::setData(int aa)
{
	a = aa;
}

int main()
{

	return 0;
}