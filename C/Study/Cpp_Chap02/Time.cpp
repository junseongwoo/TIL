#include <stdio.h>

class Time
{
private:
	int hour, min, sec;
	
public:
	void SetTime(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() {
		printf("���� �ð��� %d:%d:%d�Դϴ�\n", hour, min, sec);
	}
};

class Date
{
private:
	int year, month, day;
public:
	void SetDate(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}

	void OutTime() {
		printf("���� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", year, month, day);
	}
};

int main()
{
	Time now;
	Date d;
	now.SetTime(12, 30, 40);
	now.OutTime();

	d.SetDate(2021, 5, 31);
	d.OutTime();
}