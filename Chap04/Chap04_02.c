#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float f, c;

	printf("ȭ���µ�? ");
	scanf_s("%f", &f);

	c = (f - 32) * 5 / 9;

	printf("%.2f F = %.2f C",f,c);

	return 0;
}