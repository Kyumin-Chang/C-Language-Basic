#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float num1, num2;

	printf("�Ǽ� 2��? ");

	scanf("%f %f", &num1, &num2);

	printf("%f + %f = %f\n", num1, num2, num1 + num2);
	printf("%f - %f = %f", num1, num2, num1 - num2);

	return 0;



}