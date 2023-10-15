#include <stdio.h>
#define _CRT_SECURE_WARNINGS

double Fatrenheit(double c)
{
	double re_f;

	re_f = (c*1.8) + 32;

	return re_f;
}

double Celsius(double f)
{
	double re_c;

	re_c = (f - 32) / 1.8;

	return re_c;
}

int main()
{
	double tem;
	char t;

	printf("�µ�?");
	scanf_s("%lf %c", &tem,&t);

	if (t == 'C')
	{
		printf("%.2lf C ==> %.2lf F", tem, Fatrenheit(tem));
	
	}

	else if (t == 'F')
	{
		printf("%.2lf F ==> %.2lf C", tem, Celsius(tem));
	}

	return 0;
}