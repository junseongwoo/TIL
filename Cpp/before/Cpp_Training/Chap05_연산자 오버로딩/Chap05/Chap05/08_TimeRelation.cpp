/*
-- ���� ������
���� �����ڴ� ��ü���� ��
�� ���� ��ü�� ������,
Ȥ�� ��� ����� �����Ͽ� ��ü �񱳽��� ���ǹ��̳� �ݺ����� �ٷ� ��� ����
��� ���� Ÿ���� ��ü���� ���ϹǷ� ��� ������ �Լ��� �����ϴ� ���� ����
*/

#include <iostream>

class Time
{
	friend const Time operator +(int s, const Time& me);
private:
	int hour, min, sec;

public:
	Time() {}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		std::cout << hour << " : " << min << " : " << sec << std::endl;
	}
	bool operator ==(const Time& other) const {
		return (hour == other.hour && min == other.min && sec == other.sec);
	}

	bool operator != (const Time& other) const {
		return !(*this == other);
	}

	bool operator >(const Time& other) const {
		if (hour > other.hour) return true;
		if (hour < other.hour) return false;
		if (min > other.hour) return true;
		if (min < other.hour) return false;
		if (sec > other.hour) return true;
		return false;
	}

	bool operator >= (const Time& other) const {
		return (*this == other || *this > other);
	}

	bool operator <(const Time& other) const {
		return !(*this >= other);
	}

	bool operator <=(const Time& other) const {
		return !(*this >= other);
	}

};

int main()
{
	Time t1(12, 34, 56);
	Time t2(12, 34, 21);

	if (t1 == t2) {
		std::cout << "�� �ð��� ����!" << std::endl;
	}
	else
	{
		std::cout << "�� �ð��� �ٸ���!" << std::endl;
	}

	if (t1 > t2) {
		std::cout << "t1�� �� ũ��!" << std::endl;
	}
	else
	{
		std::cout << "t1�� �� �۴�!" << std::endl;

	}
}
