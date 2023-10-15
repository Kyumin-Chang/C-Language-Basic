#include <stdio.h>
#define _CRT_SECURE_WARNINGS

int main()
{
	int y;
	printf("����?");
	scanf_s("%d", &y);
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		printf("%d�� �����Դϴ�.", y);
	else
		printf("%d�� ������ �ƴմϴ�.", y);
}