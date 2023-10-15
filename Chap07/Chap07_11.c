#include <stdio.h>
int main() {

	int score[5][4] = {28,28,26,9,30,27,30,10,25,26,24,8,18,22,22,5,24,25,30,10};
	int i,j;
	float a=0, b=0, c=0, d=0;

	for (i = 0; i < 5; i++)
	{
		printf("�л�%5d��:",i+1);
		for (j = 0;j < 4; j++)
		{
		printf("%5d", score[i][j]);

		}
		printf(" ==> %4d", (score[i][0] + score[i][1] + score[i][2] + score[i][3]));
		printf("\n");
	}

	printf("�׸� ���:   ");
	for (j = 0; j < 5; j++)
	{
		a += (score[j][0]);
			

	}
	printf("%5.2f ", a/5);

	for (j = 0; j < 5; j++)
	{
		b += (score[j][1]);


	}
	printf("%5.2f ", b/5);

	for (j = 0; j < 5; j++)
	{
		c += (score[j][2]);


	}
	printf("%5.2f ", c/5);

	for (j = 0; j < 5; j++)
	{
		d += (score[j][3]);


	}
	printf("%5.2f ", d/5);

	return 0;
	}
