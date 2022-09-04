/*
- ���� �����ڰ� ȣ��Ǵ� ����?
case 1 : ������ ������ ��ü�� �̿��ؼ� ���ο� ��ü�� �ʱ�ȭ�ϴ� ��� 
case 2 : Call-by-value ����� �Լ�ȣ�� �������� ��ü�� ���ڷ� �����ϴ� ���
case 3 : ��ü�� ��ȯ�ϵ�, ���������� ��ȯ���� �ʴ� ��� 
*/

/*
- �޸� ������ �Ҵ�� �ʱ�ȭ�� ���ÿ� �Ͼ�� ��Ȳ
ex) int num1 = num2;

- �Լ��� ���� ��ȯ�ϸ�, ������ �޸� ������ �Ҵ�ǰ�, �� ������ ��ȯ ���� ����ȴ�
---- ��ȯ ������ �ʱ�ȭ �ȴ�
*/

/*
�Ҵ� ����, ���� �����ڸ� ���� �ʱ�ȭ
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public: 
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	void ShowData()
	{
		cout << "num : " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)
{
	ob.ShowData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFuncObj(obj);
	cout << "�Լ�ȣ�� ��" << endl;

	return 0;
}