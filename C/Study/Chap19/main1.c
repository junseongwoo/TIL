#include <stdio.h>
#include "user.h"

int main(void)
{
	int n1, n2;
	int result;
	input_data(&n1, &n2);
	result = sum(n1, n2);
	/*num = scanf("%d %d", &n1, &n2);
	result = n1 + n2;*/
	printf("гу : %d\n", result);

	return 0;
}