#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score[5][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("%d¹øÂ° ÇÐ»ýÀÇ ±¹¾î, ¿µ¾î, ¼öÇÐ, Ã¼À° Á¡¼ö : ", i+1);
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	// Æò±ÕÀº ¼Ò¼öÁ¡ Ã¹Â° ÀÚ¸® ±îÁö¸¸
	for (i = 0; i < 5; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("%d¹øÂ° ÇÐ»ý ÃÑÁ¡ : %d , Æò±Õ : %.1lf\n", (i + 1),total, avg);
	}

	for (i = 0; i < 4; i++)
	{
		total = 0;
		for (j = 0; j < 5; j++)
		{
			total += score[j][i];
		}
		avg = total / 5.0;

		switch (i)
		{
		case 0 :
			printf("±¹¾îÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
			break;
		case 1 :
			printf("¿µ¾îÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
			break;
		case 2:
			printf("¼öÇÐÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
			break;
		case 3:
			printf("Ã¼À°ÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
			break;
		default:
			break;
		}

		/*if (i == 0)
		{
			printf("±¹¾îÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
		}
		else if (i == 1)
		{
			printf("¿µ¾îÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
		}
		else if (i == 2)
		{
			printf("¼öÇÐÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
		}
		else if (i == 3)
		{
			printf("Ã¼À°ÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
		}*/
	}



	return 0;



}