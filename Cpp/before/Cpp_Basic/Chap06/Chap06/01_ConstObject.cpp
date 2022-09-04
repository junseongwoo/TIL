/*
-- const ��ü�� const ��ü�� Ư����
ex) const int num = 10;     // ������ ���ȭ �ϵ���
ex) const SoSimple sim(20); // ��ü�� ���ȭ �� �� �ִ�.
��ü�� const�� �ٰ� �Ǹ� ��ü�� ������ ������ ������� �ʴ´�.
������ const ��� �Լ��� ȣ�⸸ ����ϴ� �� 
*/

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{

	}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	obj.ShowData();
	return 0;
}