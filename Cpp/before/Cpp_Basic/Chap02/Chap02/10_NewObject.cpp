#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdlib.h>
using namespace std;

class Simple
{
public: 
	Simple()
	{
		cout << "I am simple constructor!" << endl;
	}
};

int main(void)
{
	cout << "case 1: ";
	// new �����ڸ� �̿��ؼ� �� ������ ���� �Ҵ�
	Simple * sp1 = new Simple; 

	cout << "case 2: ";
	// malloc �Լ�ȣ���� ���ؼ� �� ������ ������ �Ҵ� 
	Simple * sp2 = (Simple*)malloc(sizeof(Simple) * 1);

	cout << endl << "end of main" << endl;

	// �Ҵ� ����� ���� �Ҹ� 
	delete sp1;
	free(sp2);

	return 0;
}