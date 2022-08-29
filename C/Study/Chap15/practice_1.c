#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void student_score(int(*)[4]);
void obj_total_score(int(*)[4]);

int main(void)
{
	int score[5][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 5; i++)
	{
		printf("%d¹øÂ° ÇÐ»ýÀÇ ±¹¾î, ¿µ¾î, ¼öÇÐ, Ã¼À° Á¡¼ö : ", i + 1);
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	student_score(score);
	obj_total_score(score);

	return 0;
}

void student_score(int (*pa)[4])
{
	int i, j;
	int total;
	double avg;

	// Æò±ÕÀº ¼Ò¼öÁ¡ Ã¹Â° ÀÚ¸® ±îÁö¸¸
	for (i = 0; i < 5; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += pa[i][j];
		}
		avg = total / 4.0;
		printf("%d¹øÂ° ÇÐ»ý ÃÑÁ¡ : %d , Æò±Õ : %.1lf\n", (i + 1), total, avg);
	}
}

void obj_total_score(int(*pa)[4])
{
	int i, j;
	int total;
	double avg;

	for (i = 0; i < 4; i++)
	{
		total = 0;
		for (j = 0; j < 5; j++)
		{
			total += pa[j][i];
		}
		avg = total / 5.0;

		switch (i)
		{
		case 0:
			printf("±¹¾îÀÇ ÃÑÁ¡ : %d, Æò±Õ : %.1lf\n", total, avg);
			break;
		case 1:
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
	}
}
