/*
-- ���ܻ�Ȳ�� ó������ �ʾ��� ���� ���
C++���� ���ϴ� ����(exception)�� ���α׷��� ���� ���߿� �߻��ϴ� ������Ȳ�� �ǹ� 
�����Ͻÿ� �߻��ϴ� �������� ������ ������ ���ֿ� ���Ե��� �ʴ´�.
*/

#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "�� ���� ���� �Է�: ";
	cin >> num1 >> num2;

	cout << "�������� ��: " << num1 / num2 << endl;
	cout << "�������� ������: " << num1 % num2 << endl;
}