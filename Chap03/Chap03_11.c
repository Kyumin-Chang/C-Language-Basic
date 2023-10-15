#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	float KRW, CU;

	printf("KRW? ");

	scanf("%f", &KRW);

	printf("\n��/�޷� ȯ��? ");

	scanf("%f", &CU);

	printf("KRW %.0f = USD %.2f", KRW, KRW/CU);

	return 0;

}