#include <stdio.h>
#define _CRT_SECURE_WARNINGS

double pyung(double p)
{
	double re_p;

	re_p = p*0.3025;

	return re_p;
}

double meter(double m)
{
	double re_m;

	re_m = (m*3.30578) ;

	return re_m;
}

int main()
{
	double mm;
	char a;

	printf("����?");
	scanf_s(" %lf %c", &mm, &a);

	if (a == 'm')
	{
		printf("%.2lf �������� == %.2lf ��", mm, pyung(mm));

	}

	else if (a == 'p')
	{
		printf("%.2lf �� == %.2lf ��������", mm, meter(mm));
	}

	return 0;
}