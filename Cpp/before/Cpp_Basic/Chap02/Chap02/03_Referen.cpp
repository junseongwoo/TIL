#include <iostream>
using namespace std;

int main(void)
{
	// �����ڴ� �ڽ��� �����ϴ� ������ ����� �� �ִ� �� �ϳ��� �̸� 
	// int num1 = 2010
	// int &num2 = num1 -> ���� num1�� ���� ������ num2 ���� 
	// num1, num2 -> 2010 
	// num2 = 3000 
	// num1, num2 -> 3000 

	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;
	cout << "VAL : " << num1 << endl; 
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;
	return 0;
}