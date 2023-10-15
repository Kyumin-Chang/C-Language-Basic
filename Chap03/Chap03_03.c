#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	float weight, hight;

	printf("����(kg)? ");

	scanf("%f", &weight);

	printf("\n����(m)? ");

	scanf("%f", &hight);

	printf("\n��ġ ������ : %f J", weight*9.8*hight);

	return 0;

}