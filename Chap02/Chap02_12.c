#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	char name[20], major[20], num[20];

	printf("�̸�?\n");
	scanf("%s", name);
	printf("�а�?\n");
	scanf("%s", major);
	printf("�й�?\n");
	scanf("%s", num);

	printf("===============================\n");
	printf("�̸� : %s\n", name);
	printf("�а� : %s\n", major);
	printf("�й� : %s\n", num);
	printf("===============================\n");

	return 0;

}