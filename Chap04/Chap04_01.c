#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	float m , v;

	printf("����(kg)? ");
	scanf_s("%f", &m);

	printf("�ӷ�(m/s)? ");
	scanf_s("%f", &v);

	printf("������� : %.2f J", 0.5*m*v*v);

	return 0;
}