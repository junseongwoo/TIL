#include <stdio.h>

int main(void)
{
	int a = 10;    // 00001010
	int b = 12;    // 00001100

	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << 1 : %d\n", a << 1);  //00010100
	printf("a >> 2 : %d\n", a >> 2);  //00000010
	
									  
	//오른쪽으로 비트 이동을 msb의 값은 부호 비트의 값을 따른다.
	char ch = 128;				      //1000 0000
	printf("ch >> 1 : %d", ch >> 1);  //1100 0000

	unsigned char ch1 = 128;
	print("ch1 >> 1 : %d", ch1 >> 1);

	return 0;
}