/*
-- �Լ��� ������� ���ø� ���� 
�Լ� ���ø��� �Լ��� ���� : �Լ��� ����� �����Ǿ� ������ �ڷ����� �����ؾ� �Ѵ�.
��, �Լ� ���ø��� �Լ��� ����� ������ �ȴ�. 
�Լ� ���ø��� �پ��� �ڷ����� �Լ��� ����� �� �� �ִ�.
*/

#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
	return num1 + num2;
}

int main()
{
	cout << Add<int>(15, 30) << endl;
	cout << Add<int>(1.3, 2.7) << endl;
	cout << Add<double>(15, 30) << endl;
	cout << Add<double>(1.3, 2.7) << endl;
}