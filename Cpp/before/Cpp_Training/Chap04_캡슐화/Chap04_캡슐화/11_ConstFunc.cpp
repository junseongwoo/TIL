/*
-- ��� ��� �Լ��� ��ü�� ���¸� �б⸸ �ϴ� �Լ� 

�Լ� ������ ������ ���� Ÿ���� �����ϱ� ������ const �����ڸ� �Լ��� �ڿ� ����
��� ������ �б⸸ �ϰ� �������� �ʴ´ٰ� �˸��� ���̴�.
*/

#include <iostream>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) {
		SetTime(h, m, s);
	}

	void SetTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() const {
		std::cout << "���� �ð��� " << hour << " : " << min
			<< " : " << sec << std::endl;
	}
};

int main()
{
	Time now(12, 34, 56);
	now.SetTime(11, 22, 33);
	now.OutTime();

	const Time meeting(16, 00, 00);
	meeting.OutTime();
}
