/*6251891
-- C++������ Static
--- ���������� �ʿ��� ��Ȳ 
*/

#include <iostream>
using namespace std;

int simObjCnt = 0; // SoSimple Ŭ������ ���� ��������
int cmxObjCnt = 0; // SoComplex Ŭ������ ���� ��������

class SoSimple
{
public:
	SoSimple()
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};

class SoComplex
{
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}

	SoComplex(SoComplex &copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}

};

int main(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex com1;
	SoComplex com2 = com1;
	SoComplex();

	return 0;
}