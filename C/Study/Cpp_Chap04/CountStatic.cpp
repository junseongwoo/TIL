#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

class Simple
{
private:
	int value;
	static int count;

public:
	Simple() { count++; }
	~Simple() { count--; }
	void OutCount() {
		printf("���� ��ü ���� = %d\n", count);
	}
};
int Simple::count = 0;

int main()
{
	Simple s, * ps;
	s.OutCount();
	ps = new Simple;
	ps->OutCount();
	delete ps;
	s.OutCount();
	printf("ũ�� = %d\n", sizeof(s));
}
