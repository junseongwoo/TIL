#include <stdio.h>

template <typename T>
void LongFunc(T a)
{
	// ���� �� �Լ��� ��ü
}

int main()
{
	int i = 1;
	unsigned u = 2;
	short s = 3;

	LongFunc(i);
	LongFunc(u);
	LongFunc(s);
}
