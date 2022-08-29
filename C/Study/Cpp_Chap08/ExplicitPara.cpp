#include <stdio.h>

template <typename T>
void LongFunc(T a)
{
	// 아주 긴 함수의 본체
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
