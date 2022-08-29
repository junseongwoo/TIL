#include <stdio.h>

void print_char(char ch, int count);   

int main(void)
{
	print_char('@', 5);                

	return 0;
}

void print_char(char ch, int count)     // 매개변수는 있는데 반환이 없다.
{
	int i;

	for (i = 0; i < count; i++)         
	{
		printf("%c", ch);               
	}

	//return;         // 실제 전달되는 인수는 없으나 return을 쓸 수 있다.
}