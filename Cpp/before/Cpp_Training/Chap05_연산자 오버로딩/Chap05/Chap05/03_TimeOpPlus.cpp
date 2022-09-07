/*
-- ���� ������ �Լ�
��ü���� �����ϴ� �Լ��� Ŭ���� ���� ����� ĸ��ȭ �ϴ� ���� �Ϲ��������� 
�μ��� ����� �����Ѵٸ� Ŭ���� �ܺ��� ���� �Լ��� �ۼ� ����
*/

#include <iostream>

class Time
{
	friend const Time operator +(const Time &me, const Time &other);

private:
	int hour, min, sec;

public:
	Time() {}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		std::cout << hour << " : " << min << " : " << sec << std::endl;
	}
};

const Time operator +(const Time &me, const Time &other) {
	Time t;
	t.sec = me.sec + other.sec;
	t.min = me.min + other.min; 
	t.hour = me.hour + other.hour;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour += t.min / 60;
	t.min %= 60;
	return t;
}

int main()
{
	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;

	t3 = t1 + t2;
	t3.OutTime();
}