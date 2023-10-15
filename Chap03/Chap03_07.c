#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	double num;

	printf("�Ǽ�? ");

	scanf("%lf", &num);

	printf("\n���� : %e", num*num);

	printf("\n������ : %e", num*num*num);

	return 0;


}