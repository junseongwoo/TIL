/*
-- ��� �̴ϼȶ������� �̿��� ���� �� const ��� �ʱ�ȭ 
-- �̴ϼȶ������� �̿��ϸ� ����� ���ÿ� �ʱ�ȭ�� �̷����� ���·� ���̳ʸ� �ڵ尡 ����
-- const ��������� �̴ϼȶ������� �̿��ϸ� �ʱ�ȭ�� �����ϴ�! 
*/

#include <iostream>
using namespace std;

class FruitSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money)
		// �̴ϼȶ����� �ʱ�ȭ
		: APPLE_PRICE(price), numOfApples(num), myMoney(money)
	{
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

};
