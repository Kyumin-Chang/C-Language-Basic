#include <stdio.h>

int main()
{
	double price[5];
	int rate;
	int i;

	printf("��ǰ�� 5���� �Է��ϼ���:\n");
	
	for (i = 0; i < 5; i++)
	{
		scanf_s("%lf", &price[i]);
	}
	printf("������(%%)?");
	scanf_s("%d", &rate);

	for (i = 0; i < 5; i++)
	{
		printf("\n����: %.0lf --> ���ΰ�: %.0lf", price[i], price[i] - (price[i] * (rate / 100.0)));
	}
	return 0;
}