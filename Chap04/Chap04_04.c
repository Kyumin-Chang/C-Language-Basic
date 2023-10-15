#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float in, out, d ,k;

	printf("���(g)? ");
	scanf_s("%f", &in);

	printf("����(g)? ");
	scanf_s("%f", &out);

	k = in + out;

	d = ( out / k * 100 );

	printf("�� : %.2f %%", d);

	return 0;
}