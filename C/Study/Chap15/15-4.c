#include <stdio.h>

int main(void)
{
	int ary[5];

	printf(" ary狼 蔼 : %u\t", ary);
	printf("  ary狼 林家 : %u\n", &ary);
	printf("  ary + 1 : %u\t", ary + 1);
	printf("ary+1狼 林家 : %u\n", &ary + 1);

	return 0;
}