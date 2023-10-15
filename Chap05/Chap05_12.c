#include <stdio.h>
#define _CRT_SECURE_WARNINGS


int main(void)

{
	double a, rate;
	double income, s;
	int year;

	printf("����: ");

	scanf_s("%lf", &a);

	printf("������: ");

	scanf_s("%lf", &rate);

	for (int i = 0; i < 10; i++)

	{

		income = a * (1 + 0.01*rate);

		s = a * (0.01*rate);

		printf("%d��° ����: %.2f,  �����հ�: %.2f��\n", i + 1,s , income);

		a = income;
	}

	return 0;
}