#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int lotto[6] = {12,3,5};
	int i, j;

	int lotto_real[6];
	int temp[3];

	while (1)
	{
		printf("---------------------------\n");
		printf("번호 세개를 입력하세요 : ");

		// 이렇게 한번에 받지 말고 for문을 이용해서 하나씩 받는게 오류가 안난다.
		/*scanf("%d %d %d", &temp[0],&temp[1],&temp[2]);*/
		/*printf("%d", *(temp + 0));*/

		for (i = 0; i < 3; i++)
		{
			scanf("%d", &temp[i]);
			//printf("%d ", *(temp + i));
		}

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (temp[i] != lotto[j])
				{
					lotto_real[j] = lotto[j];
					lotto_real[i + 3] = temp[i];
				}
				else
				{
					printf("중복된 값이 존재 합니다.");
					break;
				}
			}
		}

		printf("로또 번호 :");
		for (i = 0; i < 6; i++)
		{
			
			printf("%d ", *(lotto_real + i));
		}
		printf("\n");
	}
	


	return 0;
}
