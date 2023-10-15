#include <stdio.h>

void get_rect_info(int *x, int *y, int *a, int *b)
{
	*a = *x * *y;
	*b = 2 * (*x + *y);
}

int main()
{
	int x, y, ����, �ѷ�;
	printf("����? ");
	scanf_s("%d", &x);
	printf("����? ");
	scanf_s("%d", &y);

	get_rect_info(&x, &y, &����, &�ѷ�);
	printf("����: %d, �ѷ�: %d", ����, �ѷ�);
	return 0;
}