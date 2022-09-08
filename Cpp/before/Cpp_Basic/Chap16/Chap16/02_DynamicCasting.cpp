/*
-- dynamic_cast : ��Ӱ��迡���� ������ �� ��ȯ
���� : dynamic_cast<T>(expr)
T�� ��ȯ�ϰ��� �ϴ� �ڷ����� �̸��� �ε�, ��ü�� ������ �Ǵ� �������� �;��� 
expr�� ��ȯ�� ����� �;���.
�䱸�� �� ��ȯ�� �������� ���� ��� ������ ���� �߻�

������ �� ��ȯ : ��Ӱ��Կ� ���� �ִ� �� Ŭ���� ���̿��� ���� Ŭ������ ������ 
�� ������ �����͸� ���� Ŭ������ ������ �� ������ �����ͷ� �� ��ȯ �ϴ� ���

dynamic_cast �ǹ� : ��Ӱ��迡 �ִ� ����Ŭ������ ������ �� ������ �����͸� 
���� Ŭ������ ������ �� ������ �����ͷ� �� ��ȯ�ϰڴ�! 
*/

#include <iostream>
using namespace std;

class Car
{
private:
	int fuelGauge;

public:
	Car(int fuel) : fuelGauge(fuel)
	{}
	void ShowCarState() { cout << "�ܿ� ����� : " << fuelGauge << endl; }
};

class Truck : public Car
{
private:
	int freightWeight;

public:
	Truck(int fuel, int weight)
		: Car(fuel), freightWeight(weight)
	{}

	void ShowTruckState()
	{
		ShowCarState();
		cout << "ȭ���� ���� : " << freightWeight << endl;
	}
};

int main()
{
	Car * pcar1 = new Truck(80, 200);
	Truck *ptruck1 = dynamic_cast<Truck*>(pcar1);

	Car * pcar2 = new Car(120);
	Truck *ptruck2 = dynamic_cast<Truck*>(pcar2);

	Truck *ptruck3 = new Truck(70, 150);
	Car * pcar3 = dynamic_cast<Car*>(ptruck3);
}