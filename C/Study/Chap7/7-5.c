#include <stdio.h>

void fruit(void);

int main(void)
{

	fruit();  

	return 0;
}

void fruit(void) 
{  
	printf("apple\n");
	fruit();                // 자신을 다시 호출
}

// 종료시키는 조건 = 기저 조건이 필요하다. 