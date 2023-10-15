#include <stdio.h>
#define _CRT_SECURE_WARNINGS

int main() {

	int x, y; 

	printf("���� ��ǥ(x,y)? ");
	scanf_s("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y>0)
	{
		printf("2��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3��и鿡 �ֽ��ϴ�.");
	}
	else
		printf("4��и鿡 �ֽ��ϴ�.");

	return 0;

}