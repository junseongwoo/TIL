/*
-- static ����Լ�
static ����Լ��� static ��������� ����
1. ����� Ŭ������ ��� ��ü�� ����
2. public�� ����Ǹ�, Ŭ������ �̸��� �̿��� ȣ�� ����
3. ��ü�� ����� �����ϴ� ���� �ƴ�

��, static ����Լ� �������� static ��������� static ����Լ��� ȣ�� ���� 
*/

// cosnt static ���
// Ŭ���� ���� ����� const ��������� �ʱ�ȭ�� �̴ϼȶ������� ���ؾ߸���
// const static���� ����Ǵ� ��������� ����� ���ÿ� �ʱ�ȭ�� ����

#include <iostream>
using namespace std;

class CounteryArea
{
public:
	// const static ��������� Ŭ������ ���ǵ� �� �����Ǵ� ����̱� ������ �ʱ�ȭ�� ����
	const static int RUSSIA = 1707540;
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main(void)
{
	cout << "���þ� ���� : " << CounteryArea::RUSSIA << "km" << endl;
	cout << "ĳ���� ���� : " << CounteryArea::CANADA << "km" << endl;
	cout << "�߱� ���� : " << CounteryArea::CHINA << "km" << endl;
	cout << "�ѱ� ���� : " << CounteryArea::SOUTH_KOREA << "km" << endl;

	return 0;
}