/*
-- �迭���� ���� �迭 Ŭ����
[] ������ �����ε��� ����Ͽ� �迭 Ŭ������ �����.

arrObject[2]�� �ؼ�
(1) ��ü arrObject�� ����Լ� ȣ��� �̾�����.
(2) �����ڰ� [] �̹Ƿ� ����Լ��� �̸��� 'operator []' �̴�.
(3) �Լ�ȣ�� �� ���޵Ǵ� ������ ���� ���� 2�̴�.

��, arrObject[2] == arrObject.operator[] (2); 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class BoundCheckIntArray
{
private:
	int * arr;
	int arrlen;

public:
	BoundCheckIntArray(int len) : arrlen(len)
	{
		arr = new int[len];
	}
	int & operator[] (int idx)
	{
		if (idx < 0 || idx >= arrlen)
		{
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	~BoundCheckIntArray()
	{
		delete[]arr;
	}
};

void main()
{
	BoundCheckIntArray arr(5);
	for (int i = 0; i < 5; i++)
	{
		arr[i] = (i + 1) * 11;
	}
	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << endl;
	}
}