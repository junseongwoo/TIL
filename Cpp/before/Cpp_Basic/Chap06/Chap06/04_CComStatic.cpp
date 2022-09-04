/*
-- C���� Static
1. ���������� ����� static : ����� ���� �������� ������ �ϰڴٴ� �ǹ�
2. �Լ� ���� ����� statc : �ѹ��� �ʱ�ȭ�ǰ�, ���������� �޸� �Լ��� ���������� �Ҹ�x
*/

// �Լ� ���� ����� static ����
#include <iostream>
using namespace std;

void Counter()
{

	static int cnt;
	cnt++;
	cout << "Current cnt : " << cnt << endl;
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}

	return 0;
}