/*
��ü���� ���� �޶����� �ʴ� ������ ������ ���� ��� ����� ����
*/

#include <iostream>

class MathCalc
{
private:
	static const double pie;

public:
	MathCalc() {}
	void DoCalc(double r) {
		std::cout << "�������� " << r << "�� ���� �ѷ� = " << r * pie << std::endl;
	
	}
};
const double MathCalc::pie = 3.1416;

int main()
{
	MathCalc m;
	m.DoCalc(5);
}