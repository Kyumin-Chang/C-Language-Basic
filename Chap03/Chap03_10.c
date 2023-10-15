#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	float US, CU;

	printf("USD? ");

	scanf("%f", &US);

	printf("\n��/�޷� ȯ��? ");

	scanf("%f", &CU);

	printf("USD %.2f = KRW %.2f", US, US*CU);

	return 0;

}