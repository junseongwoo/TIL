#include <stdio.h>
#define SUM(a,b) (a)+(b)
#define MUL(a,b) (a)*(b)
#define test(a) ((a)*(10))  // °ıÈ£¸¦ ´Ù ÃÄÁà¾ß ¿øÇÏ´Â °ªÀÌ ³ª¿È 


int main(void)
{
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a+b = %d\n", SUM(a, b));
	printf("x+y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("res : %d\n", res);

	printf("test : %d\n", test((a) + (10)));  // 110ÀÌ ³ª¿È 
	printf("test : %d\n", test((a)*(10)));  

	return 0;
}